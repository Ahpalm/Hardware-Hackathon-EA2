#include "Sensor.h"

uint16_t i2c_read_word(uint8_t device_addr, uint8_t register_addr)
{
    IIC_TX_FIFO = (device_addr << 1) | 0x100;         // START + write
    IIC_TX_FIFO = register_addr;                           // register offset
    IIC_TX_FIFO = (device_addr << 1) | 0x101;         // START + read
    while (IIC_SR & 0x40);                       // wait for RX ready
    uint8_t lsb = IIC_RX_FIFO & 0xFF;
    uint8_t msb = IIC_RX_FIFO & 0xFF;
    return (uint16_t)((msb << 8) | lsb);
}
