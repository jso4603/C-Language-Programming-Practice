//
//  main.c
//  challenge 6.2-1
//
//  Created by 장상옥 on 2018. 11. 28..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int num ,ans = 19,cnt = 0;
    
    printf("숫자 입력(1부터 30까지) : ");
    scanf("%d", &num);
    
    while(1)
    {
        if(num==ans)
        {
            cnt++;
        printf("정답입니다!\n");
        printf("시도한 횟수는 %d회 입니다.\n", cnt);
            break;
        }
        else if(num>ans)
        {
            cnt++;
        printf("%d보다 작습니다!\n", num);
        printf("숫자 입력(1부터 30까지) : ");
        scanf("%d", &num);
    
        }
        else if(num<ans)
        {
            cnt++;
        printf("%d보다 큽니다!\n", num);
        printf("숫자 입력(1부터 30까지) : ");
        scanf("%d", &num);
        }
        
    }
    
}
