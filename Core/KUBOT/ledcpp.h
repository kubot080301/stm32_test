#ifndef _LEDCPP_H
#define _LEDCPP_H
#include "stm32f4xx_hal.h"

class CLed
{
  GPIO_TypeDef* _port;                                      //GPIOA,GPIOB....
  uint16_t _pin;                                            //GPIO_PIN_0,GPIO_PIN_1....                                        //Toggle time counter
	
public:
  CLed(GPIO_TypeDef* port,uint16_t pin); //constructor
	void on();																								//turn on LED
	void off();																								//turn off LED
	void toggle();																						//toggle
};

#endif

