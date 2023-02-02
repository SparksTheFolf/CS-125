/***************************************************************
 *  * * File:    1stChal.c
 *   * * Author:   Nolan Trapp
 *    * * Date: 2-2-23
 *     * * Purpose:  Conversion 
 *      * * Source Code: Https://github.com/SparksTheFolf/CS-125
 *         * ****************************************************************/

#include <stdio.h>

int main(void) {
    float celsius = 36.50;
    float kelvin = celsius + 273.15;
    float fahrenheit = celsius * 1.80 + 32.00;
    printf("Celsius: %.2f Kelvin: %.2f Fahrenheit: %.2f\n", celsius, kelvin, fahrenheit);
    return 0;
}
