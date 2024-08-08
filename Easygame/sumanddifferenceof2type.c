#include<stdio.h>

typedef struct 
{
    int sum, diff;
}int_struct;

typedef struct 
{
    float sum, diff;
}float_struct;



int v1, v2;
float v3, v4;

int_struct intCompute(int *a, int *b)
{
    int_struct data1;
    data1.sum = *a + *b;
    data1.diff = *a - *b;
    return data1;
}

float_struct floCompute(float *a, float *b)
{
    float_struct data2;
    data2.sum = *a + *b;
    data2.diff = *a - *b;
    return data2;
}

int main()
{
    printf("INT input: ");
    scanf("%d %d", &v1, &v2);

    printf("FLOAT input: ");
    scanf("%f %f", &v3, &v4);

    int_struct vint = intCompute(&v1, &v2);
    float_struct vfloat = floCompute(&v3, &v4);

    printf("%d, %d, %.1f, %.1f", vint.sum, vint.diff, vfloat.sum, vfloat.diff);
    return 0;
}