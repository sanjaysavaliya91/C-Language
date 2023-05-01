// write a programe to print following pattern
// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000

#include <stdio.h>
void main()
{

    int num = 0, ans;

    printf("%d ", num);

    num = num + 1;
    ans = num;
    printf("%d ", ans);

    while (ans < 1000)
    {

        num = num + 1;
        ans = ans + num;
        printf("%d ", ans);
    }
}