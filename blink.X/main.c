#include "config.h"
#include <xc.h>

void main(void) 
{
    while(1)
    TRISDbits.TRISD7 = 1;
}
void main (void)
{
    PORTDbits.RD7 = 1;
    PORTDbits.RD7 = 0;
}
