#include <unistd.h> // Required for putchar

int main(void)
{
    char c = 'a'; // Initialize character to 'a'

    while (c <= 'z') // Loop through all lowercase letters
    {
        putchar(c); // Print the current character
        c++;        // Increment to the next character
    }

    putchar('\n'); // Print a newline character

    return (0); // Indicate successful execution
}
