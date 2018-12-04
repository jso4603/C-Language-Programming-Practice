//
//  main.c
//  challenge 7.2-3
//
//  Created by 장상옥 on 2018. 12. 4..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include <stdio.h>

int prime_check(int n); //n이 소수면 1 반환, 소수가 아니면 0 반환

int main(void)
{
    int n, a, row=0;
    
    printf("#양수 입력 :");
    scanf("%d", &a);
    for(n=2;n<=a;n++)
    {
    prime_check(n); //2이상 a 이하의 모든 자연수 n을 prime_check 함수에 보내어 확인
        
        if (prime_check(n) == 1) //return값으로 1을 받았다면, 소수임으로 출력.
        {
            printf("%3d", n);
            row++; //5개의 양수가 출력 되는 것을 세기 위해 row를 1씩 증가.
            if(row%5==0) printf("\n"); //row가 5의 배수가 되면 한 칸 띄어쓰기.
        }
    }
}

int prime_check(int n)
{
    int i;
    
        for(i=2;i<n;i++){ //n보다 하나 작은 수까지 나누었을 때, 나누어 떨어지는 수가 있으면 0을 반환.
            if(n%i==0) return 0;
        }
    
    return 1; //if문을 빠져 나오면 1을 반환.
}
