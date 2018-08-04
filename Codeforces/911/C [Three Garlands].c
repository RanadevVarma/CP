//KRV Template
#include<stdio.h>
#include<string.h>
#include<math.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
//BTW l,r are indices
void bubblesort(int arr[] , int l , int r)
{
    int i,j,temp=0;
    for(int i = l ; i<=r ; i++)
    {
    	for(int j = l ; j<r-temp ; j++)
    	{
    		if(arr[j]>arr[j+1])
    		{
    			swap(&arr[j],&arr[j+1]);
    		}
    	}
    	temp++;
    }
}
void rbubblesort(int arr[] , int l , int r)
{
    int i,j,temp=0;
    for(int i = l ; i<=r ; i++)
    {
    	for(int j = l ; j<r-temp ; j++)
    	{
    		if(arr[j]<arr[j+1])
    		{
    			swap(&arr[j],&arr[j+1]);
    		}
    	}
    	temp++;
    }
}
int maxinarray(int arr[] , int l , int r)
{
	int ans = arr[0];
	for(int i = l ; i<r ; i++)
	{
        if(arr[i+1]>=arr[i])
        {
        	ans = arr[i+1];
        }
	}
	return ans;
}
int mininarray(int arr[] , int l , int r)
{
	int ans = arr[0];
	for(int i = l ; i<r ; i++)
	{
		if(arr[i+1]<=arr[i])
		{
			ans = arr[i+1];
		}
	}
	return ans;
}
int max(int a,int b,int c)
{
    if(a>=b && a>=c)
    return a;
    if(b>=a && b>=c)
    return b;
    else
    return c;
}
int main()
{
	//The actual part is here!!
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int test = a+b+c;
    if(a==1 || b==1 || c==1)
    {
        printf("YES");
        return 0;
    }
    if((a==2 && b==2) || (a==2 &&c ==2) || (b==2 &&c ==2))
    {
        printf("YES");
        return 0;
    }
    if(a==3&&b==3&&c==3)
    {
        printf("YES");
        return 0;
    }
    if((a==2 && b==4 && c==4) || (a==4 && b==4 && c==2) || (a==4 && b==2 && c==4) )
    {
        printf("YES");
        return 0;
    }
    printf("NO");
}