#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session04_8\n");
    float A[3];
    for(int i=0; i<=2; i++){
        scanf("%f",&A[i]);
    }
    if(A[0]+A[1]>A[2] && A[0]+A[2]>A[1] && A[1]+A[2]>A[0]){
        printf("la ba canh cua tam giac\n");
    }else{
        printf("ko the tao thanh tam giac\n");
    }
    printf("Hello world!\n");
    return 0;
}
