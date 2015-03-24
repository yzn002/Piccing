#include <xc.h>
#include <plib/delays.h>
#define _XTAL_FREQ 4000000
#pragma config FOSC = XT
#pragma config WDTE = OFF
#pragma config PWRTE = OFF
#pragma config BOREN = OFF
#pragma config LVP = ON
#pragma config CPD = OFF
#pragma config WRT = OFF
#pragma config CP = OFF
int ADCValue=0;
void setup() {
    ADCON0bits.ADCS = 0; //Selecting the clk division factor = FOSC/2
    ADCON1bits.ADCS2 = 0; //Selecting the clk division factor = FOSC/2
    ADCON1bits.ADFM = 1; //Result right justified
    ADCON1bits.PCFG = 0; //Setting all the analog ports as Analog inputs
    ADCON0bits.ADON = 1; //Turns on ADC module
    ADCON0bits.CHS = 0; //Selects channel 0 ( AN0 )
}
int main() {
    setup();
    TRISA = 0xFF;
    TRISB = 0x0;
    TRISD = 0x0;
    PORTBbits.RB0=0;
    while(1) {
        if(!RA1) {
            __delay_us(25);
            ADCON0bits.GO = 1;
            while (ADCON0bits.nDONE) continue;
            ADCValue = (ADRESH<<8) + ADRESL ;
            if(ADCValue > 512) RB1=1;
        }
    }
    return 0;
}