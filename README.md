# stm32_test
使用 STM32F429ZI Discovery板
透過 STM32cudeMX生成.ioc，Generate MDK project，在Keil MDK 5.33開發。
定義板上OnBoard LED1(PG13)、LED2(PG14)

----
### HAL_LED Branch
在主while迴圈使用HAL庫驅動GPIO讓LED亮起。

----
### RTOS_HAL_LED B
