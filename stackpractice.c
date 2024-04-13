#include <stdio.h>
#include <stdlib.h>

#define max_size 100
typedef struct str
{
    int value[max_size];
    int top;
}str;

void stacksetting(str * p)
{
    p-> top = -1;
}

void push (str * p)
{
    printf("push할 숫자를 입력하세요\n");
    int n;
    scanf("%d", &n);
    p->value[++p->top] = n;
}

void pop (str * p)
{
    p->top--;
}

void display(str * p)
{
    if(p->top == -1)
    {
        printf("스택이 비어있습니다\n");
        return;
    }
    for(int i = p->top; i >= 0; i--)
    {
        printf("%d\n", p->value[i]);
    }
}

int main(void)
{
    str * p;
    p = (str*)malloc(sizeof(str*));
    stacksetting(p);


    while(1)
    {
        printf("숫자를 입력하세요.\n");
        printf("숫자 1: push     숫자 2: pop   숫자 3 : display     숫자 4 : exit\n");
        printf("입력 숫자: ");
        int n;
        scanf("%d", &n);

        switch(n)
        {
            case 1 :
            {
                push(p);
                break;
            }
            case 2 :
            {
                pop(p);
                break;
            }
            case 3 :
            {
                display(p);
                break;
            }
            case 4 :
            {
                free(p);
                printf("프로그램을 종료합니다.");
                exit(0);
            }
            default :
            {
                printf("입력이 잘못됐습니다. 다른 수를 입력해 주세요.\n");
                break;
            }
        }
    }

    return 0;
}