// 버블정렬
// n개의 배열이 있을때, 0,1 비교해서 큰 수를 1번으로. 1, 2비교해서 큰수를 2번으로 .... n-1번까지한 후 n-1번에 숫자 확정.
//  0,1 비교 . 1,2 비교 . ... n -2 번 숫자 확정 .... 0번째까지 확정

//if 0, 1, 2, 3, 4, 5 번까지의 배열이
// 1,5,2 3,4로 있을때

//처음에 배열의 크기를 입력하고 차례대로 숫자를 입력하면 정렬하는 프로그램

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, temp; 
    scanf("%d", &n);

    int * p = (int*)malloc(sizeof(int) *n); // 포인터 p가 n의 갯수만큼 할당된 힙공간을 가리킴

    for(int i = 0; i < n; i++)
    {
        int number;
        scanf("%d", &number);
        p[i] = number;
    }

    // ----------p[i]에 number할당 ---------

    // 정렬

    for(int i = 0; i < n - 1 ; i++) // n - 1번
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(p[j] > p[j+1]) // 왼쪽이 큰 상황에서 스왑을 해줘야함
            {
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    } 

    for(int i = 0; i < n; i++)
    {
        printf("%d", p[i]);
    }   


    free(p);
    return 0;
}