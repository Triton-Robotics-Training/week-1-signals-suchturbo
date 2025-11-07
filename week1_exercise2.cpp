#include "mbed.h"

//DigitalOut led(LED1);
//DigitalIn btn(BUTTON1);

AnalogIn pot(A0);
DigitalOut led(LED1);


int main() {
    while (1) {
        
        float value = pot.read();
        
        int ontime = value*2000;
        
        int offtime =  2000 - ontime;
        
        printf("Pot value: %.2f | ON: %d ms | OFF: %d ms\n", value, ontime, offtime);

        
        led =1 ;
         
        wait_ms(ontime);
            
        led = 0;
        wait_ms(offtime);
        
        
    }
}
