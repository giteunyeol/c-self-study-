#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int *arr;     // 동적할당
    int front;    // 삭제위치
    int rear;     // 삽입위치
    int count;    // 저장된 원소의 개수
    int capacity; // 배열의 최대 용량
} queue;

void queueinit(queue * pque, int size) // circular queue 초기 설정
{
    pque->arr = (int*)malloc(sizeof(int)*size);
    pque->front = 0;
    pque->rear = 0;
    pque->count =0;
    pque->capacity = size;
}
void enqueue(queue * pque, int data)
{
    if(pque -> count == pque->capacity) // 저장공간이 꽉찬 상태
    {
        printf("\nqueue overflow\n");
        return;
    }
    pque->arr[pque->rear] = data;
    pque->rear++; // 저장위치++
    pque->count++; // 저장갯수 증가

    if(pque->rear == pque->capacity) //index가 범위를 넘어버림
    {
        pque->rear = 0;
    }
}
int dequeue(queue * pque)
{
    int delvalue;
    if(pque->count == 0) // underflow
    {
        return -999999999;
    }

    delvalue = pque->arr[pque->front]; //삭제된 값
    pque->front++; //삭제위치 ++
    pque->count--; //저장 갯수 감소

    if(pque->front == pque -> capacity)
    {
        pque->front = 0;
    }

    return delvalue; //삭제된 값
}
void print(const queue * pque)
{
    int i;
    printf("\n\n queue display(FIFO) : ");
    if(pque->count == 0)
    {
        printf("\n\n 큐가 비어있는 상태입니다\n\n");
        return;
    }
    for(int i = pque -> front; i < pque->front + pque->count; i++)
    {
        printf("%d", pque->arr[i % pque->capacity] );
    }
    
}
void queueclear(queue * pque)
{
    pque->count = 0;
    pque->front = 0;
    pque->rear = 0;
}

int main(void)
{
    int choice, data;
    queue que;
    queueinit(&que, 5);

    while (1)
    {
        printf("1. euqueue    2.dequeue     3.print      4.clear      0.terminate\n\n\n");
        printf("choice : ");
        scanf("%d", &choice);
        while (getchar == '\n')
            

        switch (choice)
        {
        case 1:
        printf("\n integer input: ");
        scanf("%d", &data);
        while(getchar != '\n');
        enqueue(&que, data);
            break;

        case 2:
        data = dequeue(&que); //삭제 후 삭제된 값 리턴

        if(data == -999999999)
        {
            printf("\n\n queue underflow\n");
        }
        else
        {
            printf("\n\n %d deque\n", data);
        }
        printf("\n\n %d dequeue\n", data);
            break;

        case 3:
        printf(&que);

            break;
        case 4:
        queueclear(&que);
            break;
        case 0:
        free(que.arr);
        exit(0);

            break;
        }
    }
    return 0;
}