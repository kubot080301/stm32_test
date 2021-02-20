#include "led.h"
#include "stm32f4xx_hal.h"

CLed::CLed(GPIO_TypeDef* port,uint16_t pin,uint16_t toggleTime)
{
  _port=port;
  _pin=pin;
  _toggleTime=toggleTime;
  counter=0; 
  LED_on();
}

void CLed::runToggle()
{
  if(++counter>=_toggleTime)
  {
    counter=0;
    toggle();
  }	
}

void CLed::LED_on()
{
    HAL_GPIO_WritePin(_port, _pin, GPIO_PIN_SET);
}

void CLed::LED_off()
{
    HAL_GPIO_WritePin(_port, _pin, GPIO_PIN_RESET);
}

void CLed::LED_toggle()
{
    HAL_GPIO_TogglePin(_port,_pin);
} 

