//
//  main.c
//  practice 4.1-1
//
//  Created by 장상옥 on 2018. 11. 19..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    double a = 4.0, b = 1.2, res;
    
    res = a + b;
    printf("%.1lf + %.1lf = %.1lf\n", a, b, res);
    
    res = a - b;
    printf("%.1lf - %.1lf = %.1lf\n", a, b, res);
    
    res = a * b;
    printf("%.1lf - %.1lf = %.1lf\n", a, b, res);
    
    res = a / b;
    printf("%.1lf - %.1lf = %.1lf\n", a, b, res);
    //double형이므로 소수점 까지 계산한다.
    //소수점 이하 첫째 짜리까지 출력해야 하므로 % 다음에.1을 사용한다.
    
    return 0;
    
}
