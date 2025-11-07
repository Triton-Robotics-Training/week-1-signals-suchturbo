//STARTER 
//THIS EXERCISE IS TO BE DONE IN THE ARM MBED SIMULATOR
//http://195.130.59.221/
//IF YOU HAVE ISSUES WITH THE SIMULATOR, CONTACT EMBEDDED LEAD
#include "mbed.h"

#include "mbed.h"

DigitalOut led(LED1);
DigitalIn btn(BUTTON1);

int main() {
    while (1) {
        
        led = btn.read();
        printf("Blink! LED is now %d\n", led.read());
        
        wait_ms(500);
    }
}
