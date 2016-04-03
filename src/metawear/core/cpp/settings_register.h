#pragma once

#include "register.h"
#include "responseheader.h"

enum class SettingsRegister : uint8_t {
    DEVICE_NAME = 1,
    AD_INTERVAL,
    TX_POWER,
    START_ADVERTISING = 5,
    SCAN_RESPONSE = 7,
    PARTIAL_SCAN_RESPONSE,
    CONNECTION_PARAMS,
    DISCONNECT_EVENT,
    BATTERY_STATE= 0xc
};

const ResponseHeader SETTINGS_BATTERY_STATE_RESPONSE_HEADER(MBL_MW_MODULE_SETTINGS, READ_REGISTER(ORDINAL(SettingsRegister::BATTERY_STATE))),
        SETTINGS_DISCONNECT_EVENT_RESPONSE_HEADER(MBL_MW_MODULE_SETTINGS, ORDINAL(SettingsRegister::DISCONNECT_EVENT));