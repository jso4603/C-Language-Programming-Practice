//
//  main.c
//  3-6
//
//  Created by 장상옥 on 2018. 11. 15..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    float ft = 1.234567890123456789; //유효숫자가 많은 값으로 초기화
    double db = 1.234567890123456789;
    
    printf("float형 변수의 값 : %.20f\n", ft); //소수점 이하 20자리까지 출력
    printf("double형 변수의 값 : %.20lf\n", db);
    
    return 0;
}
