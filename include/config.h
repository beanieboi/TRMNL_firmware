#ifndef CONFIG_H
#define CONFIG_H

#define FW_MAJOR_VERSION 1
#define FW_MINOR_VERSION 0
#define FW_PATCH_VERSION 1

#define WIFI_DEFAULT_SSID "none"
#define WIFI_DEFAULT_PASSWORD "none"
#define WIFI_CONNECTION_ATTEMPTS 5
#define WIFI_PORTAL_TIMEOUT 120

#define DISPLAY_BMP_IMAGE_SIZE 48130

#define SLEEP_uS_TO_S_FACTOR 1000000 /* Conversion factor for micro seconds to seconds */
#define SLEEP_TIME_TO_SLEEP 15        /* Time ESP32 will go to sleep (in seconds) */

#define PIN_RESET 9
#define PIN_INTERRUPT 2

#define BUTTON_HOLD_TIME 1000
#endif