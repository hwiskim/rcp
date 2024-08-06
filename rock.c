#include <stdio.h>
#include <stdlib.h> //srand, rand를 사용하기 위한 헤더파일
#include <time.h>   // time을 사용하기 위한 헤더파일

char *isRCP(int random)
{
    if (random == 1)
    {
        return ("주먹");
    }
    else if (random == 2)
    {
        return ("가위");
    }
    else
    {
        return ("보");
    }
}

void decideGame(int uChose, int random)
{
    if (uChose == random)
    {
        puts("비겼습니다!");
    }
    else if (((uChose - 1) == random) || ((uChose + 2) == random))
    {
        puts("당신이 졌습니다!");
    }
    else
        puts("당신이 이겼습니다!");
}

int main(void)
{

    srand(time(NULL)); // 난수 초기화
    int uChose;
    printf("무엇을 낼지 고르시오!(숫자로 입력) \n 1. 주먹 2. 가위 3. 보자기\n");
    scanf("%d", &uChose);
    int random = rand() % 3 + 1;

    printf("니가 낸 것은 : %s\n", isRCP(uChose));
    printf("상대가 낸 것은 : %s\n", isRCP(random));

    decideGame(uChose, random);
    return 0;
}
