//
//  main.c
//  6-1
//
//  Created by 장상옥 on 2018. 11. 23..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a = 1; //변수를 선언하고 곱셈을 하기 위해 1로 초기화
    
    while(a<10) //a가 10보다 작으므로 조건식은 참
    {
        a = a * 2; //a에 2를 곱해 다시 저장
    }
    
    printf("a : %d\n",a); //a값 출력
    
    return 0;
}
