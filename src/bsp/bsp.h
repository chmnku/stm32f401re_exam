/*
 * bsp.h
 *
 *  Created on: Jan 19, 2024
 *      Author: chmnq
 */

#ifndef SRC_BSP_BSP_H_
#define SRC_BSP_BSP_H_

#include "def.h"

void bspInit(void);

void delay(uint32_t ms);
uint32_t millis(void);

#endif /* SRC_BSP_BSP_H_ */
