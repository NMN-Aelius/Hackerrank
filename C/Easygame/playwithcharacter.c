#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char ch, str[100], sen[100];

int main()
{
    printf("Take a character!: ");
    scanf("%c%*c", &ch);

    printf("Take a string!: ");
    scanf("%99s%*c", str);

    printf("Take a sentence!: ");
    scanf("%99[^\n]%*c", sen);

    printf("\nCharacter: %c\nString: %s\nSentence: %s", ch, str, sen);

    return 0;
}