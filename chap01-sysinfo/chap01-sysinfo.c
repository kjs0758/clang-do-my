/*
* chap01-sysinfo
* 시스템 정보 확인
* -----------------------------
* sizeof(type) 내장함수(Built-in Function)
*/
#include <stdio.h>

int main()
{
    printf(">>> system information <<<\n");

    printf("sizeof(char)(%d)\n",   sizeof(char));
    printf("sizeof(short)(%d)\n",  sizeof(short));
    printf("sizeof(int)(%d)\n",    sizeof(int));
    printf("sizeof(long)(%d)\n",   sizeof(long));
    printf("sizeof(float)(%d)\n",  sizeof(float));
    printf("sizeof(double)(%d)\n", sizeof(double));

    printf("sizeof(char*)(%d)\n", sizeof(char*));
    printf("sizeof(short*)(%d)\n", sizeof(short*));
    printf("sizeof(int*)(%d)\n", sizeof(int*));
    printf("sizeof(long*)(%d)\n", sizeof(long*));
    printf("sizeof(float*)(%d)\n", sizeof(float*));
    printf("sizeof(double*)(%d)\n", sizeof(double*));

    printf("sizeof(void*)(%d)\n", sizeof(void*));
}
