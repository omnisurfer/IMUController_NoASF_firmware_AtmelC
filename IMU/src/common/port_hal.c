/*
 * port_hal.c
 *
 * Created: 7/26/2015 2:34:23 PM
 *  Author: Daniel
 */ 

#include "port_hal.h"

bool WritePort(PortName portName, char data)
{
	//which port to write to
	switch(portName)
	{				
		case PORT_A:
		PORTA.OUT = data;
		break;

		case PORT_B:
		PORTB.OUT = data;
		break;

		case PORT_C:
		PORTC.OUT = data;
		break;

		case PORT_D:
		PORTD.OUT = data;
		break;
		
		case PORT_E:
		PORTE.OUT = data;
		break;
		
		case PORT_F:
		PORTE.OUT = data;
		break;
		
		case PORT_R:
		PORTR.OUT = data;
		break;
						
		default:
		break;
	}
	return 0;
}

char ReadPort(PortName portName)
{
	char data = 0;
	//which port to write to
	switch(portName)
	{
		case PORT_A:
		data = PORTA.IN;
		break;

		case PORT_B:
		data = PORTB.IN;
		break;

		case PORT_C:
		data = PORTC.IN;
		break;

		default:
		break;
	}
	return data;
}

bool WritePin(PortName portName, PortPin pinName, bool state)
{
	bool outOfBound = false;

	switch(portName)
	{		
		case PORT_A:
			if(state)
				PORTA.OUT &= ~(0x01 << pinName);
			else
				PORTA.OUT |= (0x01 << pinName);
		break;
		
		case PORT_B:
			if(state)
				PORTB.OUT &= ~(0x01 << pinName);
			else
				PORTB.OUT |= (0x01 << pinName);
		break;
		
		case PORT_C:
			if(state)
				PORTC.OUT &= ~(0x01 << pinName);
			else
				PORTC.OUT |= (0x01 << pinName);
		break;
		
		case PORT_D:
			if(state)
				PORTD.OUT &= ~(0x01 << pinName);
			else
				PORTD.OUT |= (0x01 << pinName);
		break;
		
		case PORT_E:
			if(state)
				PORTE.OUT &= ~(0x01 << pinName);
			else
				PORTE.OUT |= (0x01 << pinName);
		break;
		
		case PORT_F:
			if(state)
				PORTF.OUT &= ~(0x01 << pinName);
			else
				PORTF.OUT |= (0x01 << pinName);
		break;
						
		case PORT_R:					
			if(state)			
				PORTR.OUT &= ~(0x01 << pinName);								
			else			
				PORTR.OUT |= (0x01 << pinName);								
		break;
										
		default:
		outOfBound = true;
		break;
	}

	return outOfBound;
}

bool ReadPin(PortName portName, PortPin pinName)
{	
	bool result = false;
	
	switch(portName)
	{
		case PORT_A:
			return result = PORTA.IN & ~(0x01 << pinName);
		break;
		
		case PORT_B:
			return result = PORTB.IN & ~(0x01 << pinName);
		break;
		
		case PORT_C:
			return result = PORTC.IN & ~(0x01 << pinName);
		break;
		
		case PORT_D:
			return result = PORTD.IN & ~(0x01 << pinName);
		break;
		
		case PORT_E:
			return result = PORTE.IN & ~(0x01 << pinName);
		break;
		
		case PORT_F:
			return result = PORTF.IN & ~(0x01 << pinName);
		break;
		
		case PORT_R:
			return result = PORTR.IN & ~(0x01 << pinName);
		break;
		
		default:
			return result;
		break;		
	}		
}

bool SetPortPinDirection(PortName portName, PortPin pinName, PortDirection direction)
{
	switch (portName)
	{
		case PORT_R:
			if(direction == PORT_OUTPUT)
				PORTR.DIR |= (0x01 << pinName);
			else
				PORTR.DIR &= ~(0x01 << pinName);			
			return true;
		break;
		
		default:
		break;
	}
	return false;
}