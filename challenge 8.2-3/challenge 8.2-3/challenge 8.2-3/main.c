//
//  main.c
//  challenge 8.2-3
//
//  Created by 장상옥 on 2018. 12. 5..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int num[6]; //로또 번호 6개를 저장할 배열 선언
    int i,j;
    
    for(i=0;i<6;i++){ //로또 번호를 6번 입력하도록 반복
        printf("로또번호 입력 : ");
        scanf("%d", &num[i]);
        for(j=0;j<i;j++){ //num[i]배열의 이전 배열 까지 값 비교
            if(num[i]==num[j]) //중복된 값이 있으면 i값을 하나 낮추어 다시 입력
            {
                printf("같은 번호가 있습니다!\n");
                i--;
                
            }
        }
    }
    
    printf("입력 된 로또 번호 :");
    
    for(i=0;i<6;i++)
    {
        printf(" %3d", num[i]);
    }
    printf("\n");
}
