//
//  main.c
//  9-6
//
//  Created by 장상옥 on 2018. 12. 6..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a = 10; //변수 선언과 초기화
    int *p = &a; //포인터 선언과 동시에 a를 가리키도록 초기화
    double *pd; //double형 변수를 가리키는 포인터
    
    pd = (double*)p; //포인터 p값을 포인터 pd에 대입
    printf("%lf\n", *pd); //pd가 가리키는 변수의 값 출력
    
    return 0;
}
