#include<stdio.h>
#include<math.h>

short int value;
int sizev, bits;

int main()
{
    bits = sizeof(short int) * 8; //16bits
    sizev = pow(2, bits) /2 -1;

    printf("The biggest positive value that you can input is %d\n\n", sizev);
    printf("Please input integer number: ");
    scanf("%hd", &value);
    printf("\nValue have been input is: %hd", value);
    return 0;
}
