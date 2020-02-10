/********************************************************************************
 Written by: Tushar Chaskar, NEX Robotics Pvt. Ltd.
 Edited by: Sachitanand Malewar, NEX Robotics Pvt. Ltd.
 AVR Studio Version 4.17, Build 666

 Date: 23rd November 2015
 
 This experiment demonstrates LCD interfacing in 4 bit mode busy flag check

 Concepts covered:  LCD interfacing

 LCD Connections:
 			 LCD	  Microcontroller Pins
 			  RS  --> PC0
			  RW  --> PC1
			  EN  --> PC2
			  DB7 --> PC7
			  DB6 --> PC6
			  DB5 --> PC5
			  DB4 --> PC4

 Note: 
 
 1. Make sure that in the configuration options following settings are 
 	done for proper operation of the code

 	Microcontroller: atmega2560
 	Frequency: 14745600
 	Optimization: -O0 (For more information read section: Selecting proper optimization 
 					options below figure 2.22 in the Software Manual)

 2. Buzzer is connected to PC3. Hence to operate buzzer without interfering with the LCD, 
 	buzzer should be turned on or off only using buzzer function 

*********************************************************************************/

/********************************************************************************

   Copyright (c) 2010, NEX Robotics Pvt. Ltd.                       -*- c -*-
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

   * Source code can be used for academic purpose. 
	 For commercial use permission form the author needs to be taken.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. 

  Software released under Creative Commence cc by-nc-sa licence.
  For legal information refer to: 
  http://creativecommons.org/licenses/by-nc-sa/3.0/legalcode

********************************************************************************/

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

// ---------------------------------	Macro definations	----------------------------------

#define sbit(reg,bit)		reg |= (1<<bit)						// Macro defined for Setting a bit of any register.
#define cbit(reg,bit)		reg &= ~(1<<bit)					// Macro defined for Clearing a bit of any register.
#define lcd_port 			PORTC
#define RS 0
#define RW 1
#define EN 2

#define DATA_PORT()			sbit(lcd_port,RS)
#define	COMMAND_PORT()		cbit(lcd_port,RS)
#define READ_DATA()			sbit(lcd_port,RW)
#define WRITE_DATA()		cbit(lcd_port,RW)
#define EN_HI()				sbit(lcd_port,EN)
#define EN_LW()				cbit(lcd_port,EN)

// ---------------------------------	Global Variables	----------------------------------

unsigned int temp;
unsigned int unit;
unsigned int tens;
unsigned int hundred;
unsigned int thousand;
unsigned int million;

// ==============================================================================================================================
//	Function 							: lcd_port_config()
//	Return type							: void 
//	Parameters							: none
//	Description 						: This function will configure LCD ports of micro controller
//
// ==============================================================================================================================

void lcd_port_config (void)
{
 DDRC = 0xF7; 															// all the LCD pin's direction set as output
}

// ==============================================================================================================================
//	Function 							: port_init()
//	Return type							: void 
//	Parameters							: none
//	Description 						: Function to Initialize PORTs
//
// ==============================================================================================================================

void port_init()
{
	lcd_port_config();
}

// ==============================================================================================================================
//	Function 							: init_devices()
//	Return type							: void 
//	Parameters							: none
//	Description 						: Function to Initialize devices
//
// ==============================================================================================================================

void init_devices (void)
{
 cli(); 																// Clears the global interrupts
 port_init();
 sei();   																// Enables the global interrupts
}		

// ==============================================================================================================================
//	Function 							: Busy_wait()
//	Return type							: unsigned char 
//	Parameters							: none
//	Description 						: This function checks busy flag of LCD and returns zero on success (PORTD7 busy flag pin)
//
// ==============================================================================================================================

unsigned char Busy_wait()
{
	unsigned char temp = 0;
	EN_LW();
	COMMAND_PORT();
	READ_DATA();

	PORTC &= 0x0F;
	DDRC &= 0x0F;
	PORTC |= 0x00;
	
	do{
		EN_HI();
		EN_LW();
		EN_HI();
		EN_LW();
		temp = PORTC;
	} 
	while((temp & 0x80) == 0x80);											// wait till PORTD7 is high
	
	EN_LW();
	WRITE_DATA();
	DDRC &= 0x08;
	DDRC |= 0xF7;
	return 0; 
}

// ==============================================================================================================================
//	Function 							: lcd_wr_command()
//	Return type							: void
//	Parameters							: unsigned char
//	Description 						: function to send command to LCD
//
// ==============================================================================================================================

void lcd_wr_command(unsigned char data)
{
	unsigned char temp = 0;
	EN_LW();
	COMMAND_PORT();
	WRITE_DATA();
	
	temp = data;
	PORTC &= 0x0F;
	PORTC |= (temp & 0xF0);
	
	EN_HI();
	EN_LW();
	
	temp = data & 0x0F;
	PORTC &= 0x0F;
	PORTC |= (temp) << 4; 
	
	EN_HI();
	EN_LW();

	while(Busy_wait());

	_delay_ms(5);
	
}

// ==============================================================================================================================
//	Function 							: lcd_wr_char()
//	Return type							: void
//	Parameters							: unsigned char
//	Description 						: function to write data on LCD
//
// ==============================================================================================================================

void lcd_wr_char(unsigned char data)
{
	
	unsigned char temp = 0;
	EN_LW();
	DATA_PORT();
	WRITE_DATA();

	temp = data;
	PORTC &= 0x0F;
	PORTC |= (temp & 0xF0);

	EN_HI();
	EN_LW();
	
	temp = data & 0x0F;
	PORTC &= 0x0F;
	PORTC |= (temp) << 4; 
	
	EN_HI();
	EN_LW();
	
	_delay_ms(1);
	
}

// ==============================================================================================================================
//	Function 							: lcd_init()
//	Return type							: void
//	Parameters							: void
//	Description 						: Function to initialise LCD
//
// ==============================================================================================================================

void lcd_init()
{
	lcd_wr_command(0x20);
	lcd_wr_command(0x28);
	lcd_wr_command(0x0C);
	lcd_wr_command(0x06);
	lcd_wr_command(0x01);
}

// ==============================================================================================================================
//	Function 							: lcd_cursor()
//	Return type							: void
//	Parameters							: char , char
//	Description 						: Function to set LCD cursor
//
// ==============================================================================================================================

void lcd_cursor (char row, char column)
{
	switch (row) {
		case 1: lcd_wr_command (0x80 + column - 1); break;
		case 2: lcd_wr_command (0xc0 + column - 1); break;
		case 3: lcd_wr_command (0x94 + column - 1); break;
		case 4: lcd_wr_command (0xd4 + column - 1); break;
		default: break;
	}
}

// ==============================================================================================================================
//	Function 							: lcd_string()
//	Return type							: void
//	Parameters							: char pointer
//	Description 						: Function to send string on LCD
//
// ==============================================================================================================================

void lcd_string(char *str)
{
	while(*str != '\0')
	{
		lcd_wr_char(*str);
		str++;
	}
}

// ==============================================================================================================================
//	Function 							: lcd_home()
//	Return type							: void
//	Parameters							: void
//	Description 						: Function to set LCD to home position
//
// ==============================================================================================================================

void lcd_home()
{
	lcd_wr_command(0x80);
}

// ==============================================================================================================================
//	Function 							: lcd_clear()
//	Return type							: void
//	Parameters							: void
//	Description 						: Function to clear LCD screen
//
// ==============================================================================================================================

void lcd_clear()
{
	lcd_wr_command(0x01);
}

// ==============================================================================================================================
//	Function 							: getPow()
//	Return type							: unsigned long int
//	Parameters							: unsigned char, unsigned char
//	Description 						: Function to get power value
//
// ==============================================================================================================================

unsigned long int getPow(unsigned char value, unsigned char multiplier)
{
	unsigned long int val = value;
	
	if(multiplier == 0)
	{
		return val = 1;
	}
	for(char i = multiplier - 1;i >= 1; i--)
	{
		val = val * value;
	}
	return val;
}

// ==============================================================================================================================
//	Function 							: getDigits()
//	Return type							: unsigned char
//	Parameters							: unsigned long int, unsigned char
//	Description 						: Function to extract each digit from number
//	
// ==============================================================================================================================

char getDigits(const unsigned long int number, unsigned char digit)
{
	
	unsigned long int c = 0;

	if (digit >= 0) 
    {		
		c = getPow(10,(digit - 1));
		
       return (char)((number / c) % 10) + 48;
    }  
    else 
    {
        return 0;
    }
}

// ==============================================================================================================================
//	Function 							: lcd_print()
//	Return type							: void
//	Parameters							: char ,char ,unsigned int ,int 
//	Description 						: Function to printf numbers on LCD
//	Note 								: User can print maximum 0 to 4294967295 numbers on LCD
// ==============================================================================================================================

void lcd_print (char row, char coloumn, unsigned long int value, int digits)
{
	unsigned char i=0;
	
	if(row==0||coloumn==0)
	{
		lcd_home();
	}
	else
	{
		lcd_cursor(row,coloumn);
	}
	
	if(digits > 10)	
	{
		lcd_wr_char('X');										// Indicates digits limit has exceeded
	}
	else
	{
		for(i = digits;i >= 1; i--)
		{
			lcd_wr_char(getDigits(value,i));
		}		
	}
}

// ==============================================================================================================================
//	Function 							: main()
//	Return type							: void
//	Parameters							: void
//	Description 						: Main function
//
// ==============================================================================================================================

int main()
{
	init_devices();
	
	lcd_init();

}
