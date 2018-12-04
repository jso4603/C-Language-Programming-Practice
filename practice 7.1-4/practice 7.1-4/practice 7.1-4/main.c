//
//  main.c
//  practice 7.1-4
//
//  Created by 장상옥 on 2018. 12. 3..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include <stdio.h>

int my_power(int x, int y); //함수 선언

int main(void)
{
    
    int a,b,res; //밑수, 지수, 반환값을 저장할 변수
    
    printf("밑수와 지수를 입력하시오");
    scanf("%d%d",&a,&b); //밑수와 지수 입력
    
    res = my_power(a,b); //밑수와 지수를 주고 함수 호출
    printf("밑수 %d의 %d 제곱은 %d 입니다.\n",a,b,res); //밑수 지수 반환 값 출력
    
}

int my_power(int x, int y) //밑수와 지수를 매개변수에 저장
{
    int i, res=1; //밑수를 곱하여 누적하기 위해 1로 초기화
    
    for(i=0;i<y;i++) //지수 만큼 반복
    {
        res *= x; //밑수를 res에 곱하여 누적한다.
    }
    
    return res; //누적 된 값을 반환한다.
}
