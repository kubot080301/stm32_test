#include "ledcpp.h"
#include "stm32f4xx_hal.h"

CLed::CLed(GPIO_TypeDef* port,uint16_t pin)
{
  _port=port;
  _pin=pin; 
}
void CLed::on()
{
	HAL_GPIO_WritePin(_port,_pin,GPIO_PIN_SET);
}
void CLed::off()
{
	HAL_GPIO_WritePin(_port,_pin,GPIO_PIN_RESET);
}
void CLed::toggle()
{
	HAL_GPIO_TogglePin(_port,_pin);
}	

