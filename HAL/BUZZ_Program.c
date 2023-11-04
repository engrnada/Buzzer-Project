
/*
*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< DIO_Program.c>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* Auther: Nada Hassan
* Layer : HAL
* SWC : BUZZ Driver
*
*/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "BUZZ_interface.h"


void BUZZ_VoidInit(BUZZ_Adjusting BUZZ_Signal){

	DIO_enumSetPinDirection    (BUZZ_Signal.Port, BUZZ_Signal.Pin, DIO_PIN_OUTPUT);


}

void BUZZ_VoidOn(BUZZ_Adjusting BUZZ_Signal){


		if(BUZZ_Signal.Status == Active_High){

			DIO_enumSetPinValue(BUZZ_Signal.Port, BUZZ_Signal.Pin, DIO_PIN_HIGH);

		}
		else if (BUZZ_Signal.Status == Active_Low){
			DIO_enumSetPinValue(BUZZ_Signal.Port, BUZZ_Signal.Pin, DIO_PIN_LOW);

		}

}

void BUZZ_VoidOf(BUZZ_Adjusting BUZZ_Signal){

	if(BUZZ_Signal.Status == Active_High){

				DIO_enumSetPinValue(BUZZ_Signal.Port, BUZZ_Signal.Pin, DIO_PIN_LOW);

			}
			else if (BUZZ_Signal.Status == Active_Low){
				DIO_enumSetPinValue(BUZZ_Signal.Port, BUZZ_Signal.Pin, DIO_PIN_HIGH);

			}
}

void BUZZ_VoidToggle(BUZZ_Adjusting BUZZ_Signal){

	DIO_enumTogglePinValue(BUZZ_Signal.Port, BUZZ_Signal.Pin);



}
void Delay_time(int a){
	int add;
	int time;
	int i;
	time = a * 1000;
	for(i=0; i<time ; i++){
		add*=i;
		add++;
		add++;

	}

}
int main (){
	BUZZ_Adjusting BUZZ_Signal = {BUZZ_PORTA, BUZZ_PIN0, Active_High};
	BUZZ_Adjusting BUZZ_Controler = {BUZZ_PORTA, BUZZ_PIN0, DIO_PIN_OUTPUT};

	while(1){
		BUZZ_VoidInit (BUZZ_Controler);
		BUZZ_VoidOn (BUZZ_Signal);
		Delay_time(3);
	}


	return 0;
}

