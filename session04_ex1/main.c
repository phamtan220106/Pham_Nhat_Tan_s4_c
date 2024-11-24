#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session04_ex1\n");
    int a;
    scanf("%d",&a);
    if(a<0){
        printf("%d la so am\n",a);
    }else if(a>0){
        printf("%d la so duong\n",a);
    }else{
        printf("%d ko hop le\n",a);
    }
    printf("Hello world!\n");
    return 0;
}
