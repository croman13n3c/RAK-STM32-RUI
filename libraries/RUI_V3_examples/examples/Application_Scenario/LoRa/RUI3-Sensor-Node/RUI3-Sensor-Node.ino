/*************************************
 * This example is from https://github.com/beegee-tokyo/RUI3-Sensor-Node
 *************************************/  
/**
 * @file WisBlock-Sensor-Node.ino
 * @author Bernd Giesecke (bernd@giesecke.tk)
 * @brief RUI3 based code for easy testing of WisBlock I2C modules
 * @version 0.1
 * @date 2022-04-10
 *
 * @copyright Copyright (c) 2022
 *
 */ 
#include "main.h"
#include "udrv_timer.h"
    
/** Initialization results */ 
bool ret;

/** LoRaWAN packet */ 
    WisCayenne g_solution_data(255);

/** Set the device name, max length is 10 characters */ 
char g_dev_name[64] =
    "RUI3 Sensor Node                                              ";

/** Device settings */ 
    s_lorawan_settings g_lorawan_settings;


/** OTAA Device EUI MSB */ 
uint8_t node_device_eui[8] = { 0 };	// ac1f09fff8683172

/** OTAA Application EUI MSB */ 
uint8_t node_app_eui[8] = { 0 };	// ac1f09fff8683172

/** OTAA Application Key MSB */ 
uint8_t node_app_key[16] = { 0 };	// efadff29c77b4829acf71e1a6e76f713


/** Counter for GNSS readings */ 
    uint16_t check_gnss_counter = 0;

/** Max number of GNSS readings before giving up */ 
    uint16_t check_gnss_max_try = 0;

/** Flag for GNSS readings active */ 
bool gnss_active = false;

/**
 * @brief Callback after packet was received
 *
 * @param data Structure with the received data
 */ 
void receiveCallback(SERVICE_LORA_RECEIVE_T * data) 
    { 
	     data->RxDatarate, data->Rssi, data->Snr);
  
    
    
    


/**
 * @brief Callback after TX is finished
 *
 * @param status TX status
 */ 
void sendCallback(int32_t status) 
  
  


/**
 * @brief Callback after join request cycle
 *
 * @param status Join result
 */ 
void joinCallback(int32_t status) 
      // MYLOG("JOIN-CB", "Join result %d", status);
      if (status != 0)
    
      { 
       
       
       else
       
       
	      api.lorawan.dr.set(g_lorawan_settings.
				 data_rate) ? "Success" : "Fail");
       
	      api.lorawan.adr.set(g_lorawan_settings.
				  adr_enabled ? 1 : 0) ? "Success" :
	      "Fail"); 
       
       

       
#ifdef IS_GNSS_TRACKER_RAK3172
/**
 * @brief GNSS location aqcuisition
 * Called every 2.5 seconds by timer 1
 * Gives up after 1/2 of send frequency
 * or when location was aquired
 *
 */ 
       void gnss_handler(void *) 
       { 
       // Power down the module
       digitalWrite(WB_IO2, LOW); 
       
       
       
       else
       
       
       // Power down the module
       digitalWrite(WB_IO2, LOW); 
       
       
       
       
       

       
#endif	/* 
       
/**
 * @brief Arduino setup, called once after reboot/power-up
 *
 */ 
       void setup() 
       { 
       
       
       // Use RAK_CUSTOM_MODE supresses AT command and default responses from RUI3
       // Serial.begin(115200, RAK_CUSTOM_MODE);
       // Use "normal" mode to have AT commands available
       Serial.begin(115200); 
#ifdef _VARIANT_RAK4630_
       time_t serial_timeout = millis(); 
       // On nRF52840 the USB serial is not available immediately
       while (!Serial.available()) 
       { 
       { 
	
	else
	
	
	
	
#else	/* 
       // For RAK3172 just wait a little bit for the USB to be ready
       delay(5000); 
#endif	/* 
       
       // Find WisBlock I2C modules
       find_modules();
       
       
	      "------------------------------------------------------");
       
	/************************************************************************/ 
       /* Experimental                                                         */ 
       /* LoRaWAN credentials and settings are taken from structure            */ 
       /* s_lorawan_settings. This is used in Arduino BSP WisBlock API and not */ 
       /* fully implemented here. Once custom AT commands are available this   */ 
       /* can be improved or removed                                           */ 
	/************************************************************************/ 
       {
       
       
       // MYLOG("SETUP", "Got AppEUI %02X%02X%02X%02X%02X%02X%02X%02X",
       //        node_app_eui[0], node_app_eui[1], node_app_eui[2], node_app_eui[3],
       //        node_app_eui[4], node_app_eui[5], node_app_eui[6], node_app_eui[7]);
       if (node_app_eui[0] == 0) 
				    
				    else
				    
				    
				    
				    
				    
					 set(g_lorawan_settings.
					     node_app_eui,
					     8)) 
							    "LoRaWan OTAA - set app EUI failed!");
				    
				    
				    
					   get(node_app_key,
					       16)) 
				    
					 0) 
					       
					       else
					       
					       
					       
					       
					       if (!api.lorawan.appkey.
						   set(g_lorawan_settings.
						       node_app_key,
						       16)) 
					       
						      "LoRaWan OTAA - set application key failed!");
					       
					       
					       
						      get(node_device_eui,
							  8)) 
					       
						    0) 
							  false; 
							  
							  else
							  
							  
							  
							  
							  if (!api.lorawan.
							      deui.
							      set
							      (g_lorawan_settings.
							       node_device_eui,
							       8)) 
							  
								 "LoRaWan OTAA - set device EUI failed! \r\n");
							  
							  
							  
							  
/*************************************
LoRaWAN band setting:
RAK_REGION_EU433	0
RAK_REGION_CN470	1
RAK_REGION_RU864	2
RAK_REGION_IN865	3
RAK_REGION_EU868	4
RAK_REGION_US915	5
RAK_REGION_AU915	6
RAK_REGION_KR920	7
RAK_REGION_AS923	8
RAK_REGION_AS923-2	9
RAK_REGION_AS923-3	10
RAK_REGION_AS923-4	11
*************************************/ 
							  
// Set region
#if RUI_DEV == 1
							  MYLOG("SETUP",
								"Set Class A %s",
								api.
								lorawan.
								deviceClass.
								set(0) ?
								"Success" :
								"Fail"); 
#else	/* 
							  MYLOG("SETUP",
								"Set Class C %s",
								api.
								lorawan.
								deviceClass.
								set(2) ?
								"Success" :
								"Fail"); 
#endif	/* 
// Set the region
							  MYLOG("SETUP",
								"Set the region %s",
								api.
								lorawan.
								band.
								set
								(g_lorawan_settings.
								 lora_region)
								? "Success"
								: "Fail");
							  
								   "Set the transmit power %s",
								   api.
								   lorawan.
								   txp.
								   set
								   (g_lorawan_settings.
								    tx_power)
								   ?
								   "Success"
								   :
								   "Fail");
							  
							  // Set subband (only US915, AU195 and CN470)
							  if ((g_lorawan_settings.lora_region == RAK_REGION_US915) || 
							  
							  // Set the network join mode
							  MYLOG("SETUP",
								"Set the network join mode %s",
								api.
								lorawan.
								njm.
								set
								(g_lorawan_settings.
								 otaa_enabled)
								? "Success"
								: "Fail");
							  
							  // Set packet mode (confirmed/unconfirmed)
							  if
							  (g_lorawan_settings.
							   confirmed_msg_enabled)
							  
							  
								 "Set confirmed packets  %s",
								 api.
								 lorawan.
								 cfm.
								 set(0) ?
								 "Success"
								 : "Fail");
							  
							  
							  else
							  
							  
								 "Set unconfirmed packets  %s",
								 api.
								 lorawan.
								 cfm.
								 set(1) ?
								 "Success"
								 : "Fail");
							  
							  
							  // Start the join process
							  if (!
							      (ret =
							       api.lorawan.
							       join())) 
							  
								 "LoRaWan OTAA - join fail! \r\n");
							  
							  
							  (LED_GREEN, LOW);
							  
							  // Setup the callbacks for joined and send finished
							  api.lorawan.
							  registerRecvCallback
							  (receiveCallback);
							  
							  registerSendCallback
							  (sendCallback);
							  
							  registerJoinCallback
							  (joinCallback);
							  
							  // Get saved sending frequency from flash
							  get_at_setting
							  (SEND_FREQ_OFFSET);
							  
							  // Create a unified timer in C language. This API is defined in udrv_timer.h. It will be replaced by api.system.timer.create() after story #1195 is done.
							  udrv_timer_create
							  (TIMER_0,
							   sensor_handler,
							   HTMR_PERIODIC);
							  
							  (g_lorawan_settings.
							   send_repeat_time
							   != 0) 
							  // Start a unified C timer in C language. This API is defined in udrv_timer.h. It will be replaced by api.system.timer.start() after story #1195 is done.
							  udrv_timer_start
							  (TIMER_0,
							   g_lorawan_settings.
							   send_repeat_time,
							   NULL); 
							  
							  // Register the custom AT command to set the send frequency
							  MYLOG("SETUP",
								"Add custom AT command %s",
								init_frequency_at
								()?
								"Success" :
								"Fail");
							  
								   "Waiting for Lorawan join...");
							  
							  // wait for Join success
							  while (api.
								 lorawan.
								 njs.
								 get() ==
								 0) 
							  
							  join();
							  
							  
							  // Show found modules
							  announce_modules
							  ();
							  
							  (LED_BLUE, LOW);
							  
							  
/**
 * @brief sensor_handler is a timer function called every
 * g_lorawan_settings.send_repeat_time milliseconds. Default is 120000. Can be
 * changed in main.h
 *
 */ 
							  void
							  sensor_handler
							  (void *) 
							  // MYLOG("SENS", "Start");
							  digitalWrite
							  (LED_BLUE, HIGH);
							  
							  // Check if the node has joined the network
							  if (!api.lorawan.
							      njs.
							      get()) 
							  
								 "Not joined, skip sending");
							  
							  
							  // Clear payload
							  g_solution_data.
							  reset(); 
#ifdef IS_GNSS_TRACKER_RAK3172
							  // Helium Mapper ignores sensor and sends only location data
							  if (gnss_format
							      !=
							      HELIUM_MAPPER)
							  
#endif	/* 
							  { 
							  // Read sensor data
							  get_sensor_values
							  (); 
							  // Add battery voltage
							  g_solution_data.
							  addVoltage
							  (LPP_CHANNEL_BATT,
							   api.system.bat.
							   get()); 
							  
							  // No GNSS module, just send the packet with the sensor data
							  send_packet(); 
							  // digitalWrite(LED_BLUE, LOW);
							  }
							  
							  

							  
/**
 * @brief This example is complete timer
 * driven. The loop() does nothing than
 * sleep.
 *
 */ 
							  void loop() 
							  { 
							  sleep.all();
							  
/**
 * @brief Send the data packet that was prepared in
 * Cayenne LPP format by the different sensor and location
 * aqcuision functions
 *
 */ 
							  void
							  send_packet(void)
							  
							  
								 "Send packet with size %d",
								 g_solution_data.
								 getSize
								 ()); 
							  // Send the packet
							  if (api.lorawan.
							      send
							      (g_solution_data.
							       getSize(),
							       g_solution_data.
							       getBuffer(),
							       2,
							       g_lorawan_settings.
							       confirmed_msg_enabled,
							       1)) 
							  
								 "Packet enqueued");
							  
							  
							  else
							  
							  
								 "Send failed");
							  
							  

							  