
#include "stm32f10x.h"                  // Device header
#include "Clock_Config.h"
#include "Delay_ms.h"

void initGPIO (void)
{
  RCC->APB2ENR |= RCC_APB2ENR_IOPDEN; // Enable port D clock
  RCC->APB2ENR |= RCC_APB2ENR_IOPCEN; // Enable port D clock
  GPIOC->CRH &= ~GPIO_CRH_MODE13;
  GPIOC->CRH |= GPIO_CRH_MODE13;

}

int main()
{
  initClockPLL();
  TIM2Config();
  initGPIO();
 
	
while(1)
{
  delay_ms(1000);
  GPIOC->ODR ^= (1<<13);
	
}
return 0;
}
