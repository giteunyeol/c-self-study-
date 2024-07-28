#include <stdio.h>

double fibonacci(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }
    return fibonacci(n-2) + fibonacci(n-1);
 
}

int main(void)
{
    int n;
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}