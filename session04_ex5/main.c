#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session04_ex5\n");
    int A[3];
    for(int i=0; i<=2; i++)
    {
        scanf("%d",&A[i]);
    }
    if(A[2]<=A[1] && A[2]>=A[0]){
        printf("%d nam trong khoang %d den %d\n",A[2],A[0],A[1]);
    }else{
        printf("%d khong nam trong khoang %d den %d\n ",A[2],A[0],A[1]);
    }
    printf("Hello world!\n");
    return 0;
}
