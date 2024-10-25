/*
    003_tempconv/main.c

    An upgrade from the previous program 002_tempconv/main.c
    This program will continuously ask the user for inputs until
    the user chooses to quit the program.

    Author: Alexius Academia
    Date:   October 26, 2024
*/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    // Display program information.
    printf("---------------------------------------------------------\n");
    printf("| Program Name:\tTemperature Converter \t\t\t|\n");
    printf("| Author:\tAlexius Academia      \t\t\t|\n");
    printf("| Description:\tConvert between temperature values. \t|\n");
    printf("--------------------------------------------------------\n\n");

    char input;
    float cel;                  
    float fah;                  

    while (true)
    {
        printf("Select input [c - Celcius | f - Fahrenheit | q - Quit]: ");
        scanf(" %c", &input);           // Added space before %c to ignore any whitespace

        // Quit if the user inputs 'q'
        if (input == 'q') {
            printf("The program will now exit.\n");
            return 0;
        }

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
        printf("---\n");
    }

    return 0;
}
