//선택정렬
//0번 인덱스와 1~size인덱스의 수 비교, 최저값과 0번 인덱스 스왑, 0번 인덱스 세팅.
//1번 인덱스와 2~size인덱스의 수 비교, 최저값과 1번 인덱스 스왑, 1번 인덱스 세팅...

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int min, size;
    printf("몇개의 배열을 입력받겠습니까? : ");
    scanf("%d", &size);
    printf("정렬할 숫자들을 입력해주세요 : ");
    int * number = malloc(sizeof(int) * size);

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &number[i]);
    }

    for(int i = 0; i < size-1; i++)
    {
        min = i;
        int temp;
        for(int j = i + 1; j < size; j++)
        {
            if(number[min] > number[j])
            {
                min = j;
            }
        }

        temp = number[min];
        number[min] = number[i];
        number[i] = temp;
    }

    for(int i = 0; i < size; i++)
    {
        printf("%d ", number[i]);
    }

    free(number);

    return 0; 
}