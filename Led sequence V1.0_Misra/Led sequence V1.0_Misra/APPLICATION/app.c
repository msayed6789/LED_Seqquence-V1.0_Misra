

#include "App.h"

volatile u8 Press_count=0;

/*********************************Button Initalization*************************************************************************************/
button_init_st button1=
{
	.pin        =PINC4,
	.state      =PULLDOWN_STATE
};

/*********************************Led Initalization*************************************************************************************/
led_init_st led1=
{
	.pin              =PINB4,
	.state            =OFF_STATE
};
led_init_st led2=
{
	.pin              =PINB5,
	.state            =OFF_STATE
};
led_init_st led3=
{
	.pin              =PINB6,
	.state            =OFF_STATE
};
led_init_st led4=
{
	.pin              =PINB7,
	.state            =OFF_STATE
};

void APP_Init()
{
	LED_Init(&led1);
	LED_Init(&led2);
	LED_Init(&led3);
	LED_Init(&led4);
	Button_Init(&button1);
}
void APP_Start()
{
	if (Button_Check(&button1)==Pressed)
	{
		Press_count+=1;
		if (Press_count==9)
		{
			Press_count=1;
		}
	}
	else
	{
		//do nothing
	}
	switch(Press_count)
	{
		case 1:
		LED_ON(&led1);
		break;
		case 2:
		LED_ON(&led2);
		break;
		case 3:
		LED_ON(&led3);
		break;
		case 4:
		LED_ON(&led4);
		break;
		case 5:
		LED_OFF(&led1);
		break;
		case 6:
		LED_OFF(&led2);
		break;
		case 7:
		LED_OFF(&led3);
		break;
		case 8:
		LED_OFF(&led4);
		break;
	}
	
}