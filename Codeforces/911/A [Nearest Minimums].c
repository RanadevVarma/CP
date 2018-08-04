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
	long int n;
	scanf("%I64d",&n);
	long long int in[n];
	long long int temp = 0;
	long long int pos[n];
	long long int min;
	long long int ans,check;
	for(int i = 0 ; i < n ; i++)
	{
	    scanf("%I64d ",&in[i]);
	    if(i==0)
	    {
	        min = in[0];
	        pos[temp] = i;
	        temp++;
	    }
	    else
	    {
	        if(in[i]<min)
	        {
	            temp = 0;
	            pos[temp]=i;
	            temp++;
	            min = in[i];
	        }
	        else if(in[i]==min)
	        {
	            pos[temp]=i;
	            temp++;
	        }
	    }
	}
	for(int j = 0 ; j < temp-1 ; j++)
	{
	    if(j==0)
	    {
	        ans = pos[j+1]-pos[j];
	    }
	    else
	    {
	        check = pos[j+1]-pos[j];
	        if(check<=ans)
	        {
	            ans = check;
	        }
	    }
	}
	printf("%I64d",ans);
	
}