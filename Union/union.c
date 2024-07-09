#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char ch;
    char s[10];
}; // End union

int main() {
    union Data d;

    // Assigning and printing an integer
    d.i = 3;
    printf("Integer: %d\n", d.i);

    // Assigning and printing a float
    d.f = 3.2;
    printf("Float: %f\n", d.f);

    // Assigning and printing a character
    d.ch = 'N';
    printf("Character: %c\n", d.ch);

    // Assigning and printing a string
    strcpy(d.s, "Atherv");
    printf("String: %s\n", d.s);

    return 0;
} // End main
