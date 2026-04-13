//main.c

#include "Sensor.h"
#include "LED.h"

//Sensor constants 
#define PROX_min 500
#define TEMP_MAX 100.0f 


int main() 
{
    init_LED(); 
    init_ProxSensor();
    
    while(1)
    {
        uint16_t prox_value = get_proximity_value();
        float object_temp = get_object_temp();
        float ambient_temp = get_ambient_temp();

        if (object_Temp_Alert(object_temp, TEMP_MAX) && object_Prox_Alert(PROX_min, prox_value)) 
        {
            set_LED(1, 1); // Turn on LED for temperature alert
        } 
        else {
            clear_LED(); // Clear LED if no alert
        }
    }
    return 0;
}
