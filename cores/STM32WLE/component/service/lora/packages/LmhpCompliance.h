/*!
 * \file      LmhpCompliance.h
 *
 * \brief     Implements the LoRa-Alliance certification protocol handling
 *
 * \copyright Revised BSD License, see section \ref LICENSE.
 *
 * \code
 *                ______                              _
 *               / _____)             _              | |
 *              ( (____  _____ ____ _| |_ _____  ____| |__
 *               \____ \| ___ |    (_   _) ___ |/ ___)  _ \
 *               _____) ) ____| | | || |_| ____( (___| | | |
 *              (______/|_____)_|_|_| \__)_____)\____)_| |_|
 *              (C)2013-2018 Semtech
 *
 * \endcode
 *
 * \author    Miguel Luis ( Semtech )
 */
#ifndef __LMHP_COMPLIANCE__
#define __LMHP_COMPLIANCE__
#ifdef SUPPORT_LORA
#ifdef __cplusplus
extern "C" {
#endif

#include "LoRaMac.h"
#include "LmHandlerTypes.h"
#include "LmhPackage.h"

/*!
 * Compliance package identifier.
 * 
 * \remark This value must be unique amongst the packages
 */
#define PACKAGE_ID_COMPLIANCE                       0

/*!
 * Compliance test protocol handler parameters
 */
typedef struct LmhpComplianceParams_s
{
#ifdef LORA_STACK_104
    /*!
     * Current firmware version
     */
    Version_t FwVersion;
    /*!
     *
     */
    void ( *OnTxPeriodicityChanged )( uint32_t periodicity );
    /*!
     *
     */
    void ( *OnTxFrameCtrlChanged )( LmHandlerMsgTypes_t isTxConfirmed );
    /*!
     *
     */
    void ( *OnPingSlotPeriodicityChanged )( uint8_t pingSlotPeriodicity );
#else
    /*!
     * Holds the ADR state
     */
    bool AdrEnabled;
    /*!
    * LoRaWAN ETSI duty cycle control enable/disable
    *
    * \remark Please note that ETSI mandates duty cycled transmissions. Use only for test purposes
    */
    bool DutyCycleEnabled;
    /*!
     * Stops unnecessary peripherals.
     *
     * \remark Use for the compliance tests protocol handling in order to
     *         reduce the power consumption.
     */
    void ( *StopPeripherals )( void );
    /*!
     * Starts previously stopped peripherals.
     *
     * \remark Use for the compliance tests protocol handling in order to
     *         reduce the power consumption.
     */
    void ( *StartPeripherals )( void );
#endif
}LmhpComplianceParams_t;

LmhPackage_t *LmphCompliancePackageFactory( void );

#ifdef LORA_STACK_104
typedef struct ClassBStatus_s
{
    bool         IsBeaconRxOn;
    uint8_t      PingSlotPeriodicity;
    uint16_t     BeaconCnt;
    BeaconInfo_t Info;
} ClassBStatus_t;

/*!
 * LoRaWAN compliance tests support data
 */
typedef struct ComplianceTestState_s
{
    bool                Initialized;
    bool                IsTxPending;
    TimerTime_t         TxPendingTimestamp;
    LmHandlerMsgTypes_t IsTxConfirmed;
    uint8_t             DataBufferMaxSize;
    uint8_t             DataBufferSize;
    uint8_t*            DataBuffer;
    uint16_t            RxAppCnt;
    bool                IsBeaconRxStatusIndOn;
    ClassBStatus_t      ClassBStatus;
    bool                IsResetCmdPending;
    bool                IsClassReqCmdPending;
    DeviceClass_t       NewClass;
} ComplianceTestState_t;
#else
void OnComplianceTxNextPacketTimerEvent( void *context );
#endif

#ifdef __cplusplus
}
#endif
#endif // end SUPPORT_LORA
#endif // __LMHP_COMPLIANCE__
