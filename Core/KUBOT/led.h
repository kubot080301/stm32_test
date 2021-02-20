#ifndef _LEDCPP_H
#define _LEDCPP_H

class CLed
{
    private:
        GPIO_TypeDef* _port;  
        uint16_t _pin;
        uint16_t _toggleTime;
        uint16_t counter;  

        Cled

    public:
        CLed(GPIO_TypeDef* port,uint16_t pin,uint16_t toggleTim);
        void runToggle(void);
    //    void LED_Init(void);
        void LED_on(void);
        void LED_off(void);
        void LED_toggle(void);  
};

#endif
