//
//  main.c
//  practice 7.1-3
//
//  Created by 장상옥 on 2018. 11. 29..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

double centi_to_meter(int cm); //함수 선언

int main(void)
{
    int a;
    double res; // 함수의 반환값을 저장할 변수
    
    printf("키 입력(cm) : ");
    scanf("%d", &a);
    
    res = centi_to_meter(a); //함수 호출, 반환 값을 res에 저장
    printf("%.2lfm\n", res); //반환 된 res의 값 출력
    
    return 0;
}

double centi_to_meter(int cm) //함수 정의 시작
{
    double meter; //필요한 변수 선언
    meter = cm / 100.0; //매개변수 cm의 값을 m 단위로 환산
    
    return meter; //환산 된 값 반환
}

/* //내가 쓴 답
#include<stdio.h>

double centi_to_meter(double x, double y);

int main(void)
{
    double a, b = 0.0;
    printf("키 입력(cm) : ");
    scanf("%lf", &a);
    
    b = centi_to_meter(a,b);
    printf("%.2lfm\n", b);
    
    return 0;
    
    
}

double centi_to_meter(double x, double y)
{
    y = x / 100.00;
    
    return y;
}
*/
