#ifndef GOOGLE_NEWS_H
#define GOOGLE_NEWS_H

// #include <stdio.h>
// #include <stdlib.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
// #include "encoder.h"
// #include "button.h"

static const char newsAPI_AppRoute[] = "1/2";
extern TaskHandle_t newsAPI_Task_H;
extern void newsAPI_App_Task(void *arguments);

#endif