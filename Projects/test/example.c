#include <xc.h>
#define _XTAL_FREQ 4000000
#pragma config FOSC = XT
#pragma config WDTE = OFF
#pragma config PWRTE = OFF
#pragma config BOREN = OFF
#pragma config LVP = ON
#pragma config CPD = OFF
#pragma config WRT = OFF
#pragma config CP = OFF
void setup() {
    TRISBbits.RB0=0;
    TRISBbits.RB1=0;
    TRISBbits.RB2=0;
    TRISBbits.RB3=0;
    TRISBbits.RB4=1;
    TRISAbits.RA0=1;
    TRISAbits.RA1=1;
}
void interrupt isr(void) {
} int main() {
    setup();
    while(1) {
        if(!RPORTBbits.RB4) {
        }
    } return 0;
}