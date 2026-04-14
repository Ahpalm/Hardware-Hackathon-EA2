//LED.h
#include <stdint.h>

#define GPIO_BASE       0x41200000u
#define GPIO_DATA       *((volatile uint32_t *)(GPIO_BASE + 0x000u))  // Data register
#define GPIO_TRI        *((volatile uint32_t *)(GPIO_BASE + 0x004u))  // Tristate: 0=output

#define LED1_BIT        (1u << 0)   // LED1 on GPIO bit 0
#define LED2_BIT        (1u << 1)   // LED2 on GPIO bit 1

void init_LED(void);
void set_LED(uint32_t value1, uint32_t value2); 
void clear_LED(void); 

