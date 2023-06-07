
#ifndef LED_H_
#define LED_H_
#include "../../MCAL/dio/dio.h"



/***************************LED Configuration******************************************************/
typedef enum
{
	ON_STATE,
	OFF_STATE
}led_state_en;

typedef struct
{
	u8                        pin;
	led_state_en              state;
}led_init_st;
/*************************************************************************************************/

typedef enum
{
	led_ERROR=0,
	led_DONE =1
}bool_error_led_t;

/***************************************************Functions****************************************/
bool_error_led_t LED_Init(led_init_st* led);

bool_error_led_t LED_ON (led_init_st* led);

bool_error_led_t LED_OFF (led_init_st* led);



#endif /* LED_H_ */