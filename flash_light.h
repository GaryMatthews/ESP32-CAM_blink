/*
 * https://github.com/xiaolaba/ESP32-CAM_blink/
 * 2020-JUL-01
 */

//#define NodeMCU-32S 1
#define ESP32-CAM 1

//if you do not need LED_FLASH lights up image during capture, comment out this line
//#define USE_FLASH_LIGHT 1   // used at app_httpd.cpp 


#ifdef NodeMCU-32S //2017-07-17 ESP32 testing, NodeMCU-32S broad, xiaolaba
  #define LED1 2        //GPIO-2 
  #define LED_FLASH1 2  //dummy, no FLASH_LED, for easy coding only as included ESP32-CAM for testing
#endif


#ifdef ESP32-CAM //2020-07-01, ESP32-CAM testing, xiaolaba
#define LED_FLASH1  4   // ESP32-CAM LED flash light, GPIO-4
#define LED1        33  // ESP32-CAM on-broad tiny LED, GPIO-33
#endif


void LED_setup(void);
void LED_on(void);
void LED_off(void);

void fastBlink (void);
void slowBlink (void);
void LED_blinking(void);

void LED_FLASH1_setup(void);
void LED_FLASH1_on(void);
void LED_FLASH1_off(void);

void fastFlash (void);
void slowFlash (void);
void Flash_blinking(void);
