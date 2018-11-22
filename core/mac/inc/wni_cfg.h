/*
 * Copyright (c) 2011-2018 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef __WNICFG_H
#define __WNICFG_H

/*
 * Configuration Parameter ID for STA
 */

enum {
	WNI_CFG_STA_ID,
	WNI_CFG_ACTIVE_MAXIMUM_CHANNEL_TIME,
	WNI_CFG_PASSIVE_MAXIMUM_CHANNEL_TIME,
	WNI_CFG_DOT11_MODE,
	WNI_CFG_VALID_CHANNEL_LIST,
	WNI_CFG_APSD_ENABLED,
	WNI_CFG_11D_ENABLED,
	WNI_CFG_MAX_TX_POWER_2_4,
	WNI_CFG_MAX_TX_POWER_5,
	WNI_CFG_CURRENT_TX_POWER_LEVEL,
	WNI_CFG_COUNTRY_CODE,
	WNI_CFG_11H_ENABLED,
	WNI_CFG_LOCAL_POWER_CONSTRAINT,
	WNI_CFG_SCAN_CONTROL_LIST,
	WNI_CFG_TX_BF_CAP,
	WNI_CFG_AS_CAP,
	WNI_CFG_SCAN_IN_POWERSAVE,
	WNI_CFG_IBSS_AUTO_BSSID,
	WNI_CFG_WPS_UUID,
	WNI_CFG_TELE_BCN_WAKEUP_EN,
	WNI_CFG_TELE_BCN_MAX_LI,
	WNI_CFG_ENABLE_MCC_ADAPTIVE_SCHED,
	WNI_CFG_DISABLE_LDPC_WITH_TXBF_AP,
	WNI_CFG_IBSS_ATIM_WIN_SIZE,
	WNI_CFG_PS_WOW_DATA_INACTIVITY_TIMEOUT,
	WNI_CFG_OBSS_DETECTION_OFFLOAD,
	WNI_CFG_OBSS_COLOR_COLLISION_OFFLOAD,
	WNI_CFG_TWT_REQUESTOR,
	WNI_CFG_TWT_RESPONDER,
	WNI_CFG_BCAST_TWT,
	/* Any new items to be added should be above this strictly */
	CFG_PARAM_MAX_NUM
};
/*
 * String parameter lengths
 */

#define WNI_CFG_STA_ID_LEN    6
#define WNI_CFG_PROPRIETARY_OPERATIONAL_RATE_SET_LEN    4
#define WNI_CFG_VALID_CHANNEL_LIST_LEN    100
#define WNI_CFG_MAX_TX_POWER_2_4_LEN    128
#define WNI_CFG_MAX_TX_POWER_5_LEN    128
#define WNI_CFG_COUNTRY_CODE_LEN    3
#define WNI_CFG_SCAN_CONTROL_LIST_LEN    128
#define WNI_CFG_PROBE_RSP_ADDNIE_DATA1_LEN    255
#define WNI_CFG_ASSOC_RSP_ADDNIE_DATA_LEN    255
#define WNI_CFG_PROBE_RSP_BCN_ADDNIE_DATA_LEN    255
#define WNI_CFG_WPS_UUID_LEN    16
#define WNI_CFG_HE_PPET_LEN     25

/*
 * Integer parameter min/max/default values
 */
#define WNI_CFG_EXCLUDE_UNENCRYPTED_STAMIN    0
#define WNI_CFG_EXCLUDE_UNENCRYPTED_STAMAX    1
#define WNI_CFG_EXCLUDE_UNENCRYPTED_STADEF    0

#define WNI_CFG_ACTIVE_MAXIMUM_CHANNEL_TIME_STAMIN    0
#define WNI_CFG_ACTIVE_MAXIMUM_CHANNEL_TIME_STAMAX    65535
#define WNI_CFG_ACTIVE_MAXIMUM_CHANNEL_TIME_STADEF    40

#define WNI_CFG_PASSIVE_MINIMUM_CHANNEL_TIME_STAMIN    0
#define WNI_CFG_PASSIVE_MINIMUM_CHANNEL_TIME_STAMAX    65535
#define WNI_CFG_PASSIVE_MINIMUM_CHANNEL_TIME_STADEF    60

#define WNI_CFG_PASSIVE_MAXIMUM_CHANNEL_TIME_STAMIN    0
#define WNI_CFG_PASSIVE_MAXIMUM_CHANNEL_TIME_STAMAX    65535
#define WNI_CFG_PASSIVE_MAXIMUM_CHANNEL_TIME_STADEF    110

#define WNI_CFG_PS_ENABLE_BCN_FILTER_STAMIN    0
#define WNI_CFG_PS_ENABLE_BCN_FILTER_STAMAX    1
#define WNI_CFG_PS_ENABLE_BCN_FILTER_STADEF    1

#define WNI_CFG_PS_ENABLE_HEART_BEAT_STAMIN    0
#define WNI_CFG_PS_ENABLE_HEART_BEAT_STAMAX    1
#define WNI_CFG_PS_ENABLE_HEART_BEAT_STADEF    1

#define WNI_CFG_PS_ENABLE_RSSI_MONITOR_STAMIN    0
#define WNI_CFG_PS_ENABLE_RSSI_MONITOR_STAMAX    1
#define WNI_CFG_PS_ENABLE_RSSI_MONITOR_STADEF    0

#define WNI_CFG_RF_SETTLING_TIME_CLK_STAMIN    0
#define WNI_CFG_RF_SETTLING_TIME_CLK_STAMAX    60000
#define WNI_CFG_RF_SETTLING_TIME_CLK_STADEF    1500

#define WNI_CFG_PHY_MODE_STAMIN    0
#define WNI_CFG_PHY_MODE_STAMAX    3
#define WNI_CFG_PHY_MODE_STADEF    0

#define WNI_CFG_PHY_MODE_11A    0
#define WNI_CFG_PHY_MODE_11B    1
#define WNI_CFG_PHY_MODE_11G    2
#define WNI_CFG_PHY_MODE_NONE    3

#define WNI_CFG_DOT11_MODE_STAMIN    0
#define WNI_CFG_DOT11_MODE_STAMAX    10
#define WNI_CFG_DOT11_MODE_STADEF    0

#define WNI_CFG_DOT11_MODE_ALL    0
#define WNI_CFG_DOT11_MODE_11A    1
#define WNI_CFG_DOT11_MODE_11B    2
#define WNI_CFG_DOT11_MODE_11G    3
#define WNI_CFG_DOT11_MODE_11N    4
#define WNI_CFG_DOT11_MODE_11G_ONLY    5
#define WNI_CFG_DOT11_MODE_11N_ONLY    6
#define WNI_CFG_DOT11_MODE_11AC    7
#define WNI_CFG_DOT11_MODE_11AC_ONLY    8
#define WNI_CFG_DOT11_MODE_11AX    9
#define WNI_CFG_DOT11_MODE_11AX_ONLY    10

#define WNI_CFG_CURRENT_CHANNEL_STAMIN    0
#define WNI_CFG_CURRENT_CHANNEL_STAMAX    173
#define WNI_CFG_CURRENT_CHANNEL_STADEF    1

#define WNI_CFG_RATE_ADAPTATION_TYPE_FIXED    0
#define WNI_CFG_RATE_ADAPTATION_TYPE_AUTO    1
#define WNI_CFG_RATE_ADAPTATION_TYPE_SNR_BASED    2

#define WNI_CFG_FIXED_RATE_STAMIN    0
#define WNI_CFG_FIXED_RATE_STAMAX    44
#define WNI_CFG_FIXED_RATE_STADEF    0

#define WNI_CFG_FIXED_RATE_AUTO    0
#define WNI_CFG_FIXED_RATE_1MBPS    1
#define WNI_CFG_FIXED_RATE_2MBPS    2
#define WNI_CFG_FIXED_RATE_5_5MBPS    3
#define WNI_CFG_FIXED_RATE_11MBPS    4
#define WNI_CFG_FIXED_RATE_6MBPS    5
#define WNI_CFG_FIXED_RATE_9MBPS    6
#define WNI_CFG_FIXED_RATE_12MBPS    7
#define WNI_CFG_FIXED_RATE_18MBPS    8
#define WNI_CFG_FIXED_RATE_24MBPS    9
#define WNI_CFG_FIXED_RATE_36MBPS    10
#define WNI_CFG_FIXED_RATE_48MBPS    11
#define WNI_CFG_FIXED_RATE_54MBPS    12
#define WNI_CFG_FIXED_RATE_6_5MBPS_MCS0_20MHZ_SIMO    13
#define WNI_CFG_FIXED_RATE_13MBPS_MCS1_20MHZ_SIMO    14
#define WNI_CFG_FIXED_RATE_19_5MBPS_MCS2_20MHZ_SIMO    15
#define WNI_CFG_FIXED_RATE_26MBPS_MCS3_20MHZ_SIMO    16
#define WNI_CFG_FIXED_RATE_39MBPS_MCS4_20MHZ_SIMO    17
#define WNI_CFG_FIXED_RATE_52MBPS_MCS5_20MHZ_SIMO    18
#define WNI_CFG_FIXED_RATE_58_5MBPS_MCS6_20MHZ_SIMO    19
#define WNI_CFG_FIXED_RATE_65MBPS_MCS7_20MHZ_SIMO    20
#define WNI_CFG_FIXED_RATE_7_2MBPS_MCS0_20MHZ_SIMO_SGI    21
#define WNI_CFG_FIXED_RATE_14_4MBPS_MCS1_20MHZ_SIMO_SGI    22
#define WNI_CFG_FIXED_RATE_21_7MBPS_MCS2_20MHZ_SIMO_SGI    23
#define WNI_CFG_FIXED_RATE_28_9MBPS_MCS3_20MHZ_SIMO_SGI    24
#define WNI_CFG_FIXED_RATE_43_3MBPS_MCS4_20MHZ_SIMO_SGI    25
#define WNI_CFG_FIXED_RATE_57_8MBPS_MCS5_20MHZ_SIMO_SGI    26
#define WNI_CFG_FIXED_RATE_65MBPS_MCS6_20MHZ_SIMO_SGI    27
#define WNI_CFG_FIXED_RATE_72_2MBPS_MCS7_20MHZ_SIMO_SGI    28
#define WNI_CFG_FIXED_RATE_0_25MBPS_SLR_20MHZ_SIMO    29
#define WNI_CFG_FIXED_RATE_0_5MBPS_SLR_20MHZ_SIMO    30
#define WNI_CFG_FIXED_RATE_68_25MBPS_QC_PROP_20MHZ_SIMO    31
#define WNI_CFG_FIXED_RATE_54MBPS_MCS3_40MHZ_SIMO    32
#define WNI_CFG_FIXED_RATE_81MBPS_MCS4_40MHZ_SIMO    33
#define WNI_CFG_FIXED_RATE_108MBPS_MCS5_40MHZ_SIMO    34
#define WNI_CFG_FIXED_RATE_121_5MBPS_MCS6_40MHZ_SIMO    35
#define WNI_CFG_FIXED_RATE_135MBPS_MCS7_40MHZ_SIMO    36
#define WNI_CFG_FIXED_RATE_15MBPS_MCS0_40MHZ_SIMO_SGI    37
#define WNI_CFG_FIXED_RATE_30MBPS_MCS1_40MHZ_SIMO_SGI    38
#define WNI_CFG_FIXED_RATE_45MBPS_MCS2_40MHZ_SIMO_SGI    39
#define WNI_CFG_FIXED_RATE_60MBPS_MCS3_40MHZ_SIMO_SGI    40
#define WNI_CFG_FIXED_RATE_90MBPS_MCS4_40MHZ_SIMO_SGI    41
#define WNI_CFG_FIXED_RATE_120MBPS_MCS5_40MHZ_SIMO_SGI    42
#define WNI_CFG_FIXED_RATE_135MBPS_MCS6_40MHZ_SIMO_SGI    43
#define WNI_CFG_FIXED_RATE_150MBPS_MCS7_40MHZ_SIMO_SGI    44

#define WNI_CFG_RETRYRATE_POLICY_MIN_SUPPORTED    0
#define WNI_CFG_RETRYRATE_POLICY_PRIMARY    1
#define WNI_CFG_RETRYRATE_POLICY_RESERVED    2
#define WNI_CFG_RETRYRATE_POLICY_CLOSEST    3
#define WNI_CFG_RETRYRATE_POLICY_AUTOSELECT    4
#define WNI_CFG_RETRYRATE_POLICY_MAX    5

#define WNI_CFG_APSD_ENABLED_STAMIN    0
#define WNI_CFG_APSD_ENABLED_STAMAX    1
#define WNI_CFG_APSD_ENABLED_STADEF    0

#define WNI_CFG_SHARED_KEY_AUTH_ENABLE_STAMIN    0
#define WNI_CFG_SHARED_KEY_AUTH_ENABLE_STAMAX    1
#define WNI_CFG_SHARED_KEY_AUTH_ENABLE_STADEF    1

#define WNI_CFG_OPEN_SYSTEM_AUTH_ENABLE_STAMIN    0
#define WNI_CFG_OPEN_SYSTEM_AUTH_ENABLE_STAMAX    1
#define WNI_CFG_OPEN_SYSTEM_AUTH_ENABLE_STADEF    1

#define WNI_CFG_AUTHENTICATION_TYPE_STAMIN    0
#define WNI_CFG_AUTHENTICATION_TYPE_STAMAX    65535
#define WNI_CFG_AUTHENTICATION_TYPE_STADEF    0

#define WNI_CFG_PRIVACY_ENABLED_STAMIN    0
#define WNI_CFG_PRIVACY_ENABLED_STAMAX    1
#define WNI_CFG_PRIVACY_ENABLED_STADEF    0

#define WNI_CFG_ACCEPT_SHORT_SLOT_ASSOC_ONLY_STAMIN    0
#define WNI_CFG_ACCEPT_SHORT_SLOT_ASSOC_ONLY_STAMAX    1
#define WNI_CFG_ACCEPT_SHORT_SLOT_ASSOC_ONLY_STADEF    0

#define WNI_CFG_QOS_ENABLED_STAMIN    0
#define WNI_CFG_QOS_ENABLED_STAMAX    1
#define WNI_CFG_QOS_ENABLED_STADEF    0

#define WNI_CFG_HCF_ENABLED_STAMIN    0
#define WNI_CFG_HCF_ENABLED_STAMAX    1
#define WNI_CFG_HCF_ENABLED_STADEF    0

#define WNI_CFG_RSN_ENABLED_STAMIN    0
#define WNI_CFG_RSN_ENABLED_STAMAX    1
#define WNI_CFG_RSN_ENABLED_STADEF    0

#define WNI_CFG_BACKGROUND_SCAN_PERIOD_STAMIN    0
#define WNI_CFG_BACKGROUND_SCAN_PERIOD_STAMAX    180000
#define WNI_CFG_BACKGROUND_SCAN_PERIOD_STADEF    5000

#define WNI_CFG_11D_ENABLED_STAMIN    0
#define WNI_CFG_11D_ENABLED_STAMAX    1
#define WNI_CFG_11D_ENABLED_STADEF    1

#define WNI_CFG_NETWORK_DENSITY_LOW    0
#define WNI_CFG_NETWORK_DENSITY_MEDIUM    1
#define WNI_CFG_NETWORK_DENSITY_HIGH    2
#define WNI_CFG_NETWORK_DENSITY_ADAPTIVE    3

#define WNI_CFG_ADAPTIVE_THRESHOLD_ALGORITHM_CARRIER    1
#define WNI_CFG_ADAPTIVE_THRESHOLD_ALGORITHM_CORRELATION    2

#define WNI_CFG_CURRENT_TX_POWER_LEVEL_STAMIN    0
#define WNI_CFG_CURRENT_TX_POWER_LEVEL_STAMAX    128
#define WNI_CFG_CURRENT_TX_POWER_LEVEL_STADEF    27

#define WNI_CFG_11H_ENABLED_STAMIN    0
#define WNI_CFG_11H_ENABLED_STAMAX    1
#define WNI_CFG_11H_ENABLED_STADEF    1

#define WNI_CFG_WME_ENABLED_STAMIN    0
#define WNI_CFG_WME_ENABLED_STAMAX    1
#define WNI_CFG_WME_ENABLED_STADEF    1

#define WNI_CFG_MAX_SP_LENGTH_STAMIN    0
#define WNI_CFG_MAX_SP_LENGTH_STAMAX    3
#define WNI_CFG_MAX_SP_LENGTH_STADEF    0

#define WNI_CFG_WSM_ENABLED_STAMIN    0
#define WNI_CFG_WSM_ENABLED_STAMAX    1
#define WNI_CFG_WSM_ENABLED_STADEF    0

#define WNI_CFG_EDCA_PROFILE_STAMIN    0
#define WNI_CFG_EDCA_PROFILE_STAMAX    255
#define WNI_CFG_EDCA_PROFILE_STADEF    1

#define WNI_CFG_EDCA_PROFILE_ANI    0
#define WNI_CFG_EDCA_PROFILE_WMM    1
#define WNI_CFG_EDCA_PROFILE_TIT_DEMO    2
#define WNI_CFG_EDCA_PROFILE_ETSI_EUROPE   3
#define WNI_CFG_EDCA_PROFILE_MAX    4

#define WNI_CFG_LOCAL_POWER_CONSTRAINT_STAMIN    0
#define WNI_CFG_LOCAL_POWER_CONSTRAINT_STAMAX    255
#define WNI_CFG_LOCAL_POWER_CONSTRAINT_STADEF    0

#define WNI_CFG_ADMIT_POLICY_ADMIT_ALL    0
#define WNI_CFG_ADMIT_POLICY_REJECT_ALL    1
#define WNI_CFG_ADMIT_POLICY_BW_FACTOR    2

#define WNI_CFG_CHANNEL_BONDING_MODE_STAMIN    0
#define WNI_CFG_CHANNEL_BONDING_MODE_STAMAX    10
#define WNI_CFG_CHANNEL_BONDING_MODE_STADEF    0

#define WNI_CFG_CHANNEL_BONDING_MODE_DISABLE    0
#define WNI_CFG_CHANNEL_BONDING_MODE_ENABLE    1
#define WNI_CFG_CHANNEL_BONDING_MODE_IF_NO_LEGACY_BSS    2
#define WNI_CFG_CHANNEL_BONDING_MODE_IF_NO_LEGACY_ALL    3
#define WNI_CFG_CHANNEL_BONDING_MODE_INTELLIGENT    4

#define WNI_CFG_BLOCK_ACK_ENABLED_STAMIN    0
#define WNI_CFG_BLOCK_ACK_ENABLED_STAMAX    3
#define WNI_CFG_BLOCK_ACK_ENABLED_STADEF    0

#define WNI_CFG_BLOCK_ACK_ENABLED_DELAYED    0
#define WNI_CFG_BLOCK_ACK_ENABLED_IMMEDIATE    1

#define WNI_CFG_HT_CAP_INFO_ADVANCE_CODING    0
#define WNI_CFG_HT_CAP_INFO_SUPPORTED_CHAN_WIDTH_SET    1
#define WNI_CFG_HT_CAP_INFO_SM_POWER_SAVE    2
#define WNI_CFG_HT_CAP_INFO_GREEN_FIELD    4
#define WNI_CFG_HT_CAP_INFO_SHORT_GI_20MHZ    5
#define WNI_CFG_HT_CAP_INFO_SHORT_GI_40MHZ    6
#define WNI_CFG_HT_CAP_INFO_TX_STBC    7
#define WNI_CFG_HT_CAP_INFO_RX_STBC    8
#define WNI_CFG_HT_CAP_INFO_DELAYED_BA    10
#define WNI_CFG_HT_CAP_INFO_MAX_AMSDU_SIZE    11
#define WNI_CFG_HT_CAP_INFO_DSSS_CCK_MODE_40MHZ    12
#define WNI_CFG_HT_CAP_INFO_PSMP    13
#define WNI_CFG_HT_CAP_INFO_STBC_CONTROL_FRAME    14
#define WNI_CFG_HT_CAP_INFO_LSIG_TXOP_PROTECTION    15

#define WNI_CFG_TX_BF_CAP_STAMIN    0
#define WNI_CFG_TX_BF_CAP_STAMAX    4294967295
#define WNI_CFG_TX_BF_CAP_STADEF    0

#define WNI_CFG_AS_CAP_STAMIN    0
#define WNI_CFG_AS_CAP_STAMAX    255
#define WNI_CFG_AS_CAP_STADEF    0

#define WNI_CFG_AS_CAP_ANTENNA_SELECTION    0
#define WNI_CFG_AS_CAP_EXPLICIT_CSI_FEEDBACK_TX    1
#define WNI_CFG_AS_CAP_ANTENNA_INDICES_FEEDBACK_TX    2
#define WNI_CFG_AS_CAP_EXPLICIT_CSI_FEEDBACK    3
#define WNI_CFG_AS_CAP_ANTENNA_INDICES_FEEDBACK    4
#define WNI_CFG_AS_CAP_RX_AS    5
#define WNI_CFG_AS_CAP_TX_SOUNDING_PPDUS    6
#define WNI_CFG_AS_CAP_RESERVED    7

#define WNI_CFG_GREENFIELD_CAPABILITY_STAMIN    0
#define WNI_CFG_GREENFIELD_CAPABILITY_STAMAX    1
#define WNI_CFG_GREENFIELD_CAPABILITY_STADEF    0

#define WNI_CFG_GREENFIELD_CAPABILITY_ENABLE    1
#define WNI_CFG_GREENFIELD_CAPABILITY_DISABLE    0

/*
 * WNI_CFG_VHT_CSN_BEAMFORMEE_ANT_SUPPORTED_FW_DEF + 1 is
 * assumed to be the default fw supported BF antennas, if fw
 * says it supports 8 antennas in rx ready event and if
 * gTxBFCsnValue INI value is configured above 3, set
 * the same to WNI_CFG_VHT_CSN_BEAMFORMEE_ANT_SUPPORTED.
 * Otherwise, fall back and set fw default value[3].
 */
#define WNI_CFG_VHT_CSN_BEAMFORMEE_ANT_SUPPORTED_FW_DEF    3


#define WNI_CFG_MAX_AMSDU_LENGTH_SHORT_3839_BYTES    0
#define WNI_CFG_MAX_AMSDU_LENGTH_LONG_7935__BYTES    1

#define WNI_CFG_MPDU_DENSITY_STAMIN    0
#define WNI_CFG_MPDU_DENSITY_STAMAX    7
#define WNI_CFG_MPDU_DENSITY_STADEF    7

#define WNI_CFG_NUM_BUFF_ADVERT_STAMIN    0
#define WNI_CFG_NUM_BUFF_ADVERT_STAMAX    128
#define WNI_CFG_NUM_BUFF_ADVERT_STADEF    64

#define WNI_CFG_MAX_RX_AMPDU_FACTOR_STAMIN    0
#define WNI_CFG_MAX_RX_AMPDU_FACTOR_STAMAX    3
#define WNI_CFG_MAX_RX_AMPDU_FACTOR_STADEF    3

#define WNI_CFG_SHORT_GI_20MHZ_STAMIN    0
#define WNI_CFG_SHORT_GI_20MHZ_STAMAX    1
#define WNI_CFG_SHORT_GI_20MHZ_STADEF    1

#define WNI_CFG_SHORT_GI_20MHZ_ENABLE    1
#define WNI_CFG_SHORT_GI_20MHZ_DISABLE    0

#define WNI_CFG_SHORT_GI_40MHZ_STAMIN    0
#define WNI_CFG_SHORT_GI_40MHZ_STAMAX    1
#define WNI_CFG_SHORT_GI_40MHZ_STADEF    0

#define WNI_CFG_SHORT_GI_40MHZ_ENABLE    1
#define WNI_CFG_SHORT_GI_40MHZ_DISABLE    0

#define WNI_CFG_SCAN_IN_POWERSAVE_STAMIN    0
#define WNI_CFG_SCAN_IN_POWERSAVE_STAMAX    1
#define WNI_CFG_SCAN_IN_POWERSAVE_STADEF    1

#define WNI_CFG_WOWLAN_DEAUTH_ENABLE_STAMIN    0
#define WNI_CFG_WOWLAN_DEAUTH_ENABLE_STAMAX    1
#define WNI_CFG_WOWLAN_DEAUTH_ENABLE_STADEF    1

#define WNI_CFG_WOWLAN_DISASSOC_ENABLE_STAMIN    0
#define WNI_CFG_WOWLAN_DISASSOC_ENABLE_STAMAX    1
#define WNI_CFG_WOWLAN_DISASSOC_ENABLE_STADEF    1

#define WNI_CFG_IBSS_AUTO_BSSID_STAMIN    0
#define WNI_CFG_IBSS_AUTO_BSSID_STAMAX    1
#define WNI_CFG_IBSS_AUTO_BSSID_STADEF    1

#define WNI_CFG_WPS_ENABLE_AP    1

#define WNI_CFG_TELE_BCN_WAKEUP_EN_STAMIN    0
#define WNI_CFG_TELE_BCN_WAKEUP_EN_STAMAX    1
#define WNI_CFG_TELE_BCN_WAKEUP_EN_STADEF    0

#define WNI_CFG_TELE_BCN_MAX_LI_STAMIN    0
#define WNI_CFG_TELE_BCN_MAX_LI_STAMAX    7
#define WNI_CFG_TELE_BCN_MAX_LI_STADEF    5

#define WNI_CFG_ASSOC_STA_LIMIT_STAMIN    1
#define WNI_CFG_ASSOC_STA_LIMIT_STAMAX    32
#define WNI_CFG_ASSOC_STA_LIMIT_STADEF    10

#define WNI_CFG_ENABLE_MCC_ADAPTIVE_SCHED_STAMIN    0
#define WNI_CFG_ENABLE_MCC_ADAPTIVE_SCHED_STAMAX    1
#define WNI_CFG_ENABLE_MCC_ADAPTIVE_SCHED_STADEF    0

#define WNI_CFG_DISABLE_LDPC_WITH_TXBF_AP_STAMIN    0
#define WNI_CFG_DISABLE_LDPC_WITH_TXBF_AP_STAMAX    1
#define WNI_CFG_DISABLE_LDPC_WITH_TXBF_AP_STADEF    0

#define WNI_CFG_IBSS_ATIM_WIN_SIZE_STAMIN    0
#define WNI_CFG_IBSS_ATIM_WIN_SIZE_STAMAX    100
#define WNI_CFG_IBSS_ATIM_WIN_SIZE_STADEF    0

#define WNI_CFG_PS_WOW_DATA_INACTIVITY_TIMEOUT_STAMIN    1
#define WNI_CFG_PS_WOW_DATA_INACTIVITY_TIMEOUT_STAMAX    255
#define WNI_CFG_PS_WOW_DATA_INACTIVITY_TIMEOUT_STADEF    50

#define WNI_CFG_TWT_REQUESTOR_STAMIN 0
#define WNI_CFG_TWT_REQUESTOR_STAMAX 1
#define WNI_CFG_TWT_REQUESTOR_STADEF 0

#define WNI_CFG_TWT_RESPONDER_STAMIN 0
#define WNI_CFG_TWT_RESPONDER_STAMAX 1
#define WNI_CFG_TWT_RESPONDER_STADEF 0

#define WNI_CFG_BCAST_TWT_STAMIN 0
#define WNI_CFG_BCAST_TWT_STAMAX 1
#define WNI_CFG_BCAST_TWT_STADEF 0

#define CFG_STA_MAGIC_DWORD    0xbeefbeef

#endif
