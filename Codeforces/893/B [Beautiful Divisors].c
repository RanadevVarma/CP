#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int num,check=1,divi,copy;
    scanf("%d",&num);
    copy = num;
    if(num%2==1)
    {
        printf("1");
        return 0;
    }
    while(copy%2==0)
    {
       check++;
       copy = copy/2;
    }
    for(int i = check ; check>1 ; check--)
    {
        divi = (pow(2,check)-1)*(pow(2,check-1));
        if(num%divi==0)
        {
            printf("%d",divi);
            return 0;
        }
    }
    printf("1");
}