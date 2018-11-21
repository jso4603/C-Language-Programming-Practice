//
//  main.c
//  challenge 4.2-1
//
//  Created by 장상옥 on 2018. 11. 21..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int weight;
    double height, bmi, res;
    
    printf("몸무게와 키를 입력하세요:");
    scanf("%d%.1lf", &weight, &height);
    
    bmi = (double)weight / ((height/100) * (height/100));
    
    res = (bmi>=20.0) && (bmi<25.0);
    
    printf("%s\n",(res==1) ?"표준 입니다." : "체중관리가 필요합니다.");
    
    return 0;
}
