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
    int num;
    int row = 0;
    
    printf("2이상의 정수를 입력해주세요 :");
    scanf("%d", &num);
    
    for (int i = 2; i <= num; i ++) {
        int sosu = 1;
        for(int j = 2; j < i; j++) {
            
            if (i % j == 0) {
                sosu = 0;
            }
        }
        
        if (sosu) {
            if (row % 5 == 0) {
                printf("\n");
            }
            printf("%3d", i);
            
            row++;
        }
    }
    
    return 0;
    
}
