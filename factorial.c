#include <stdio.h>

int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int result = factorial(n);

    printf("%d", result);
    return 0;
}