#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session04_3\n");
    int x,dem=0;
    scanf("%d",&x);
    if(x%3==0){
        printf("%d chia het cho 3\n");
    }else{
        printf("%d chia khong het cho 3\n");
    }
    if(x%5==0){
        printf("%d chia het cho 5\n");
    }else{
        printf("%d chia khong het cho 5\n");
    }
    printf("Hello world!\n");
    return 0;
}
