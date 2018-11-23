//
//  main.c
//  practice 5.2-3
//
//  Created by 장상옥 on 2018. 11. 22..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int a = 5, b = 1, res;
    
    if(a>=10)
    {
        res = a;
    }
    
    else
    {
        if(b!=0)
        {
            res = a/b;
        }
    }
    
    printf("%d, %d, %d\n", a, b, res);
    
    return 0;
}
