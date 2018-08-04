#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std ;

struct ip
{
	char name[15];
	int a,b,c,d ;
};
int main()
{
    int n , m ;
    scanf("%d %d",&n,&m);
    struct ip ip[n] ;
    char temp ;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%s",ip[i].name) ;
        scanf("%d",&ip[i].a) ;
        scanf("%c",&temp);
        scanf("%d",&ip[i].b) ;
        scanf("%c",&temp);
        scanf("%d",&ip[i].c) ;
        scanf("%c",&temp);
        scanf("%d",&ip[i].d) ;
    }
    char inp[15] ;
    int e , f , g ,h ;
    char demp ;
    for(int i = 0 ; i < m ; i++)
    {
        scanf("%s",inp) ;
        scanf("%d",&e) ;
        scanf("%c",&demp);
        scanf("%d",&f) ;
        scanf("%c",&demp);
        scanf("%d",&g) ;
        scanf("%c",&demp);
        scanf("%d",&h) ;
        scanf("%c",&demp);
        for(int j = 0 ; j < n ; j++)
        {
        	if(ip[j].a==e && ip[j].b==f && ip[j].c==g && ip[j].d==h)
        	{
        		printf("%s %d.%d.%d.%d; #%s",inp,e,f,g,h,ip[j].name);
        	}
        }
        printf("\n");
    }
}