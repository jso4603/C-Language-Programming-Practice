//
//  main.c
//  practice 6.2-2
//
//  Created by 장상옥 on 2018. 11. 23..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int i,j;
    
    for(i=0;i<3;i++){ //한줄에 $를 5번 출력하는 것을 3번 반복
        for(j=0;j<5;j++){ //j는 0부터 4까지 5번 반복
            
            printf("$"); //$출력
            
        }
        printf("\n"); //$를 5번 출력한 후에 줄을 바꾼다.
    }
    return 0;
}
