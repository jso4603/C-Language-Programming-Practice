//
//  main.c
//  practice 4.1-2
//
//  Created by 장상옥 on 2018. 11. 19..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a , b , sum;
    double avg;
    
    printf("두 과목의 점수를 입력하십시오");
    scanf("%d%d", &a, &b); //점수 입력
    
    sum = a + b; // 두 점수를 더해 총점을 구한다.
    avg = sum / 2.0;
    //평균 계산, sum이 정수형이므로 나누는 값을 2.0과 같이 실수값으로 사용해야 한다.
    //그렇지 않으면 피연산자가 모두 정수값이므로 몫을 계산한다.
    printf("평균 : %.1lf\n" ,avg);
    
    return 0;
}
