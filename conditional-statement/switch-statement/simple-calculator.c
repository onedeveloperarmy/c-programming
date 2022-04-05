#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main () {
    start:
    printf("\nWelcome to the Calculator\n==========================\n");
    printf("1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n5. Exit\n");
    printf("Press Any Option: ");
    int option;
    scanf("%d", &option);
    //system("clear");
    switch (option)
    {
        float a,b;
        case 1:
            printf("\nAddition of Two Numbers:\nPlease input two numbers: ");
            scanf("%f%f", &a, &b);
            printf("%.2f",a+b);
            break;
        case 2:
            printf("\nSubstraction of Two Numbers:\nPlease input two numbers: ");
            //float a,b;
            scanf("%f%f", &a, &b);
            printf("%.2f",a-b);
            break;

        case 3:
            printf("\nMultiplication of Two Numbers:\nPlease input two numbers: ");
            //float a,b;
            scanf("%f%f", &a, &b);
            printf("%.2f",a*b);
            break;

        case 4: 
            printf("n\Division of Two Numbers:\nPlease input two numbers: ");
            //float a,b;
            scanf("%f%f", &a, &b);
            printf("%.2f",a/b);
            break;
        
        default:
            goto end;
            break;
    }
    goto start;
    end:
    return (0);
}