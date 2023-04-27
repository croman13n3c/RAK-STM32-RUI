#ifndef _ATCMD_PERMISSION_H_
#define _ATCMD_PERMISSION_H_


#ifndef AT_PERM
#define AT_PERM             ATCMD_PERM_READ
#endif

#ifndef ATZ_PERM
#define ATZ_PERM            ATCMD_PERM_READ
#endif

#ifndef ATR_PERM
#define ATR_PERM            ATCMD_PERM_READ
#endif

#ifndef AT_DEBUG_PERM
#define AT_DEBUG_PERM       ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_BOOT_PERM
#define AT_BOOT_PERM        ATCMD_PERM_READ
#endif

#ifndef ATE_PERM
#define ATE_PERM            ATCMD_PERM_READ
#endif

#ifndef AT_FSN_PERM
#define AT_FSN_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_FACTORY_PERM
#define AT_FACTORY_PERM     ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_SN_PERM
#define AT_SN_PERM          ATCMD_PERM_READ
#endif

#ifndef AT_BAT_PERM
#define AT_BAT_PERM         ATCMD_PERM_READ
#endif

#ifndef AT_BUILDTIME_PERM
#define AT_BUILDTIME_PERM   ATCMD_PERM_READ
#endif

#ifndef AT_REPOINFO_PERM
#define AT_REPOINFO_PERM    ATCMD_PERM_READ
#endif

#ifndef AT_VER_PERM
#define AT_VER_PERM         ATCMD_PERM_READ
#endif

#ifndef AT_BOOTVER_PERM
#define AT_BOOTVER_PERM         ATCMD_PERM_READ
#endif

#ifndef AT_CLIVER_PERM
#define AT_CLIVER_PERM      ATCMD_PERM_READ
#endif

#ifndef AT_APIVER_PERM
#define AT_APIVER_PERM      ATCMD_PERM_READ
#endif

#ifndef AT_HWMODEL_PERM
#define AT_HWMODEL_PERM     ATCMD_PERM_READ
#endif

#ifndef AT_HWID_PERM
#define AT_HWID_PERM        ATCMD_PERM_READ
#endif

#ifndef AT_ALIAS_PERM
#define AT_ALIAS_PERM       ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_SYSV_PERM
#define AT_SYSV_PERM        ATCMD_PERM_READ
#endif

#ifndef AT_UID_PERM
#define AT_UID_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_BLEMAC_PERM
#define AT_BLEMAC_PERM      ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif


#ifndef AT_SLEEP_PERM
#define AT_SLEEP_PERM       ATCMD_PERM_WRITE
#endif

#ifndef AT_AUTOSLEEP_PERM
#define AT_AUTOSLEEP_PERM       ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_LOCK_PERM
#define AT_LOCK_PERM        ATCMD_PERM_READ
#endif

#ifndef AT_PWORD_PERM
#define AT_PWORD_PERM       ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_BAUD_PERM
#define AT_BAUD_PERM        ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_ATM_PERM
#define AT_ATM_PERM         ATCMD_PERM_READ
#endif

#ifndef AT_APM_PERM
#define AT_APM_PERM         ATCMD_PERM_READ
#endif

#ifndef ATD_PERM
#define ATD_PERM            ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_APPEUI_PERM
#define AT_APPEUI_PERM      ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_APPKEY_PERM
#define AT_APPKEY_PERM      ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_APPSKEY_PERM
#define AT_APPSKEY_PERM     ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_DEVADDR_PERM
#define AT_DEVADDR_PERM     ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_DEVEUI_PERM
#define AT_DEVEUI_PERM      ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_NETID_PERM
#define AT_NETID_PERM       ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_NWKSKEY_PERM
#define AT_NWKSKEY_PERM     ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_CFM_PERM
#define AT_CFM_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_CFS_PERM
#define AT_CFS_PERM         ATCMD_PERM_READ
#endif

#ifndef AT_JOIN_PERM
#define AT_JOIN_PERM        ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_NJM_PERM
#define AT_NJM_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_NJS_PERM
#define AT_NJS_PERM         ATCMD_PERM_READ
#endif

#ifndef AT_RECV_PERM
#define AT_RECV_PERM        ATCMD_PERM_READ
#endif

#ifndef AT_SEND_PERM
#define AT_SEND_PERM        ATCMD_PERM_WRITE
#endif

#ifndef AT_LPSEND_PERM
#define AT_LPSEND_PERM      ATCMD_PERM_WRITE
#endif

#ifndef AT_RETY_PERM
#define AT_RETY_PERM        ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_ADR_PERM
#define AT_ADR_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_CLASS_PERM
#define AT_CLASS_PERM       ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_DCS_PERM
#define AT_DCS_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_DR_PERM
#define AT_DR_PERM          ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_JN1DL_PERM
#define AT_JN1DL_PERM       ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_JN2DL_PERM
#define AT_JN2DL_PERM       ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_PNM_PERM
#define AT_PNM_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_RX1DL_PERM
#define AT_RX1DL_PERM       ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_RX2DL_PERM
#define AT_RX2DL_PERM       ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_RX2DR_PERM
#define AT_RX2DR_PERM       ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_RX2FQ_PERM
#define AT_RX2FQ_PERM       ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_TXP_PERM
#define AT_TXP_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_LINKCHECK_PERM
#define AT_LINKCHECK_PERM   ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_TIMEREQ_PERM
#define AT_TIMEREQ_PERM   ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_PGSLOT_PERM
#define AT_PGSLOT_PERM      ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_BFREQ_PERM
#define AT_BFREQ_PERM       ATCMD_PERM_READ
#endif

#ifndef AT_BTIME_PERM
#define AT_BTIME_PERM       ATCMD_PERM_READ 
#endif

#ifndef AT_BGW_PERM
#define AT_BGW_PERM         ATCMD_PERM_READ
#endif

#ifndef AT_LTIME_PERM
#define AT_LTIME_PERM       ATCMD_PERM_READ
#endif

#ifndef AT_RSSI_PERM
#define AT_RSSI_PERM        ATCMD_PERM_READ
#endif

#ifndef AT_ARSSI_PERM
#define AT_ARSSI_PERM       ATCMD_PERM_READ
#endif

#ifndef AT_SNR_PERM
#define AT_SNR_PERM         ATCMD_PERM_READ
#endif

#ifndef AT_MASK_PERM
#define AT_MASK_PERM        ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_CHE_PERM
#define AT_CHE_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_CHS_PERM
#define AT_CHS_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_BAND_PERM
#define AT_BAND_PERM        ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_NWM_PERM
#define AT_NWM_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_PFREQ_PERM
#define AT_PFREQ_PERM       ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_PSF_PERM
#define AT_PSF_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_PBW_PERM
#define AT_PBW_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_PCR_PERM
#define AT_PCR_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_PPL_PERM
#define AT_PPL_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_PTP_PERM
#define AT_PTP_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_PSEND_PERM
#define AT_PSEND_PERM       ATCMD_PERM_WRITE
#endif

#ifndef AT_PRECV_PERM
#define AT_PRECV_PERM       ATCMD_PERM_WRITE
#endif

#ifndef AT_ENCRY_PERM
#define AT_ENCRY_PERM       ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_ENCKEY_PERM
#define AT_ENCKEY_PERM      ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_P2P_PERM
#define AT_P2P_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_PBR_PERM
#define AT_PBR_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_PFDEV_PERM
#define AT_PFDEV_PERM       ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_ADDMULC_PERM
#define AT_ADDMULC_PERM     ATCMD_PERM_WRITE
#endif

#ifndef AT_RMVMULC_PERM
#define AT_RMVMULC_PERM     ATCMD_PERM_WRITE
#endif

#ifndef AT_LSTMULC_PERM
#define AT_LSTMULC_PERM     ATCMD_PERM_READ
#endif

#ifndef AT_TRSSI_PERM
#define AT_TRSSI_PERM       ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_TTONE_PERM
#define AT_TTONE_PERM       ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_TTX_PERM
#define AT_TTX_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_TRX_PERM
#define AT_TRX_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_TCONF_PERM
#define AT_TCONF_PERM       ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_TTH_PERM
#define AT_TTH_PERM         ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_TOFF_PERM
#define AT_TOFF_PERM        ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_CERTIF_PERM
#define AT_CERTIF_PERM      ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_CW_PERM
#define AT_CW_PERM      	ATCMD_PERM_READ | ATCMD_PERM_WRITE
#endif

#ifndef AT_CELL_PERM
#define AT_CELL_PERM      	ATCMD_PERM_READ | ATCMD_PERM_WRITE 
#endif

#endif
