/************************************************************************************************
Copyright (c) 2023, Santiago Escribá <escribasan@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

SPDX-License-Identifier: MIT
*************************************************************************************************/

#ifndef GPIO_H
#define GPIO_H

/** @file
 ** @brief Definición de la función GPIO del programa
 **/

/* === Headers files inclusions ================================================================ */
#include <stdint.h>
#include <stdbool.h>

/* === Cabecera C++ ============================================================================ */

#ifdef __cplusplus
extern "C" {
#endif

/* === Public macros definitions =============================================================== */

/* === Public data type declarations =========================================================== */

typedef struct gpio_s * gpio_t;

/* === Public variable declarations ============================================================ */

/* === Public function declarations ============================================================ */

/**
 * @brief Funcion que crea el objeto GPIO
 *
 * @param uint8_t puerto GPIO
 * @param uint8_t bit GPIO
 * @return gpio_t Objeto GPIO
 */
gpio_t gpioCreate(uint8_t puerto, uint8_t bit);

/**
 * @brief Funcion que setea la output GPIO
 *
 * @param gpio_t Objeto GPIO
 * @param bool output state
 * @return
 */
void gpioSetOutput(gpio_t gpio, bool output);

/**
 * @brief Funcion que setea el estado GPIO
 *
 * @param gpio_t Objeto GPIO
 * @param bool state
 * @return
 */
void gpioSetState(gpio_t gpio, bool state);

/**
 * @brief Funcion que retorna el estado del GPIO
 *
 * @param gpio_t Objeto GPIO
 * @return bool Devuelve el estado del GPIO
 */
bool gpioGetState(gpio_t gpio);

/* === End of documentation ==================================================================== */

#ifdef __cplusplus
}
#endif

#endif /* GPIO_H */