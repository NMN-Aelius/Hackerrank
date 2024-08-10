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

void bubblesort(char **s, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(strcmp(s[i], s[j]) >0)
            {
                swapvalue(&s[i], &s[j]);
            }
        }
    }
}

int check_permutation(int num, char **s)
{
    // we have n times to run
    for(int i=0; i< num-1; i++)
    {

    }
    // the final loop is to print result
}

int main()
{
    char **s; //double pointer
    int n; // number of obj input

    scanf("%d", &n);
    //allocate memory for double pointer
    /* THAT allow you to init a pointer to point to many others 
    in this case, that create each ptr to store object like: "ab", "ac",...*/
    s = calloc(n, sizeof(char*));

    /* CONTINUE, in each object ("ab") will be allowed to store 11 charater
    so must declare allocate memory for each "child" pointer of s,
    this is array s[i], respectively*/
    for(int i =0; i<n; i++)
    {
        s[i] = calloc(11, sizeof(char));
        scanf("%s", s[i]);
    }

    // Sort string first using bubble sort (DSA apply)
    bubblesort(s, n);
    for (int i = 0; i < n; i++)
        printf("%s ",s[i]);

    //NOW, the main point in create a permutation line to print out terminal
    //this idea is following to "DO-WHILE" loop.
    
    do
    {
        for(int i=0;i<n;i++)
            printf("%s%c", s[i], i==(n-1) ? '\n' : ' ');
    } while (check_permutation(n, s));

    //befor finish code, we will free pointer at here to avoid overflow in computer (memory), avoid slowing down program
    // or even leading crash.

    //free child
    for(int i=0; i<n; i++)
        free(s[i]);
    //free parent
    free(s);
    return 0;
}