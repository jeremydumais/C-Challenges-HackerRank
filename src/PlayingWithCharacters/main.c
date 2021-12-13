#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 100

int main()
{
    char c;
    char s[MAX_LEN];
    char sen[MAX_LEN];

    scanf("%c", &c);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);

    printf("%c\n", c);
    printf("%s\n", s);
    printf("%s\n", sen);
    return EXIT_SUCCESS;
}