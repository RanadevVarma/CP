#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <cstring>
using namespace std;
int main() 
{
    long long int A;
    long long int B;
    scanf("%lld %lld",&A,&B);
    long long int Y , G , BL ;
    scanf("%lld %lld %lld",&Y,&G,&BL);
    long long int yc = 0 , bc = 0 ;
    yc = yc + 2*Y + G ;
    bc = bc + G + 3*BL ;
    long long int req = 0;
    if(A<yc)
    {
        req = req + (yc-A);
    }
    if(B<bc)
    {
        req = req + (bc-B);
    }
    printf("%lld",req);
}




