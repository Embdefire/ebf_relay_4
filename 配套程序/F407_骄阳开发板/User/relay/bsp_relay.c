/**
  ******************************************************************
  * @file    bsp_relay.c
  * @author  fire
  * @version V1.0
  * @date    2019-xx-xx
  * @brief   �̵���Ӧ�ú����ӿ�
  ******************************************************************
  * @attention
  *
  * ʵ��ƽ̨:Ұ�� STM32F407 ������ 
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :https://fire-stm32.taobao.com
  *
  ******************************************************************
  */  
  
#include "./relay/bsp_relay.h"   


void RELAY_GPIO_Config(void)
{		

		/*����һ��GPIO_InitTypeDef���͵Ľṹ��*/
	   GPIO_InitTypeDef  GPIO_InitStruct;

     RELAY1_GPIO_CLK();
	   RELAY2_GPIO_CLK(); 
	   RELAY3_GPIO_CLK();
	   RELAY4_GPIO_CLK(); 
							
			/*ѡ��Ҫ���Ƶ�GPIO����*/															   
		GPIO_InitStruct.Pin = RELAY1_GPIO_PIN;	

		/*�������ŵ��������Ϊ�������*/
		GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;  

		/*��������Ϊ����ģʽ*/
		GPIO_InitStruct.Pull  = GPIO_PULLUP;

		/*������������Ϊ���� */   
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH; 

		/*���ÿ⺯����ʹ���������õ�GPIO_InitStructure��ʼ��GPIO*/
		HAL_GPIO_Init(RELAY1_GPIO_PORT, &GPIO_InitStruct);	

		/*ѡ��Ҫ���Ƶ�GPIO����*/															   
		GPIO_InitStruct.Pin = RELAY2_GPIO_PIN;	
		HAL_GPIO_Init(RELAY2_GPIO_PORT, &GPIO_InitStruct);	

		/*ѡ��Ҫ���Ƶ�GPIO����*/															   
		GPIO_InitStruct.Pin = RELAY3_GPIO_PIN;	
		HAL_GPIO_Init(RELAY3_GPIO_PORT, &GPIO_InitStruct);	
		
		/*ѡ��Ҫ���Ƶ�GPIO����*/															   
		GPIO_InitStruct.Pin = RELAY4_GPIO_PIN;	
		HAL_GPIO_Init(RELAY4_GPIO_PORT, &GPIO_InitStruct);	
	
		
		HAL_GPIO_WritePin(RELAY1_GPIO_PORT, RELAY1_GPIO_PIN,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(RELAY2_GPIO_PORT, RELAY2_GPIO_PIN,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(RELAY3_GPIO_PORT, RELAY3_GPIO_PIN,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(RELAY4_GPIO_PORT, RELAY4_GPIO_PIN,GPIO_PIN_RESET);
}
/*********************************************END OF FILE**********************/
