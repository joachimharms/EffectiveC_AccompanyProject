#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    if(puts("Hello, world!")==EOF)
    {
        return EXIT_FAILURE;
        // Code hier wird niemals ausgeführt.
    }
    else
    {
        return EXIT_SUCCESS;
        // Code hier wird niemals ausgeführt.
    }
}