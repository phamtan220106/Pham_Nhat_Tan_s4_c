#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session04_2\n");
    int x;
    scanf("%d",&x);
    if(x==0){printf("ko hop le");
    return 0;
    }
    if(x%2==0){
            printf("%d la so chan\n",x);
    }else{
            printf("%d la so le\n",x);
    }
    printf("Hello world!\n");
    return 0;
}
