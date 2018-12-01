//
//  main.c
//  challenge 6.2-2
//
//  Created by 장상옥 on 2018. 11. 28..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int i,j,num,x = 0;
    
    printf("2 이상의 정수를 입력하세요 : ");
    scanf("%d", &num);
    
    for(i=2;i<=num;i++){
        for(j=2;j<i;j++){
            
            while(i>j)
            {
                if(i%j != 0)
                {
                    printf("%d", i);
                    break;
            }
            }
        }
    }
    
}
