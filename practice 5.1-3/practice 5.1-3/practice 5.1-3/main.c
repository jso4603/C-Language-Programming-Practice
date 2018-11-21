//
//  main.c
//  practice 5.1-3
//
//  Created by 장상옥 on 2018. 11. 22..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    double height = 179.5; //키를 저장할 변수 선언과 초기화
    double weight = 75.0; //몸무게를 저장할 변수 선언과 초기화
    
    if((height>=187.5) && (weight<80.0)) //키가 187.5 이상이고 몸무게가 80미만이면 okay 출력
    {
        printf("okay\n");
    }
    else //그 이외의 경우 cancel 풀력
    {
        printf("cancel\n");
    }
    
    return 0;
}
