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
	int n;
	int j = 0;
	scanf("%d",&n);
	char in[n];;
	scanf("%s",in);
	char dec[n];
	if(n%2==1)
	{
	   dec[n/2] = in[j];
	   j++;
	   for(int i = 1 ;  i<=n/2 ; i++)
	   {
	       dec[(n/2)-i] = in[j];
	       dec[(n/2)+i] = in[j+1];
	       j = j+2;
	   }
	}
	else
	{
	   for(int i = 0 ; i < n/2 ; i++)
	   {
	       dec[(n/2)-1-i] = in[j];
	       dec[(n/2)+i] = in[j+1];
	       j = j+2;
	   }
	}
	for(int i = 0 ; i<n ; i++)
	{
	    printf("%c",dec[i]);
	}
}





















