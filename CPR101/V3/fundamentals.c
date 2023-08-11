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

																		
																		/* Version 2 */


printf("*** Start of Measuring Strings Demo ***\n");    					// Start of Measuring Strings application
	char buffer2[BUFFER_SIZE];                            				    // Generating a character array named buffer2 with a capacity for 80 characters, including the null terminator.
	do {                                                   				    // The do/while loop will continue to execute until the value of buffer2 matches "q".
		printf("Type a string (q - to quit):\n");          
		fgets(buffer2, BUFFER_SIZE, stdin);                  				// Receives user input and stores it within the "buffer2" array.
		buffer2[strlen(buffer2) - 1] = '\0';
		if (strcmp(buffer2, "q") != 0)                       				// Verifies whether the input string is different from "q".
			printf("The length of the \'%s\' is %d characters\n",  			// Displays the length of the input string.
				buffer2, (int)strlen(buffer2));

	} while (strcmp(buffer2, "q") != 0);                     				// Iterates until the input string becomes "q".
	printf("*** End of Measuring Strings Demo ***\n\n");     				// Display a message indicating the end of the function.


																		/* Version 3 */


	printf("*** Start of Copying Strings Demo ***\n");   					// Function start message
	char destination[BUFFER_SIZE];                      					// Set up the character arrays for holding the original and target strings
	char source[BUFFER_SIZE];
	do {

		destination[0] = '\0';                           					// Clear the target string by assigning it the value of an empty string through the null character
		printf("Destination string is reset to empty\n"); 
		printf("Type the source string (q - to quit) :\n");
		fgets(source, BUFFER_SIZE, stdin);               					// Retrieve the source string utilizing the fgets function
		source[strlen(source) - 1] = '\0';               					// Eliminate the trailing newline character from the end of the source string
		if (strcmp(source, "q") != 0) {                  					// In case the user hasn't input "q" as the source string, replicate the content to the target string using the strcpy() function
			strcpy(destination, source);
			printf("New destination string is \'%s'\n", destination);

		}

	} while (strcmp(source, "q") != 0);                 					// Continue in the loop until the user inputs "q" as the source string
	printf("*** End of Copying Strings Demo ***\n\n");




}