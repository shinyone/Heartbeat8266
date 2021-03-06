//Main Menu
const char txt_setup[] PROGMEM = "Setup";
const char txt_status[] PROGMEM = "Status";
const char txt_firmware_upgrade[] PROGMEM = "Firmware Upgrade";
const char txt_reboot[] PROGMEM = "Reboot";

//Setup Menu
const char txt_MQTT[] PROGMEM = "MQTT";
const char txt_WIFI[] PROGMEM = "WIFI";
const char txt_telegram[] PROGMEM = "Telegram";
const char txt_watchdog[] PROGMEM = "Watchdog";
const char txt_debug[] PROGMEM = "Debug";
const char txt_reset[] PROGMEM = "Reset configuration";
const char txt_reset_confirm[] PROGMEM = "Do you really want to reset this unit?";

//Buttons
const char txt_back[] PROGMEM = "Back";
const char txt_save[] PROGMEM = "Save & Reboot";
const char txt_logout[] PROGMEM = "Logout";
const char txt_upgrade[] PROGMEM = "Start upgrade";
const char txt_login[] PROGMEM = "LOGIN";
const char txt_on[] PROGMEM = "ON";
const char txt_off[] PROGMEM = "OFF";

//Page Reboot, save & Resseting
const char txt_m_reboot[] PROGMEM = "Rebooting... Refresh in";
const char txt_m_reset[] PROGMEM = "Resetting... Connect to SSID";
const char txt_m_save[] PROGMEM = "Saving configuration and rebooting... Refresh in";

//Page MQTT
const char txt_mqtt_title[] PROGMEM = "MQTT Parameters";
const char txt_mqtt_fn[] PROGMEM = "Friendly name";
const char txt_mqtt_host[] PROGMEM = "Host";
const char txt_mqtt_port[] PROGMEM = "Port (default 1883)";
const char txt_mqtt_user[] PROGMEM = "User";
const char txt_mqtt_password[] PROGMEM = "Password";
const char txt_mqtt_topic[] PROGMEM = "Topic (not used)";

//Page Telegram
const char txt_telegram_title[] PROGMEM = "Telegram Parameters";
const char txt_telegram_chat_id[] PROGMEM = "Chat ID";
const char txt_telegram_bot_token[] PROGMEM = "Bot Token";

//Page Watchdog
const char txt_watchdog_title[] PROGMEM = "Watchdog Parameters";
const char txt_watchdog_subscribe_topic[] PROGMEM = "Subscribe Topic";
const char txt_watchdog_publish_topic[] PROGMEM = "Publish Topic";

//Page Debug
const char txt_debug_title[] PROGMEM = "Debug Parameters";
const char txt_debug_onoff[] PROGMEM = "Debug";
const char txt_debug_log[] PROGMEM = "Log contents";

//Page Status
const char txt_status_title[] PROGMEM = "Status";
const char txt_status_watchdog[] PROGMEM = "Watchdog Status";
const char txt_status_telegram[] PROGMEM = "Telegram Status";
const char txt_status_mqtt[] PROGMEM = "MQTT Status";
const char txt_status_wifi[] PROGMEM = "WIFI RSSI";
const char txt_status_connect[] PROGMEM = "CONNECTED";
const char txt_status_disconnect[] PROGMEM = "DISCONNECTED";

//Page WIFI
const char txt_wifi_title[] PROGMEM = "WIFI Parameters";
const char txt_wifi_hostname[] PROGMEM = "Hostname";
const char txt_wifi_SSID[] PROGMEM = "SSID";
const char txt_wifi_psk[] PROGMEM = "PSK";
const char txt_wifi_otap[] PROGMEM = "OTA Password";


const char txt_unit_password[] PROGMEM = "Web password";

//Page Login
const char txt_login_title[] PROGMEM = "Authentication";
const char txt_login_password[] PROGMEM = "Password";
const char txt_login_sucess[] PROGMEM = "Login successful, you will be redirected in a few seconds.";
const char txt_login_fail[] PROGMEM = "Wrong username/password! Try again.";

//Page Upgrade
const char txt_upgrade_title[] PROGMEM = "Upgrade";
const char txt_upgrade_info[] PROGMEM = "Firmware OTA upgrade by bin file upload";
const char txt_upgrade_start[] PROGMEM = "Upload started";

//Page Upload
const char txt_upload_nofile[] PROGMEM = "No file selected";
const char txt_upload_filetoolarge[] PROGMEM = "File size is larger than available free space";
const char txt_upload_fileheader[] PROGMEM = "File magic header does not start with 0xE9";
const char txt_upload_flashsize[] PROGMEM = "File flash size is larger than device flash size";
const char txt_upload_buffer[] PROGMEM = "File upload buffer miscompare";
const char txt_upload_failed[] PROGMEM = "Upload failed. Enable logging option 3 for more information";
const char txt_upload_aborted[] PROGMEM = "Upload aborted";
const char txt_upload_code[] PROGMEM = "Upload error code ";
const char txt_upload_error[] PROGMEM = "Update error code (see Updater.cpp) ";
const char txt_upload_sucess[] PROGMEM = "Successful";
const char txt_upload_refresh[] PROGMEM = "Refresh in";

//Page Init
const char txt_init_title[] PROGMEM = "Initial setup";
const char txt_init_reboot_mes[] PROGMEM = "Rebooting and connecting to your WiFi network! You should see it listed in on your access point.";
const char txt_init_reboot[] PROGMEM = "Rebooting...";
