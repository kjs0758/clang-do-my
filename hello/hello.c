/*
C표준 라이브러리와 표준 출력 함수
*/

#include <stdio.h>

#define TITLE "C표준 라이브러리와 표준 출력 함수"

void putcharTest1();
void putcharTest2();

void main()
{
    printf("%s\n", TITLE);
    putcharTest1();
    putcharTest2();

}

void putcharTest1()
{
    printf("putchar() 출력함수\n");
    //putchar(TITLE); 스트링을 출력할 수 없음
    putchar('a');
    putchar('\n');
    putchar('b');
    putchar('\n');
    putchar('1');
    putchar('\n');
    putchar(65);
    putchar('\n');
    putchar('A');

}

void putcharTest2()
{
    printf("putchar() 출력함수 오류 테스트\n");
    char rt = putchar(TITLE); // 스트링을 출력할 수 없음

    putchar('\n');

    char ra = putchar('a');

    printf("rt(%c), ra(%c)\n", rt, ra);

}
