//
//  main.c
//  8-4
//
//  Created by 장상옥 on 2018. 12. 4..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int score[5]; //다섯 과목의 성적을 입력할 int형 배열 선언
    int i; //반복 제어 변수
    int tot = 0; //총점을 누적할 변수
    double avg; //평균을 저장할 변수
    int cnt; //배열 요소 수를 저장할 변수
    
    cnt = sizeof(score) / sizeof(score[0]); //배열 요소 수 계산
    
    printf("성적을 입력하세요. : ");
    
    for(i=0;i<cnt;i++) //11행에서 계산한 cnt만큼 반복
    {
        scanf("%d", &score[i]);
    }
    
    for(i=0;i<cnt;i++) //11행에서 계산한 cnt만큼 반복
    {
        tot += score[i];
    }
    
    avg = tot/(double)cnt; //총합을 cnt로 나누어 평균 계산
    
    for(i=0;i<cnt;i++) //11행에서 계산한 cnt만큼 반복
    {
        printf("%5d", score[i]);
    }
    printf("\n");
    
    printf("평균 : %.1lf\n", avg);
    
    return 0;
}
