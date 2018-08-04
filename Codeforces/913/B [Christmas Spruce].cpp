#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int n ;
    scanf("%d",&n);
    int parent[n+1];
    for(int i=2 ; i<=n ; i++)
    {
        scanf("%d",&parent[i]);
    }
    int numparented[n+1] ;
    for(int i = 0 ; i < n+1 ; i++)
    {
        numparented[i] = 0;    
    }
    for(int i = 2 ; i <= n ; i++)
    {
       numparented[parent[i]]++;
    }
    for(int i = 1 ; i<=n ; i++)
    {
        if(numparented[i]!=0 && numparented[i]<3)
        {
            printf("No");
            return 0 ;
        }
        else if(numparented[i]>=3)
        {
            int temp = 0;
            for(int j = 2 ; j<= n ; j++)
            {
                if(parent[j]==i && numparented[j]==0)
                {
                    temp++;
                }
            }
            if(temp<3)
            {
                printf("No");
                return 0;
            }
        }
    }
    printf("Yes");
}