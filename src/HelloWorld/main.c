#include <stdio.h>
#include <stdlib.h>

#define INPUT_MAX 100

int main()
{
    char input[INPUT_MAX];

    scanf("%[^\n]%*c", input);
    printf("Hello, World!\n");
    printf("%s\n", input);
    return EXIT_SUCCESS;
}