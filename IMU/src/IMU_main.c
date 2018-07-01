/*
 * IMU.c
 *
 * Created: 7/18/2015 2:42:05 PM
 *  Author: Daniel
 */ 


#include <avr/io.h>
#include <stdbool.h>
#include "config_clock.h"
#include "port_hal.h"

int main(void)
{
	//init IRQ
	//init_irq_vectors()
	//enable_cpu_irq()
	
	//init Clock
	init_sysclk();
	
	//init Board
	//init_board()
	
	//init Peripherals
	
	//DEBUG - Set PORTR direction - 0, 1 output		
	SetPortPinDirection(PORT_R, PIN_0, PORT_OUTPUT);
	SetPortPinDirection(PORT_R, PIN_1, PORT_OUTPUT);
									
	while(1)
	{		
		//PORTR.OUT = ^= 0x01;
		
		/*
		WritePort(PORT_R, 0xFE);
		WritePort(PORT_R, 0xFF);
		WritePort(PORT_R, 0xFE);
		WritePort(PORT_R, 0xFF);
		WritePort(PORT_R, 0xFE);
		WritePort(PORT_R, 0xFF);
		WritePort(PORT_R, 0xFE);
		WritePort(PORT_R, 0xFF);
		*/
		
		/*
		WritePin(PORT_R, PIN_0, true);
		WritePin(PORT_R, PIN_0, false);
		WritePin(PORT_R, PIN_0, true);
		WritePin(PORT_R, PIN_0, false);
		WritePin(PORT_R, PIN_0, true);		
		
		WritePin(PORT_R, PIN_1, true);
		WritePin(PORT_R, PIN_1, false);
		WritePin(PORT_R, PIN_1, true);
		WritePin(PORT_R, PIN_1, false);
		WritePin(PORT_R, PIN_1, true);
		*/								
    }
}