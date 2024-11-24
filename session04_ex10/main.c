#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session04_10\n");
    int A[3],hoandoi;
    for(int i=0; i<=2; i++){
        scanf("%d",&A[i]);
    }
    for(int i=0; i<=2; i++){
        for(int j=i+1;j<=2;j++){
            if (A[i]>A[j]){
                hoandoi=A[i];
                A[i]=A[j];
                A[j]=hoandoi;
            }
        }
    }
    printf("tu nho den lon\n");
    for(int i=0;i<=2;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    printf("tu lon den nho\n");
    for(int i=2;i>=0;i--){
        printf("%d ",A[i]);
    }
    printf("\n");
    printf("Hello world!\n");
    return 0;
}
