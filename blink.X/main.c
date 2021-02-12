#include "config.h"
#include <xc.h>

void main (void) 
{
    {
        TRISDbits.TRISD7 = 0;
    }
    while(1)
    {
        PORTDbits.RD7 = 1;
        __delay_ms(1000);
        PORTDbits.RD7 = 0;
        __delay_ms(1000);
    }
}
