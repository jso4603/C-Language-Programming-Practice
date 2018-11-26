//
//  main.c
//  practice 6.1-1
//
//  Created by 장상옥 on 2018. 11. 23..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h> //2번 문제

int main(void)
{
    int i=0; //일단 반복문 시작 전제 i를 0으로 초기화
    
    while(i<5) //i가 5보다 작은 동안 반복
    {
        printf("Behappy\n"); //실행문
        i++; //여기서 i값을 하나 증가시킨다.
    }
    
    /*
    for(i=0;i<5;i++) //변수 i를 하나씩 증가시키면서 5보다 작은 동안 반복
    {
        printf("Behappy\n"); //실행문
    }
     */
    
    return 0;
}

/* 1번 문제
#include<stdio.h>

int main(void)
{
    int a;
    
    do { //중괄호를 do 옆에 붙이면 한 줄을 줄일 수 있다.
        printf("숫자 입력");
        scanf("%d", &a); //키보드로 a에 정수 입력
    }while(a<0); //입력된 값이 음수면 입력을 반복
    
    printf("%d\n", a);
}
*/
