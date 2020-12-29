#define F_CPU 1000000UL

#include <avr/io.h>
#include <stdio.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <util/atomic.h>
#include <avr/pgmspace.h>
//#include <math.h>

#include "TM1637_lib.h"

uint16_t msec = 0, sec = 0;      //миллисекунды и секунды со старта. общее время = msec*1000+sec

uint32_t resultLux, lastLux;   

void setup(void) {
TM1637_init();
}

void main(void) {
    setup();
    uint8_t digit[4] = {0x01, 0x08, 0x80, 0x00};
    
    while (1) {
        TM1637_sendArray((uint8_t *)digit); 
        /*_delay_ms(1000);
        TM1637_sendByte(0x00, 0x06);  
        TM1637_sendByte(0x01, 0x3f);  
        TM1637_sendByte(0x02, 0x4f);  
        TM1637_sendByte(0x03, 0x00);  
        _delay_ms(1000);*/
    }
}




