// Write a programe to print
// 1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 .. 1000
// 5, 9, 13, 17, 21, 25, 29, 33,  37,  41,  45...
#include <stdio.h>
void main()
{

    int count = 1, fix = 4, temp, ans;
    //printf("%d ", count);

    temp = fix + count; // 5
    ans = temp + count; // 6
    for(ans=1;ans<=1000;temp = temp + fix)
    {
        printf("%d,  ", ans);
        
        ans = ans + temp;
    
    }

    /*printf("%d ", ans);
    temp = temp + fix; // 13
    ans = ans + temp;  // 28
    temp = temp + fix;
    ans = ans + temp;
    printf("%d ", ans);
    temp = temp + fix;
    ans = ans + temp;
    printf("%d ", ans);
    temp = temp + fix;
    ans = ans + temp;
    printf("%d ", ans);
    temp = temp + fix;
    ans = ans + temp;
    printf("%d ", ans);
    temp = temp + fix;
    ans = ans + temp;
    printf("%d ", ans);
    temp = temp + fix;
    ans = ans + temp;
    printf("%d ", ans);
    temp = temp + fix;
    ans = ans + temp;
    printf("%d ", ans);
    */
}
