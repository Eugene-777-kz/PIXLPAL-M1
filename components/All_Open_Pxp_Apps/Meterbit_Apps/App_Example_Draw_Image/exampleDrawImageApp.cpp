#include <Arduino.h>
#include "mtb_engine.h"
#include "mtb_graphics.h"
#include "exampleDrawImageApp.h"

static const char TAG[] = "DRAW IMAGE EXAMPLE APP";

EXT_RAM_BSS_ATTR TaskHandle_t exampleDrawImageApp_Task_H = NULL;

EXT_RAM_BSS_ATTR Mtb_Applications_StatusBar *exampleDrawImages_App = new Mtb_Applications_StatusBar(exampleDrawImageApp_Task, &exampleDrawImageApp_Task_H, "exampleDrawImageApp", 4096);

void exampleDrawImageApp_Task(void* dApplication){
// ****** Initialize the App Parameters
  Mtb_Applications *thisApp = (Mtb_Applications *)dApplication;
  mtb_App_Init(thisApp, mtb_Status_Bar_Clock_Sv);
// End of App parameter initialization

while ((Mtb_Applications::internetConnectStatus != true) && (MTB_APP_IS_ACTIVE == pdTRUE)){
  ESP_LOGI(TAG, "Waiting for internet connection...");
  delay(1000);delay(1000);
} 




while (MTB_APP_IS_ACTIVE == pdTRUE) {
ESP_LOGI(TAG, "Images drawn on the display.");

delay(15000);
}

// Clean up the application before exiting
  mtb_End_This_App(thisApp);
}
