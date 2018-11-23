//
//  main.c
//  practice 5.2-4
//
//  Created by 장상옥 on 2018. 11. 22..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a=0, b=0;
    
    switch(a) //a 검사
    {
        case 3: //a가 3이면
            b=1; //b에 1을 대입하고
            break; //블록을 벗어난다.
            
        case 5: //a가 5이면
            b=2; //b에 2를 대입하고
            break; //블록을 벗어난다.
            
        case 7: //a가 7이면
            b=3; //b에 3을 대입하고
            break; //블록을 벗어난다.
            
        default: //a가 3,5,7이 아니면
            b=0; //b에 0을 대입하고
            break; //블록을 벗어난다.
            
    }
    
    printf("%d, %d\n", a, b);
    
    return 0;
}
