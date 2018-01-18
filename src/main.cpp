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
    DigitalOut redShield(D5);
    DigitalOut blueShield(D8);
    DigitalOut greenShield(D9);
    // to turn LED off, 1 is used
    // to turn LED on, 0 is used
    while(1) {
      ledOn(blueShield);
      ledOff(redShield);
      ledOn(blue);
      ledOff(green);
      ledOff(red);
      wait(0.5);
      ledOn(green);
      ledOff(blue);
      ledOn(greenShield);
      ledOff(blueShield);
      wait(0.5);
      ledOff(green);
      ledOn(red);
      ledOff(greenShield);
      ledOn(redShield);
      wait(0.5);
    }
}
