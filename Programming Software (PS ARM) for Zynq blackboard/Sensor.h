//Sensor.h
#include <stdint.h>

//IR Thermometer Evaluation Board
//VCNL4040 Sensor

#define IIC_BASE 0x41600000u


#define VCN_ADDR 0x60 
#define IR_ADDR 0x5Au

#define VCN_PS_DATA 0x08u

#define IR_AMB_TEMP_DATA 0x06u
#define IR_OBJ_TEMP_DATA 0x07u

#define IIC_TX_FIFO  *((volatile uint32_t *)(IIC_BASE + 0x108u))
#define IIC_RX_FIFO  *((volatile uint32_t *)(IIC_BASE + 0x10Cu))
#define IIC_SR       *((volatile uint32_t *)(IIC_BASE + 0x104u))
//I2C read functions
uint16_t i2c_read_word(uint8_t device_addr, uint8_t register_addr);

void init_ProxSensor(void);

uint16_t get_proximity_value(void);
float get_object_temp(void); 
float get_ambient_temp(void);
int object_Temp_Alert( float temp_value, float temp_max);
int object_Prox_Alert(uint16_t min_value, uint16_t current_value);

