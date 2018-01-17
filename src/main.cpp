#include <mbed.h>

void ledOff(DigitalOut led) {
      led.write(1);
}

void ledOn(DigitalOut led) {
       led.write(0);
}

int main() {

    DigitalOut red(PTB22);
    DigitalOut blue(PTB21);
    DigitalOut green(PTE26);
    // to turn LED off, 1 is used
    // to turn LED on, 0 is used

    while(1) {
      ledOn(blue);
      ledOff(green);
      ledOff(red);
      wait(0.5);
      ledOn(red);
      ledOff(blue);
      wait(0.5);
      ledOn(green);
      ledOff(red);
      wait(0.5);
    }
}
