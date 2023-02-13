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


typedef union {
  uint32_t CFGR;
  struct {
    uint32_t SW_0      	 : 1;
    uint32_t SW_1        : 1;
    uint32_t SWS_0       : 1;
    uint32_t SWS_1       : 1;
    uint32_t HPRE        : 4;
    uint32_t reserved    : 2;
    uint32_t PPRE_1      : 3;
    uint32_t PPRE_2      : 3;
    uint32_t RTCPPRE     : 5;
    uint32_t MCO_1       : 2;
    uint32_t I2SCC       : 1;
    uint32_t MCO1_PRE    : 3;
    uint32_t MCO2_PRE    : 3;
    uint32_t MCO2      	 : 2;
  };
}RCC_CFGR_t;

typedef union {
	uint32_t RCC_CIR;
  struct {
    uint32_t LSIRDYF 	 	: 1;
    uint32_t LSERDYF 	 	: 1;
    uint32_t HSIRDYF 	 	: 1;
    uint32_t HSERDYF 	 	: 1;
    uint32_t PLLRDYF 	 	: 1;
    uint32_t PLLI2SRDYF  	: 1;
    uint32_t reserved    	: 1;
    uint32_t CSSF 		 	: 1;
    uint32_t LSIRDYIE    	: 1;
    uint32_t LSERDYIE    	: 1;
    uint32_t HSIRDYIE    	: 1;
    uint32_t HSERDYIE    	: 1;
    uint32_t PLLRDYIE    	: 1;
    uint32_t PLLI2SRDYIE    : 1;
    uint32_t reserved1		: 2;
    uint32_t LSIRDYC 		: 1;
    uint32_t LSERDYC 		: 1;
    uint32_t HSIRDYC 		: 1;
    uint32_t HSERDYC 		: 1;
    uint32_t PLLRDYC 		: 1;
    uint32_t PLLI2SRDYC     : 1;
    uint32_t reserved2		: 1;
    uint32_t CSSC 			: 1;
    uint32_t reserved3		: 8;
 };
} RCC_CIR_t;


typedef union {
	uint32_t RCC_AHB1RSTR;
  struct {
	uint32_t GPIOARST 		: 1;
	uint32_t GPIOBRST 		: 1;
	uint32_t GPIOCRST 		: 1;
	uint32_t GPIODRST 		: 1;
	uint32_t GPIOERST 		: 1;
	uint32_t reserved 		: 2;
	uint32_t GPIOHRST 		: 1;
	uint32_t reserved2 		: 4;
	uint32_t CRCRST 		: 1;
	uint32_t reserved3 		: 8;
	uint32_t DMA1RST 		: 1;
	uint32_t DMA2RST 		: 1;
	uint32_t reserved4		: 9;
 };
} RCC_AHB1RSTR_t;

typedef union {
	uint32_t RCC_AHB2RSTR;
  struct {
	uint32_t reserved 		: 7;
	uint32_t OTGFSRST 		: 1;
	uint32_t reserved2 		: 24;
 };
} RCC_AHB2RSTR_t;

typedef union {
	uint32_t RCC_APB1RSTR;
  struct {
	uint32_t TIM2RST 		: 1;
	uint32_t TIM3RST 		: 1;
	uint32_t TIM4RST 		: 1;
	uint32_t TIM5RST 		: 1;
	uint32_t reserved 		: 7;
	uint32_t WWDGRST 		: 1;
	uint32_t reserved2 		: 2;
	uint32_t SPI2RST 		: 1;
	uint32_t SPI3RST 		: 1;
	uint32_t reserved3 		: 1;
	uint32_t USART2RST 		: 1;
	uint32_t reserved4 		: 3;
	uint32_t I2C1RST 		: 1;
	uint32_t I2C2RST 		: 1;
	uint32_t I2C3RST 		: 1;
	uint32_t reserved5 		: 4;
	uint32_t PWRRST 		: 1;
	uint32_t reserved6 		: 3;
 };
} RCC_APB1RSTR_t;


typedef union {
	uint32_t RCC_APB2RSTR;
  struct {
	uint32_t TIM1RST 		: 1;
	uint32_t reserved 		: 3;
	uint32_t USART1RST 		: 1;
	uint32_t USART6RST 		: 1;
	uint32_t reserved2 		: 2;
	uint32_t ADC1RST 		: 1;
	uint32_t reserved3 		: 2;
	uint32_t SDIORST 		: 1;
	uint32_t SPI1RST 		: 1;
	uint32_t SPI4RST 		: 1;
	uint32_t SYSCFGRST 		: 1;
	uint32_t reserved4 		: 1;
	uint32_t TIM9RST 		: 1;
	uint32_t TIM10RST 		: 1;
	uint32_t TIM11ST 		: 1;
	uint32_t reserved5 		: 13;

 };
} RCC_APB2RSTR_t;

typedef union {
	uint32_t RCC_AHB1ENR;
  struct {

	uint32_t GPIOAEN		: 1;
	uint32_t GPIOBEN		: 1;
	uint32_t GPIOCEN		: 1;
	uint32_t GPIODEN		: 1;
	uint32_t GPIOEEN		: 1;
	uint32_t reserved		: 2;
	uint32_t GPIOHEN		: 1;
	uint32_t reserved2		: 4;
	uint32_t CRCEN			: 1;
	uint32_t reserved3		: 8;
	uint32_t DMA1EN			: 1;
	uint32_t DMA2EN			: 1;
	uint32_t reserved4		: 9;
 };
} RCC_AHB1ENR_t;

typedef union {
	uint32_t RCC_AHB2ENR;
  struct {
	uint32_t reserved		: 7;
	uint32_t OTGFSEN		: 1;
	uint32_t reserved2		: 24;
 };
} RCC_AHB2ENR_t;

typedef union {
	uint32_t RCC_APB1ENR;
  struct {
	uint32_t TIM2EN 		: 1;
	uint32_t TIM3EN 		: 1;
	uint32_t TIM4EN 		: 1;
	uint32_t TIM5EN 		: 1;
	uint32_t reserved 		: 7;
	uint32_t WWDEN 			: 1;
	uint32_t reserved2 		: 2;
	uint32_t SPI2EN 		: 1;
	uint32_t SPI3EN 		: 1;
	uint32_t reserved3 		: 1;
	uint32_t USART2EN 		: 1;
	uint32_t reserved4 		: 3;
	uint32_t I2C1EN 		: 1;
	uint32_t I2C2EN 		: 1;
	uint32_t I2C3EN 		: 1;
	uint32_t reserved5 		: 4;
	uint32_t PWREN	 		: 1;
	uint32_t reserved6 		: 3;
 };
} RCC_APB1ENR_t;

typedef union {
	uint32_t RCC_APB2ENR;
  struct {
	uint32_t TIM1EN 		: 1;
	uint32_t reserved 		: 3;
	uint32_t USART1EN 		: 1;
	uint32_t USART6EN 		: 1;
	uint32_t reserved2 		: 2;
	uint32_t ADC1EN 		: 1;
	uint32_t reserved3 		: 2;
	uint32_t SDIOEN 		: 1;
	uint32_t SPI1EN 		: 1;
	uint32_t SPI4EN 		: 1;
	uint32_t SYSCFGEN 		: 1;
	uint32_t reserved4 		: 1;
	uint32_t TIM9EN 		: 1;
	uint32_t TIM10EN 		: 1;
	uint32_t TIM11EN 		: 1;
	uint32_t reserved5 		: 13;
 };
} RCC_APB2RENR_t;

typedef union {
	uint32_t RCC_AHB1LPENR;
  struct {
	uint32_t GPIOALPEN		: 1;
	uint32_t GPIOBLPEN		: 1;
	uint32_t GPIOCLPEN		: 1;
	uint32_t GPIODLPEN		: 1;
	uint32_t GPIOELPEN		: 1;
	uint32_t reserved		: 2;
	uint32_t GPIOHLPEN		: 1;
	uint32_t reserved2		: 4;
	uint32_t CRCLPEN		: 1;
	uint32_t reserved3		: 2;
	uint32_t FLITFLPEN		: 1;
	uint32_t SRAM1LPEN		: 1;
	uint32_t reserved4		: 4;
	uint32_t DMA1LPEN		: 1;
	uint32_t DMA2LPEN		: 1;
	uint32_t reserved5		: 9;
 };
} RCC_AHB1LPENR_t;

/*
 * GPIO PERIPHERAL CLOCK ENABLING OR DISABLING
 */
#define  GPIOA_CLK_EN()	 	 RCC->AHB1ENR |=  (1<<0)
#define  GPIOA_CLK_DIS()	 RCC->AHB1ENR &= ~(1<<0)
#define  GPIOB_CLK_EN()	 	 RCC->AHB1ENR |=  (1<<1)
#define  GPIOB_CLK_DIS()	 RCC->AHB1ENR &= ~(1<<1)
#define  GPIOC_CLK_EN()	 	 RCC->AHB1ENR |=  (1<<2)
#define  GPIOC_CLK_DIS()	 RCC->AHB1ENR &= ~(1<<2)
#define  GPIOD_CLK_EN()	 	 RCC->AHB1ENR |=  (1<<3)
#define  GPIOD_CLK_DIS()	 RCC->AHB1ENR &= ~(1<<3)
#define  GPIOE_CLK_EN()	 	 RCC->AHB1ENR |=  (1<<4)
#define  GPIOE_CLK_DIS()	 RCC->AHB1ENR &= ~(1<<4)
#define  GPIOH_CLK_EN()	 	 RCC->AHB1ENR |=  (1<<7)
#define  GPIOH_CLK_DIS()	 RCC->AHB1ENR &= ~(1<<7)


#endif /* RCC_INC_RCC_H_ */
