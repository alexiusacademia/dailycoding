/*
    001_tempconv/main.c

    A simple program that converts temperature in Celcius 
    to Fahrenheit.

    Author: Alexius Academia
    Date:   October 25, 2024
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float cel;                  // Input temperature in Celcius
    float fah;                  // Output in Fahrenheit

    printf("Enter temperature in Celcius: ");
    scanf("%f", &cel);

    fah = cel * 9.0 / 5 + 32;   // Formula to convert celcius to fahrenheit

    printf("Temperature in fahrenheit is: %.2f\n", fah);

    return 0;
}
