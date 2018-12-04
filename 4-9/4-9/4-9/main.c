//
//  main.c
//  4-9
//
//  Created by 장상옥 on 2018. 11. 20..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a = 10;
    double b = 3.4;
    //예제 대로 작성 했더니, %d를 %lu값으로 변환해야 한다고 경고문이 뜬다.
    printf("int형 변수의 크기 %lu\n", sizeof(a));
    printf("double형 변수의 크기 %d\n", sizeof(b));
    printf("int형 변수의 크기 %d\n", sizeof(10));
    printf("int형 변수의 크기 %d\n", sizeof(1.5 + 3.4));
    printf("int형 변수의 크기 %d\n", sizeof(char));
    
    return 0;
    
    
}
