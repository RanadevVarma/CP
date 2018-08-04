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
int main()
{
	//The actual part is here!!
    char in[55];
    scanf("%s",in);
    int l = strlen(in);
    int ans=0;
    for(int i = 0 ; i<l ; i++ )
    {
        if(in[i]=='a' || in[i]=='e' || in[i]=='i' || in[i]=='o' || in[i]=='u')
        {
            ans++;
        }
        else if(in[i]=='1' || in[i]=='3' || in[i]=='5' || in[i]=='7' || in[i]=='9')
        {
            ans++;
        }
    }
    printf("%d",ans);
}