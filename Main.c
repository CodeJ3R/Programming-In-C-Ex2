/*
Name: Jeremy Paruch
Student Number: w0222971
Date: January 14, 2024
Instructor: Nadia Gouda
Class: PROG 2007 Programming In C
*/

#include <stdio.h>
#include <math.h> // For Step 3

// Step 1: Floating Point Numbers

float Radius = 4;
double Pi = 3.14159;

int main()
{

    float circumference = 2 * Pi * Radius;

    /* Testing to see this would work before progessing through the assignment
    printf("%f\n",circumference);
    */

    // Step 2: Demonstrate Type Conversion

    /* Explicitly convert the floating point circumference to an  interger and store it in a new variable
    Print both the original floating-point value and the integer-converted value
    */
    int convert = circumference;

    /* Testing to see this would work before progessing through the assignment

    printf("The Integer-converted Circumference is: %d\n", convert); *Note* Intiially any radius less than 1, causes to be 0 will increase radius past 0.1
    */

    // Step 3

    //*old code*double planck = 6.6260*pow(10.0,-34.0);This was old code that I found some documentation on thanks to judah and david for the assistance on that.

    // Netacads way of using Plancks constant, it does look nicer doesnt it?
    double planck = 6.62607E-34;
    printf("%e\n", planck);

    // Step 4

    printf("radius is: %.2f\n", Radius); //  %.2f This drops down up to 2 decimal places!

    printf("Circumference is: %.3f\n", circumference);

    printf("The Integer-converted Circumference is: %d\n", convert);

    printf("Planks constant in scientific notation is: %e\n", planck);

    return 0;
}