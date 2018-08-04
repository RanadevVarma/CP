#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    scanf("%d",&i);
	int a,b,c,d;
	int in=i;
    while(1)
	{
	i++;
	in = i;
	a = in/1000;
    in = in%1000;
    b = in/100;
    in = in%100;
    c = in/10;
    in = in%10;
    d = in;
	if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
	{
		printf("%d",i);
		break;
	}
	}
}