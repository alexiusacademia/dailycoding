/*
    002_tempconv/main.c

    An upgrade from the previous program 001_tempconv/main.c
    This program will allow the user to select which will be the input,
    celcius or fahrenheit.

    Author: syncster.dev
    Date:   October 25, 2024
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Display program information.
    printf("---------------------------------------------------------\n");
    printf("| Program Name:\tTemperature Converter \t\t\t|\n");
    printf("| Author:\tAlexius Academia      \t\t\t|\n");
    printf("| Description:\tConvert between temperature values. \t|\n");
    printf("--------------------------------------------------------\n");

    char input;
    float cel;                  
    float fah;                  

    printf("Select input [c - Celcius | f - Fahrenheit]: ");
    scanf("%c", &input);

    printf("Enter temperature value: ");
    if (input == 'c') {
        scanf("%f", &cel);
    } else if (input == 'f') {
        scanf("%f", &fah);
    } else {
        printf("Invalid input condition. Program will exit now.\n");
        return 1;
    }

    if (input == 'c') {
        fah = cel * 9.0 / 5 + 32;
        printf("Temperature in fahrenheit is: %.2f\n", fah);
    } else {
        cel = 5.0 / 9 * (fah - 32);
        printf("Temperature in celcius is: %.2f\n", cel);
    }

    return 0;
}
