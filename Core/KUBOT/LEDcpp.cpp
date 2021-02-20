/**
 * @file LEDcpp.cpp
 * Implementation file of CLED class
 * Jast for STM32Cube C++ programming example
 * Keil ARM MDK V5.05
 * STM32 F4 Discovery board (STM32F407VGT6)
 * STM32CubeMX V4.9.0
 *
 * Copyright (C) Ian Jin
 * iancanada.mail@gmail.com
 * https://github.com/iancanada/
 * Twitter: @iancanadaTT
 *
 * This program is a free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
 
#include "LEDcpp.h"
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

