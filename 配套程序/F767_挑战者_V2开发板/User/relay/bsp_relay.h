#ifndef __RELAY_H
#define	__RELAY_H

#include "stm32f7xx.h"





#define RELAY1_GPIO_PORT    	GPIOC	              
#define RELAY1_GPIO_CLK() 	    __GPIOC_CLK_ENABLE()		
#define RELAY1_GPIO_PIN		    GPIO_PIN_6	        

#define RELAY2_GPIO_PORT    	GPIOC	              
#define RELAY2_GPIO_CLK() 	    __GPIOC_CLK_ENABLE()		
#define RELAY2_GPIO_PIN		    GPIO_PIN_7

#define RELAY3_GPIO_PORT    	GPIOC		              
#define RELAY3_GPIO_CLK() 	    __GPIOC_CLK_ENABLE()			
#define RELAY3_GPIO_PIN		    GPIO_PIN_2

#define RELAY4_GPIO_PORT    	GPIOI		              
#define RELAY4_GPIO_CLK() 	    __GPIOI_CLK_ENABLE()	
#define RELAY4_GPIO_PIN		    GPIO_PIN_3


/* ֱ�Ӳ����Ĵ����ķ�������IO */
#define	digitalHi(p,i)		 {p->BSRR=i;}	 //���Ϊ�ߵ�ƽ		
#define digitalLo(p,i)		 {p->BSRR=i<<16;}	 //����͵�ƽ



/* �������IO�ĺ� */
#define RELAY1_ON		       digitalHi(RELAY1_GPIO_PORT,RELAY1_GPIO_PIN)
#define RELAY1_OFF			   digitalLo(RELAY1_GPIO_PORT,RELAY1_GPIO_PIN)


#define RELAY2_ON		       digitalHi(RELAY2_GPIO_PORT,RELAY2_GPIO_PIN)
#define RELAY2_OFF			   digitalLo(RELAY2_GPIO_PORT,RELAY2_GPIO_PIN)


#define RELAY3_ON		       digitalHi(RELAY3_GPIO_PORT,RELAY3_GPIO_PIN)
#define RELAY3_OFF			   digitalLo(RELAY3_GPIO_PORT,RELAY3_GPIO_PIN)

#define RELAY4_ON		       digitalHi(RELAY4_GPIO_PORT,RELAY4_GPIO_PIN)
#define RELAY4_OFF			   digitalLo(RELAY4_GPIO_PORT,RELAY4_GPIO_PIN)

void RELAY_GPIO_Config(void);

#endif /* __RELAY_H */
