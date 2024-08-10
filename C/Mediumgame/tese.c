#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swapvalue(char **value, char **valpos)
{
    char *ptr;

    ptr = *valpos;
    *valpos = *value;
    *value = ptr;
}

// no need
// void bubblesort(char **s, int n)
// {
//     for(int i = 0; i < n-1; i++)
//     {
//         for(int j = i+1; j < n; j++)
//         {
//             if(strcmp(s[i], s[j]) > 0)
//             {
//                 swapvalue(&s[i], &s[j]);
//             }
//         }
//     }
// }

int check_permutation(int n, char **s)
{
    int i = n - 2;
    while (i >= 0 && strcmp(s[i], s[i + 1]) >= 0)
        i--;

    if (i == -1)
        return 0; // no more permutations

    int j = n - 1;
    while (strcmp(s[i], s[j]) >= 0)
        j--;

    swapvalue(&s[i], &s[j]);

    for (int k = i + 1, l = n - 1; k < l; k++, l--)
    {
        swapvalue(&s[k], &s[l]);
    }

    return 1; // there are more permutations
}

int main()
{
    char **s;
    int n;

    scanf("%d", &n);
    s = calloc(n, sizeof(char*));

    for(int i = 0; i < n; i++)
    {
        s[i] = calloc(11, sizeof(char));
        scanf("%s", s[i]);
    }

    // no need
    // bubblesort(s, n);

    do
    {
        for(int i = 0; i < n; i++)
            printf("%s%c", s[i], i == (n - 1) ? '\n' : ' ');
    } while (check_permutation(n, s));

    for(int i = 0; i < n; i++)
        free(s[i]);
    free(s);

    return 0;
}
