#ifndef WORLD_CLOCK_H
#define WORLD_CLOCK_H

// #include <stdio.h>
#include <Arduino.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
// #include "encoder.h"
// #include "button.h"

static const char worldClockAppRoute[] = "0/2";

struct WorldClock_Data_t {
char worldCapitals[5][50];
char worldTimeZones[5][50];
char firstCountryName[50];
uint16_t worldColors[5];
uint8_t worldClockMode;
};

extern TaskHandle_t worldClock_Task_H;
extern void worldClock_App_Task(void *arguments);

#endif