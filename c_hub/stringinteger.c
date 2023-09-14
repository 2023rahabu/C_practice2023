#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _atoi(char *s);
int main(void)
{
	int nb;

	nb = _atoi("98");
	printf("%d\n", nb);
	nb = _atoi("-402");
	printf("%d\n", nb);
	nb = _atoi("          ------++++++-----+++++--98");
	printf("%d\n", nb);
	nb = _atoi("214748364");
	printf("%d\n", nb);
	nb = _atoi("0");
	printf("%d\n", nb);
	nb = _atoi("Suite 402");
	printf("%d\n", nb);
	nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
	printf("%d\n", nb);
	nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", nb);
	return (0);
}
int _atoi(char *s) {
    int i;
    int sign = 1;
    int result = 0;
    int digitEncountered = 0; // Flag to track if at least one digit has been encountered

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '-') {
            // Check if a '-' sign is encountered later in the string
            if (digitEncountered) {
                break; // Break if a digit has already been encountered
            }
            sign = -1;
        } else if (s[i] == '+') {
            // Check if a '+' sign is encountered later in the string
            if (digitEncountered) {
                break; // Break if a digit has already been encountered
            }
            // Note: By default, sign is already set to 1 for positive
        } else if (s[i] >= '0' && s[i] <= '9') {
            digitEncountered = 1; // Set the digit encountered flag
            result = result * 10 + (s[i] - '0');
        } else if (digitEncountered) {
            // If non-digit characters are encountered after digits,
            // break the loop to prevent further parsing
            break;
        }
    }

    return sign * result;
}

