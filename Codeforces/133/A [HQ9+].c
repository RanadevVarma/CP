#include<stdio.h>
#include<string.h>
int main(){
char h[100];
scanf("%s",&h);
for( int i = 0 ; i<strlen(h) ; i++)
    {
        if(h[i]=='H'||h[i]=='Q' || h[i]=='9' )
        {
            printf("YES");
            return 0 ;
        }
    }
    printf("NO");
}