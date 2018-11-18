//
//  main.c
//  practice 3.1 - 4
//
//  Created by 장상옥 on 2018. 11. 15..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    double avg; //평균을 저장할 double형 변수
    char grade; //학점을 저장할 char형 변수
    
    avg = 84.5; //평균 대입
    grade = 'B'; //학점 대입
    
    printf("평균 : %.1lf \n", avg); //평균 출력
    printf("학점 : %c \n", grade); // 학점 출력
    
    return 0;
}
