/*
 * RCC.h
 *
 *  Created on: 11 Şub 2023
 *      Author: yunus
 */

#ifndef RCC_INC_RCC_H_
#define RCC_INC_RCC_H_

#include "stm32f401xe.h"
/*
 *RCC_CR
 */


typedef union {
  uint32_t CR;
  struct {
    uint32_t HSION     		: 1;
    uint32_t HSIRDY    		: 1;
    uint32_t reserved  		: 1;
    uint32_t HSITRIM   		: 5;
    uint32_t HSICAL    		: 8;
    uint32_t HSEON     		: 1;
    uint32_t HSERDY    		: 1;
    uint32_t HSEBYP    		: 1;
    uint32_t CSSON     		: 1;
    uint32_t reserved2 		: 4;
    uint32_t PLLON     		: 1;
    uint32_t PLLRDY    		: 1;
    uint32_t PLLI2SON    	: 1;
    uint32_t PLLI2SRDY   	: 1;
    uint32_t reserved3 		: 4;
  };
}RCC_CR_t;


typedef union {
  uint32_t PLLCFGR;
  struct {
    uint32_t PLLM_0      : 1;
    uint32_t PLLM_1      : 1;
    uint32_t PLLM_2      : 1;
    uint32_t PLLM_3      : 1;
    uint32_t PLLM_4      : 1;
    uint32_t PLLM_5      : 1;
    uint32_t PLLN      	 : 9;
    uint32_t reserved	 : 1;
    uint32_t PLLP_0      : 1;
    uint32_t PLLP_1      : 1;
    uint32_t reserved2 	 : 4;
    uint32_t PLLSRC      : 1;
    uint32_t reserved3 	 : 1;
    uint32_t PLLQ_0		 : 1;
    uint32_t PLLQ_1		 : 1;
    uint32_t PLLQ_2		 : 1;
    uint32_t PLLQ_3		 : 1;
    uint32_t reserved4 	 : 4;
  };
}RCC_PLLCFGR_t;

/*
 * GPIO PERIPHERAL CLOCK ENABLING OR DISABLING
 */
#define  GPIOA_CLK_EN	 RCC->AHB1ENR |=  (1<<0)
#define  GPIOA_CLK_DIS	 RCC->AHB1ENR &= ~(1<<0)
#define  GPIOB_CLK_EN	 RCC->AHB1ENR |=  (1<<1)
#define  GPIOB_CLK_DIS	 RCC->AHB1ENR &= ~(1<<1)
#define  GPIOC_CLK_EN	 RCC->AHB1ENR |=  (1<<2)
#define  GPIOC_CLK_DIS	 RCC->AHB1ENR &= ~(1<<2)
#define  GPIOD_CLK_EN	 RCC->AHB1ENR |=  (1<<3)
#define  GPIOD_CLK_DIS	 RCC->AHB1ENR &= ~(1<<3)
#define  GPIOE_CLK_EN	 RCC->AHB1ENR |=  (1<<4)
#define  GPIOE_CLK_DIS	 RCC->AHB1ENR &= ~(1<<4)
#define  GPIOH_CLK_EN	 RCC->AHB1ENR |=  (1<<7)
#define  GPIOH_CLK_DIS	 RCC->AHB1ENR &= ~(1<<7)


#endif /* RCC_INC_RCC_H_ */
