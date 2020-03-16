/*
 * File:   chaves.c
 * Author: 19180063
 *
 * Created on 13 de Março de 2020, 09:40
 */


#include <xc.h>

void initChave( void )
{
    TRISDbits.TRISD3 = 1;
    TRISDbits.TRISD2 = 1;
}
unsigned char ch0( void )
{
    return ( PORTDbits.RD3 );
}
unsigned char ch1( void )
{              
    return ( PORTDbits.RD2 );
}