#include<stdio.h>
#include <math.h>
int main(void){
    int temp;
    int row,col;
    for(int i=0;i<5;++i)
        for(int j=0;j<5;++j){
            scanf("%d",&temp);
            if(temp==1){
                row=i;
                col=j;
                break;
            }
        }
    printf("%d",abs(row-2)+abs(col-2));
}
 