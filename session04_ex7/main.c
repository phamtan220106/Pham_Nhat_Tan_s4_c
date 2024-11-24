#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session04_ex7\n");
    int year;
    scanf("%d",&year);
    if(year%100!=0 && year%4==0 || year%400==0){
        printf("nam %d la nam nhuan\n",year);
    }else {
        printf("nam %d ko phai la nam nhuan\n",year);
    }
    printf("Hello world!\n");
    return 0;
}
