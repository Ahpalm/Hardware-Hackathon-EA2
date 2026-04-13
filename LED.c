//LED.c
#include "LED.h"

void init_LED(void) 
{
    GPIO_TRI &= ~(LED1_BIT | LED2_BIT);
    GPIO_DATA &= ~(LED1_BIT | LED2_BIT);
}
void set_LED(uint32_t value1, uint32_t value2) 
{
   if (value1) 
   {
    GPIO_DATA |=  LED1_BIT;
   }
   else      
   {
        GPIO_DATA &= ~LED1_BIT;
   }

   if (value2) 
   {
       GPIO_DATA |=  LED2_BIT;
   }
   
   else      
   {
       GPIO_DATA &= ~LED2_BIT;
   }
}
void clear_LED(void)
{
    GPIO_DATA &= ~(LED1_BIT | LED2_BIT);
}
