#include <stdio.h>
/**
 * main - entry point 
 *
 * description : using sizeof to porint the size of various types.
 *
 * return: Always 0 (success)
*/

int main ()
{       
        printf("Size of a char : %u byte(s)\n", sizeof(char));
        printf("Size of an int : %u byte(s)i\n", sizeof(int));
        printf("Size of a long int : %u byte(s)\n", sizeof(long int));
        printf("Size of a long long int : %u byte(s)\n", sizeof(long long int));
        printf("Size of a float: %u byte(s)\n", sizeof(float));
}       
