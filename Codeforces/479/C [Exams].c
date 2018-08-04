#include <stdio.h>

long long int temp1,temp2 ;

struct lol
{
    long long int orig;
    long long int choice;
};

void sort(struct lol array[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n-1 ; j++)
        {
            if(array[j].orig>array[j+1].orig)
            {
                temp1 = array[j+1].orig ;
                temp2 = array[j+1].choice ;
                array[j+1].orig = array[j].orig ;
                array[j+1].choice = array[j].choice ;
                array[j].orig = temp1 ;
                array[j].choice = temp2 ;
            }
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n-1 ; j++)
        {
            if(array[j].orig==array[j+1].orig && array[j].choice > array[j+1].choice )
            {
                temp1 = array[j+1].orig ;
                temp2 = array[j+1].choice ;
                array[j+1].orig = array[j].orig ;
                array[j+1].choice = array[j].choice ;
                array[j].orig = temp1 ;
                array[j].choice = temp2 ;
            }
        }
    }
}

long long int pos,a,b ;


int main()
{
    int n ;
    scanf("%d",&n);
    struct lol array[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d %d",&a,&b);
        array[i].orig = a ;
        array[i].choice = b ;
    }
    sort(array,n);
    for(int i = 0 ; i < n ; i++)
    {
        if(array[i].choice>=pos)
        {
            pos = array[i].choice ;
        }
        else
        {
            pos = array[i].orig ;
        }
    }
    printf("%d\n",pos);
}  