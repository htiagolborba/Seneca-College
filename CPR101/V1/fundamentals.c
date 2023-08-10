																/* fundamentals module souce file version 1 */

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80														// buffer size = 80 for buffer1
#define NUM_INPUT_SIZE 10													// buffer size = 10 for numInput

#include "fundamentals.h"


void fundamentals(void) {
																		/* Version 1 */

	printf("*** Start of Indexing Strings Demo ***\n");
	char buffer1[BUFFER_SIZE];												// Two character arrays (strings) are provided, the former representing the string to be searched, and the latter indicating the specific character position to read.
	char numInput[NUM_INPUT_SIZE];  											
	size_t position;														// A variable to convert `numInput` into, which will be used to obtain the specific character.

	do {
		printf("Type not empty string (q - to quit):\n");
		fgets(buffer1, BUFFER_SIZE, stdin);									// Get the string that needs to be searched through.
		buffer1[strlen(buffer1) - 1] = '\0';								// Add a null termination character at the end of the input string, overwriting anything that may be present there.

		if (strcmp(buffer1, "q") != 0) {									// Provided that the input string was not the letter 'q', which indicates QUIT, we proceed.
			printf("Type the character position whithin the string:\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin);							// Get the input for the index of the desired character.
			numInput[strlen(numInput) - 1] = '\0';							// Similarly to before (line 21), add a null termination character to the end of the input string, overwriting anything that may be present there.

			position = atoi(numInput);										// Convert the string input into an integer and store it in the 'position' variable. Please note that 'size_t' is just an unsigned int.

			if (position >= strlen(buffer1)) {								// If the chosen index falls outside the range of the string, print an error message and then print the final character in the string.
				position = strlen(buffer1) - 1;								// The chosen index will always be a non-negative value, including 0, so there is no need to check for values below 0.
				printf ("Too big... Position reduced to max. availbale\n");
			}
			printf("There character found at %d position is \'%c\'\n",		// Display the character located at the index 'position'.
				(int)position, buffer1[position]);
		}
	} while (strcmp(buffer1, "q") != 0);									// The loop will continue as long as the initially input string is not equal to "q".
	printf("*** End of Indexing Strings Demo ***\n\n");						// Display the exit message: "END OF PROGRAM" on the screen.


}