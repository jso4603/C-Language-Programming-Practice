//
//  main.c
//  practice 6.1-5
//
//  Created by 장상옥 on 2018. 11. 23..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a; //양수를 입력할 변수
    int sum=0; //입력한 양수를 누적할 변수, 반드시 0으로 초기화
    
    printf("양수 입력 :");
    scanf("%d",&a); //양수 입력
    
    while(a>0){ //입력한 값이 0보다 크면 반복
        sum += a; //입력한 값을 sum에 누적
        printf("양수 입력 :");
        scanf("%d",&a); //다시 입력을 반복한다.
    }
    
    printf("누적된 값 : %d\n", sum); //반복이 끝난 후에 누적된 값 출력
    
    return 0;
}
