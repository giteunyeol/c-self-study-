#include <stdio.h>

int main(void)
{
    FILE * filepointer; //8byte
    //r: 읽기모드 
    //w: 기록모드 : 파일이 존재하지 않는경우 파일을 생성해서 기록 (파일 오픈 시 파일에 있던 데이터는 모두 삭제 후 새로 기록)
    //a: 추가모드 : 기존 내용을 삭제하지 않고 이어서 기록
    // filepointer = fopen("파일명", "모드");
    filepointer = fopen("out.txt", "w");

    if(filepointer == NULL)
    {
        printf("file open fail\n");
        return 0;
    }

    //fprintf
    fprintf(filepointer, "%s", "Hello World\n");
    fprintf(filepointer, "%s", "문자열을 출력합니다.\n");


    //file에서 작업이 끝나서 스트림을 닫고싶을때
    //fclose(FILE포인터)
    fclose(filepointer);

    return 0;
}