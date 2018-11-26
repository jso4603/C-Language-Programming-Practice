//
//  main.c
//  practice 6.1-4
//
//  Created by 장상옥 on 2018. 11. 23..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a = 1; //반복 횟수를 세기 위한 변수
    int sum = 0; //1부터 100까지 값을 더할 변수, 반드시 0으로 초기화
    
    while(a<=100) //1부터 100까지 하나씩 증가하면서 100번 반복
    {
        
        sum += a; //a의 값을 sum에 더한다, sum = sum + a 와 같음
        a++;
    }
    
    printf("%d\n", sum); //반복문이 끝난 후에 더한 값을 출력
    
    return 0;
}
