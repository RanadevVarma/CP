#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std ;

long long int isPrime(long long int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
 
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return 0 ;
 
    return 1 ;
}
int main()
{
    int n ;
    cin >> n ;
    long long int temp ;
    for(int j = 0 ; j < n ; j++)
    {
        cin >> temp ;
        double demp ;
        demp = sqrt(temp);
        temp = (long long int)demp ;
        if(demp==(int)demp && isPrime(temp)==1)
        {
           
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
}
