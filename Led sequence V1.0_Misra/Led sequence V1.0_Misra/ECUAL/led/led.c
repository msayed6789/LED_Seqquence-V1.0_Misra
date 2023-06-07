 


#include "LED.h"

bool_error_led_t LED_Init(led_init_st* led)
{
	bool_error_led_t state=led_DONE;
	state=DIO_InitPin(led->pin,OUTPUT);
	if (led->state==ON_STATE)
	{
		state=DIO_WRitePin(led->pin,HIGH);
	}
	else if (led->state==OFF_STATE)
	{
		state=DIO_WRitePin(led->pin,LOW);
	}
	else
	{
		state=led_ERROR;
	}
	return state;
}

bool_error_led_t LED_ON (led_init_st* led)
{
	bool_error_led_t state=led_DONE;
	state=DIO_WRitePin(led->pin,HIGH);
	return state;
}
bool_error_led_t LED_OFF (led_init_st* led)
{
   bool_error_led_t state=led_DONE;
   state=DIO_WRitePin(led->pin,LOW);
   return state;
}