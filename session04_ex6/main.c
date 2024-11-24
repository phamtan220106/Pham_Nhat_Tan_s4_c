#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session04_ex6\n");
    int A[2],tongsodien,tiendien;
    for(int i=0; i<=1; i++){
        scanf("%d",&A[i]);
    }
    tongsodien=A[1]-A[0];
    if(tongsodien>=0 && tongsodien<50){
        tiendien=tongsodien*10000;
    }else if(tongsodien>=50 && tongsodien<100){
        tiendien=tongsodien*15000;
    }else if(tongsodien>=100 && tongsodien<150){
        tiendien=tongsodien*20000;
    }else if(tongsodien>=150 && tongsodien<200){
        tiendien=tongsodien*25000;
    }else if(tongsodien>=200){
        tiendien=tongsodien*30000;
    }else{tiendien=0;}
    printf("tien dien thang nay la %d vnd\n",tiendien);
    printf("Hello world!\n");
    return 0;
}
