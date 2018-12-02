//
//  main.c
//  challenge 6.2-2
//
//  Created by 장상옥 on 2018. 11. 28..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int i,j,num;
    int row = 0;
    
    printf("2이상의 정수를 입력해주세요 :");
    scanf("%d", &num);
    
    for(i=1;i<=num;i++){
        for(j=2;j<=i-1;j++)
        {
            if(i%j == 0)
                    break;
            
            if(j == i-1)
            {
                row++;
                row % 5 == 0 ? printf("%d\n", i) : printf("%d ", i);
            }
           
        }
    }
    printf("\n");
    return 0;
    
}
