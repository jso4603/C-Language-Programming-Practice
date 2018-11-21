//
//  main.c
//  practice 4.2-1
//
//  Created by 장상옥 on 2018. 11. 20..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    double a = 3.7;
    
    printf(" 3.7의 소수점 버리기 = %d\n", (int)a); //실수값 3.7을 int형으로 형변환하면 정수부분만 남는다.
    printf(" 3.7을 반올림 하기 = %d\n", (int)(a+0.5)); //0.5를 더하므로 소수 부분이 0.5 이상이면 반올림된다.
    
    return 0;
}
