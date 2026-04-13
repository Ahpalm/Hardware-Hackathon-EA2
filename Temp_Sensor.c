//Temp_Sensor.c
#include "Sensor.h"

float get_object_temp(void)
{
    uint16_t raw_object_temp = i2c_read_word(IR_ADDR, IR_OBJ_TEMP_DATA);
    // Convert raw object temperature to degrees Celsius
    float object_temp = (raw_object_temp & 0x7FFF) * 0.02f - 273.15f;
    return object_temp;
}

float get_ambient_temp(void)
{
    uint16_t raw_ambient_temp = i2c_read_word(IR_ADDR, IR_AMB_TEMP_DATA);
    // Convert raw ambient temperature to degrees Celsius
    float ambient_temp = raw_ambient_temp * 0.125f; // Example conversion factor
    return ambient_temp;
}

int object_Temp_Alert( float temp_value, float temp_max)
{


    if(temp_value > temp_max) 
    {
        return 1; 
    } else {
        return 0;
    }
}
