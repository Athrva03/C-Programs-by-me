#include <stdio.h>
#include <string.h>

int main()
{

    // String Length
    char str[] = "Atharva";
    printf("%s", str);

    int length = strlen(str);
    printf("\n%d", length);

    // Copy String
    char cpy[100];
    strcpy(cpy, str);
    printf("\n%s", cpy);

    // Concating Two Strings
    char s1 = "Athrv";
    char s2 = "Dudhe";

    strcat(s1,s2);

    prinf("%s", s1);
}