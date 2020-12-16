#include <stdio.h>
#include <stdlib.h>

#include "FreeRTOS.h"
#include "task.h"

#define vPrintString  printf
#define mainDELAY_LOOP_COUNT  100000000

void vTask1(void* pvParameters)
{
    (void)pvParameters;
    const char* pcTaskName = "Task 1 is running\r\n";
    volatile unsigned long ul;
    for(;;)
    {
        vPrintString("%s", pcTaskName);
        for(ul=0; ul<mainDELAY_LOOP_COUNT; ul++)
        {
        }
    }
}

void vTask2(void* pvParameters)
{
    (void)pvParameters;
    const char* pcTaskName = "Task 2 is running\r\n";
    volatile unsigned long ul;
    for(;;)
    {
        vPrintString("%s", pcTaskName);
        for(ul=0; ul<mainDELAY_LOOP_COUNT; ul++)
        {
        }
    }
}


int main(void)
{
    xTaskCreate(vTask1, "Task 1", 1000, NULL, 1, NULL);
    xTaskCreate(vTask2, "Task 2", 1000, NULL, 1, NULL);
    vTaskStartScheduler();
    return 0;
}

