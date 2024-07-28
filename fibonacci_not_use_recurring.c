#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int n;
    printf("피보나치 수열을 몇번째까지 입력받으실 건가요? : ");
    scanf("%d", &n);
    int * number = malloc(sizeof(int) * n);

    number[0] = 1;
    number[1] = 1;
    for(int i = 2; i < n; i++)
    {
        number[i] = number[i - 1] + number[i - 2];
    }

    printf("입력하신 수의 피보나치 수열은 : ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", number[i]);
    }
    printf("입니다.");

    free(number);

    return 0;
}