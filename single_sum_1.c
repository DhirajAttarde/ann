#include <stdio.h>
#include <conio.h>
int main()
{
    float x[2], w[2], b, th;
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the value for input%d \n", i + 1);
        scanf("%f", &x[i]);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the value for weight%d \n", i + 1);
        scanf("%f", &w[i]);
    }

    float activation_fn, ans[2];
    for (int i = 0; i < 2; i++)
    {
        ans[i] = x[i] * w[i];
    }
    float sum = 0; 
    for (int i = 0; i < 2; i++)
    {
        sum = sum + ans[i];
    }
    printf("The value of sum is %f\n",sum);
   
    return 0;
}