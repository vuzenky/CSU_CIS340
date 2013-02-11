#include <stdio.h>

/* Name: William Wingler
   CSU ID: 2565194
   Date: February 4th, 2013
   Description: Converts values of fahrenheit to celcius
 */

/*
  Here are our symbolic constants defined as macros.
 */
#define LOWER_LIMIT 0
#define UPPER_LIMIT 300
#define DEGREE_INTERVAL 20

main()
{
	int degreeFahrenheit, degreeCelsius;

	degreeFahrenheit = LOWER_LIMIT;
	while (degreeFahrenheit <= UPPER_LIMIT) {
		degreeCelsius = 5 * (degreeFahrenheit - 32) / 9;
		printf("Fahrenheit Value:\t%d\tCelsius Value:\t%d\n", degreeFahrenheit, degreeCelsius);
		degreeFahrenheit += DEGREE_INTERVAL;
	}
}
