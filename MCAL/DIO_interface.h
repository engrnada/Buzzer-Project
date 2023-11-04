* DIO_interface.h
 *
 *  Created on: Nov 2, 2023
 *      Author: Nada
 */

/*
*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< DIO_Interface.h>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* Auther: Nada Hassan
* Layer : MCAL
* SWC : DIO/GPIO
*
*/

typedef enum {

	DIO_NOK,
	DIO_OK


} DIO_ErrorState;

#ifndef _DIO_INTERFACE_H_
#define _DIO_INTERFACE_H_

#define DIO_PIN_OUTPUT 1
#define DIO_PIN_INPUT 0

#define DIO_PIN_HIGH 1
#define DIO_PIN_LOW 0

#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7


DIO_ErrorState DIO_enumSetPinDirection    (u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8DIRECTION);
DIO_ErrorState DIO_enumSetPinValue        (u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8VALUE);
DIO_ErrorState DIO_enumGetPinValue          (u8 Copy_u8PORT, u8 Copy_u8PIN, u8* Copy_PtrData);
DIO_ErrorState DIO_enumTogglePinValue    (u8 Copy_u8PORT, u8 Copy_u8PIN);


#endif /* DIO_INTERFACE_H_ */
