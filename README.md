# STM32_TEST_CODE
使用 STM32F429ZI Discovery板

透過 STM32cudeMX生成.ioc，Generate MDK project，在Keil MDK 5.33開發。

定義板上OnBoard LED1(PG13)、LED2(PG14)，

並以不同頻率閃爍。


----
### 1.HAL_LED Branch
在主while迴圈使用HAL庫驅動GPIO控制LED亮滅。

----
### 2.FreeRTOS_HAL_LED Branch
使用FreeRTOS，使用HAL庫控制GPIO並透過Task管理LED亮滅。

----
### 3.Lib_HAL_LED Branch
混用C、C++ Lib，在主迴圈引用子執行檔

----
### 4.FreeRTOS_Lib_HAL_LED Branch
混用C、C++ Lib，在Task引用子執行檔

----
### 5.Lib_HAL_WS2812 Branch
測試 WS2812 lib
