/*
 * File:   main.c
 * Author: 19180063
 *
 * Created on 2 de Março de 2020, 09:56
 */


#include <xc.h>
#include  "config.h"
#include  "leds.h"
#include  "chave.h"


     void main (void)
     {
         initLED();
         initChave();
         while( 1 )
         {
             led0( ch0() );                                                                                                                                         
             led1( ch1() );
         }
         return;
     } 