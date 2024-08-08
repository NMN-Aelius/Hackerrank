#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char ch, str[100], sen[4];

int main()
{
    printf("Take a character!: ");
    scanf("%c", &ch);

    printf("Take a string!: ");
    scanf("%100[^\n]%*c", str);

    printf("Take a sentence!: ");
    scanf("%100[^\n]%*c", sen);

    printf("\nCharacter: %c\nString: %s\nSentence: %s", ch, str, sen);

    return 0;
}