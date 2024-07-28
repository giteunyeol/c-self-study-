// 1번 인덱스 정렬하기 위해서 추출, 0번과 비교. 1번 인덱스가 더 작다면 0번 인덱스와 스왑. 0번 인덱스 후는 없으니 정렬.
// 2번 인덱스 정렬하기 위해서 추출, 1번과 비교. 앞의 인덱스가 더 작을때까지 가다가 정지.
//  ex) 5 2 3 1 4.
//  2 5 3 1 4  ,  2 3 5 1 4 , 2 3 1 5 4 , 2 1 3 5 4 , 1 2 3 5 4 , 1 , 2, 3, 4, 5.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n; // 몇 개의 수를 받을 것인지
    scanf("%d", &n);
    int *number = malloc(sizeof(int) * n); // number에 크기 n만큼 동적 할당

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }

    // 삽입 정렬 알고리즘 구현
    for (int i = 1; i < n; i++)
    {
        int temp = number[i];
        int j = i - 1;

        // 앞의 인덱스가 더 작을 때까지 가다가 정지
        while (j >= 0 && number[j] > temp)
        {
            number[j + 1] = number[j];
            j--;
        }
        number[j + 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", number[i]);
    }

    free(number);

    return 0;
}
