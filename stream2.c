#include <stdio.h>

int main(void)
{
    char ch;
    FILE * fp;
    //r: 읽기모드 : 파일이 존재하지 않는경우 오류
    //w: 기록모드 : 파일이 존재하지 않는경우 파일을 생성해서 기록 (파일 오픈 시 파일에 있던 데이터는 모두 삭제 후 새로 기록)
    //a: 추가모드 : 기존 내용을 삭제하지 않고 이어서 기록

    fp = fopen("pigs.txt", "r");
    if(fp == NULL)
    {
        printf("file open fail\n");
        return 0;
    }
    //fgetc(FILE*) : 파일에서 한글자를 읽어오는 함수
    while(1)
    {
        ch = fgetc(fp); //한글자 읽어와서 저장
        printf("%c", ch); //출력
        
        if(ch == EOF) //EOF(End Of File) //파일의 끝
        {
            break;
        }
    }
    
    fclose(fp);

    return 0;
}