#include <stdio.h>
#include <string.h>
struct atherv
{
    int num;
    char ch;
    float decimal;
};

struct animal{
    char name[20];
    float weight;
    int height;
    char animalType[50];
};

int main()
{
    printf("Hello");

    struct atherv a ;
    a.num=10;
    a.ch='a';
    a.decimal=.3f;

    printf("\n%d %c %.2f",a.num,a.ch,a.decimal);

    struct animal info;
    strcpy(info.name,"tiger");
    info.weight = 500.5f;
    info.height = 4;
    strcpy(info.animalType, "Cat");

    printf("\n%s %.1f %d %s", info.name, info.weight, info.height, info.animalType);

    return 0;
}//End main