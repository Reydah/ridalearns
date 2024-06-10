#include <stdio.h>
int main() {
    int age;
    printf("how old are you? ");
    scanf("%d",&age);
    if (age>=1 && age<=12)
    printf("You are a child!");
    else if (age>12 && age<=19)
    printf("You are a Teen!");
    else if (age>19 && age<=39)
    printf("You are an Adult!");
    else if (age>39 && age<=59)
    printf("You are a Middle Age Adult!");
    else if (age>=60)
    printf("You are a Senior Adult!");
    else
    printf("You don't exist lil bro!");
    
    return 0;
}