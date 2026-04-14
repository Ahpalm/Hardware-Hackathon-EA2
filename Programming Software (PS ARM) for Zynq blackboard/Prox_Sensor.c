//Prox_Sensor.c
#include "Sensor.h"

void init_ProxSensor(void)
{
    IIC_TX_FIFO = (VCN_ADDR << 1) | 0x100;  //Turn on the proximity sensor
    IIC_TX_FIFO = 0x03u;                      
    IIC_TX_FIFO = 0x00u;                      
    IIC_TX_FIFO = 0x08u;                      
}

uint16_t get_proximity_value(void)
{
    uint16_t prox_value = i2c_read_word(VCN_ADDR, VCN_PS_DATA);
    return prox_value;
}


int object_Prox_Alert(uint16_t min_value, uint16_t current_value)
{
    // Code to check if the current proximity value is below the minimum value
    // This is a placeholder implementation and should be replaced with actual code to compare the values and return an alert status
    if (current_value > min_value) 
    {
        return 1;  
    } 
    else 
    {
        return 0;
    }
}

