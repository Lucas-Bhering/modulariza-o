#include <xc.h>

void initLED( void )
{
    PORTDbits.RD0 = 0;
    TRISDbits.TRISD0 = 0;  

    PORTDbits.RD1 = 0;
    TRISDbits.TRISD1 = 0;         
}
void led0( unsigned char b )
{
    PORTDbits.RD0 = b;
}
unsigned char led0status( void )
{
    return (PORTDbits.RD0 );
}
void led1(unsigned char b )
{
    PORTDbits.RD1 = b;
}
unsigned char led1status(void)
{
    return (PORTDbits.RD1);
}