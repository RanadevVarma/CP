#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std ;
int main()
{
    char a[101] ;
    char b[101] ;
    scanf("%s",a);
    scanf("%s",b);
    int l1 = strlen(a);
    int l2 = strlen(b);
    l2--;
    int i = 0 ; int j = l2 ;
    while(i!=l1 && j!=-1)
    {
        if(a[i]!=b[j])
        {
            printf("NO");
            return 0 ;
        }
        i++;j--;
    }
    printf("YES");
}