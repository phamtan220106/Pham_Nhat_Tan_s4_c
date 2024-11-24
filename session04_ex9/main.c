#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session04_ex9\n");
    int day,month,year,namnhuan;
    scanf("%d %d %d",&day,&month,&year);
    if(year%100!=0 && year%4==0 || year%400==0){
        namnhuan=0;
    }else {
        namnhuan=1;
    }//kiemtranamnhuan
    if(year<=2024 && month <=12 && day <=31){
        if (month==2){
            if(namnhuan==0 && day <=29){
                printf("nam sinh hop le\n");
            }else if(namnhuan==1 && day<=28){
                printf("nam sinh hop le\n");
            }else{
                printf("nam sinh ko hop le\n");
            }
        }else if(month==4 || month==6 || month==9 || month==11) {
            if(day<=30){
                printf("nam sinh hop le\n");
            }else{
                printf("nam sinh khong hop le\n");
            }
        }else if(1<=month && month<=12){
            if(day <=31){
                printf("nam sinh hop le\n");
            }else{
                printf("nam sinh khong hop le\n");
            }
    }
    }
    printf("Hello world!\n");
    return 0;
}
