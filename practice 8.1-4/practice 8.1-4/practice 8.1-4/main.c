//
//  main.c
//  practice 8.1-4
//
//  Created by 장상옥 on 2018. 12. 4..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int A[3] = {1,2,3};
    int B[10];
    int i;
    
    for(i=0;i<10;i++) //B 배열을 채우므로 B 배열 요소의 수만큼 반복
    {
        B[i] = A[i%3]; //A 배열의 첨자가 0~2의 값을 갖도록 나머지 연산자 사용
        printf("%2d", B[i]); //B 배열 출력
    }
    printf("\n");
    return 0;
}
