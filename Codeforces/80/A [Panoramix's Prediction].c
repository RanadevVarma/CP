#include <stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=n+1;i<=m;++i){
        int cnt=0;
        for(int j=1;j<=i;++j)
            if(i%j==0)
                ++cnt;
        if(cnt==2 && i==m){
            printf("YES");
            return 0;
        }
        else if(cnt==2){
            printf("NO");
            return 0;
        }
    }
    printf("NO");
    return 0;
}