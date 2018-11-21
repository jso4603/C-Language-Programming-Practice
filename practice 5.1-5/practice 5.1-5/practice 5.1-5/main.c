//
//  main.c
//  practice 5.1-5
//
//  Created by 장상옥 on 2018. 11. 22..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int total = 259; //총점 초기화
    double avg = total / 3.0; //평균을 저장할 변수 선언 및 평균 계산
    char score; //학점을 저장할 변수
    
    if(avg>=90) //평균이 90점 이상이면 A 학점
    {
        score = 'A';
    }
    
    else if (avg>=80) //평균이 90점 미만 80점 이상이면 B 학점
    {
        score = 'B';
    }
    
    else if (avg>=70) //평균이 80점 미만 70점 이상이면 C학점
    {
        score = 'C';
    }
    
    else //그 외는 F 학점
    {
        score = 'F';
    }
    
    printf("평균 : %.1lf, 학점 : %c\n", avg, score); //구한 평균과 학점 출력
    
    return 0;
}
