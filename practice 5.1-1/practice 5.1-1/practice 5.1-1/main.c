//
//  main.c
//  practice 5.1-1
//
//  Created by 장상옥 on 2018. 11. 22..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h> //a가 짝수면 2로 바꾸고 홀수면 1로 바꾸는 코드

int main(void)
{
    int a = 3;
    
    if (a%2==0) //a를 2로 나눈 나머지가 0이면
    {
        a = 2; //a에 2를 대입
    }
    
    else //a를 2로 나눈 나머지가 0이 아니면
    {
        a = 1; //a에 1을 대입
    }
    
    printf("%d\n", a);
    
    return 0;
}

/* //1번문제(a의 값이 음수일 때 양수로 바꾸는 코드)
#include<stdio.h>

int main(void)
{
    int a = 2;
    
    if (a<0) //a가 0보다 작으면
    {
        a = -a; //a의 부호를 바꿔 a에 대입
    }
    
    printf("%d\n", a);
    
    return 0;
}
*/
