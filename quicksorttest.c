#include <stdio.h>
#include <stdlib.h>


void quicksort(int * numbers, int left, int right)
{
    int pivot = numbers[(left + right) / 2];
    int pl = left;
    int pr = right;
    int temp;

    do
    {
        while (numbers[pl] < pivot)
        {
            pl++;
        }
        while (numbers[pr] > pivot)
        {
            pr--;
        }
        temp = numbers[pl];
        numbers[pl] = numbers[pr];
        numbers[pr] = temp;
        pl++;
        pr--;
    }while(pl < pr);

    if(left < pr)
    {
        quicksort(numbers, left, pr);
    }
    if(pl < right)
    {
        quicksort(numbers, pl, right);
    }

    for(int i = 0; i <= right; i++)
    {
        printf("%d\n", numbers[i]);
    }
    
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int * numbers = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        numbers[i] = temp;
    }

    quicksort(numbers, 0, n - 1);


    return 0;
}