#include <mbed.h>

int main() {

    DigitalOut red(PTB22);
    DigitalOut blue(PTB21);
    DigitalOut green(PTE26);

    while(1) {
      red.write(1);
      blue.write(0);
      green.write(1);
      wait(0.5);
      red.write(0);
      green.write(1);
      blue.write(1);
      wait(0.5);
      green.write(0);
      blue.write(1);
      red.write(1);
      wait(0.5);
    }
}
