#include <stdio.h>

/* Name: William Wingler
   CSU ID: 2565194
   Date: February 4th, 2013
   Description: Covnerts values of fahrenheit to celcius
*/

main()
{
	int degreeFahrenheit, degreeCelsius;
	int lowerLimit, upperLimit, degreeInterval;

	lowerLimit = 0;   // Lower limit of temperature table in Fahrenheit
	upperLimit = 300; // Upper limit of temperature table in Fahrenheit
	degreeInterval = 20; // What to increase by each iteration

	degreeFahrenheit = lowerLimit;
	while (degreeFahrenheit <= upperLimit) {
		degreeCelsius = 5 * (degreeFahrenheit - 32) / 9;
		printf("Fahrenheit Value:\t%d\tCelsius Value:\t%d\n", degreeFahrenheit, degreeCelsius);
		degreeFahrenheit += degreeInterval;
	}
}
