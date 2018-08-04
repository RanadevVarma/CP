#include<iostream>
#include<cstring>
using namespace std ;
int main()
{
    char in[101];
    scanf("%s",in);
    int l = strlen(in);
    for(int i = 0 ; i < l ; i++)
    {
        if(in[i]!='a' && in[i]!='A' && in[i]!='y' &&  in[i]!='Y' &&  in[i]!='o' &&  in[i]!='O' &&  in[i]!='e' && in[i]!='E' &&  in[i]!='u' &&  in[i]!='U' &&  in[i]!='i' &&  in[i]!='I')
        {
            if(in[i]>='A' && in[i]<='Z')
            {
                in[i] = in[i] + 32 ;
                printf(".%c",in[i]);
            }
            else
            {
                printf(".%c",in[i]);
            }
        }
    }
}