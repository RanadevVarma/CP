#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
int main() 
{
    int n ;
    int temp;
    scanf("%d",&n);
    int in[n];
    int check[n];
    for(int i = 0 ;  i < n ; i++)
    {
        scanf("%d",&in[i]);
        check[i]=in[i];
    }
    sort(in,in+n);
    for(int i = 0 ; i < n-2 ; i++)
    {
        for(int j = i+1 ; j < n-1 ; j++)
        {
            for(int k = j+1 ; k<n ; k++)
            {
                if(in[i]+in[j]==in[k])
                {
                    int c = in[k];
                    int b = in[j];
                    int a = in[i];
                    for(int l = 0 ; l < n ; l++)
                    {
                        if(check[l]==c)
                        {
                            temp = l;
                            printf("%d ",l+1);
                            break;
                        }
                    }
                    for(int l = 0 ; l < n ; l++)
                    {
                        if(check[l]==b && l!=temp)
                        {
                            temp = l;
                            printf("%d ",l+1);
                            break;
                        }
                    }
                    for(int l = 0 ; l < n ; l++)
                    {
                        if(check[l]==a && temp!=l)
                        {
                            printf("%d ",l+1);
                            break;
                        }
                    }
                    return 0;
                }
            }
        }
    }
    printf("-1");
}