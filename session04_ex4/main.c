#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session04_ex4\n");
    int month;
    scanf("%d",&month);
    if (month==2){
            printf("thang %d có 28 ngay , 29 ngay vao nam nhuan\n",month);
    }else if(month==4 || month==6 || month==9 || month==11) {
            printf("thang %d co 30 ngay\n",month);
    }else if(1<=month && month<=12){
        printf("thang %d co 31 ngay\n",month);
    }else {
        printf("ko hop le\n");
    }
    printf("Hello world!\n");
    return 0;
}
