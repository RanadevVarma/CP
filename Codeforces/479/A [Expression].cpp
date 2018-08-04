#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std ;
int main()
{
    int n ;
    int m ;
    int o ;
    scanf("%d %d %d",&n,&m,&o);
    int ans = max((n*m)+o , n+(m*o)) ;
    ans = max(ans,n*m*o) ;
    ans = max(ans,n+m+o) ;
    ans = max(ans,(n+m)*o) ;
    ans = max(ans,n*(m+o)) ;
    printf("%d",ans);
}