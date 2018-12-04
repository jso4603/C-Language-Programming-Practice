//
//  main.c
//  challenge 7.2-2
//
//  Created by 장상옥 on 2018. 12. 3..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include <stdio.h>

int rec_func(int n); //1부터 n가지의 합을 반환하는 함수

int main(void)
{
    int n;
    
    printf("숫자를 입력하세요 :");
    scanf("%d", &n);
    printf("총합 : %d\n", rec_func(n));
    
    return 0;
}

int rec_func(int n)
{
    if(n==1)
        return 1;
    else
        return n+rec_func(n-1);
}
