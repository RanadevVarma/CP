#include <iostream>
#include <cstring>

using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    char in[n];
    cin >> in ;
    int count = 0;
    for(int i = 0  ;  i < n ; i++)
    {
        cin >> in[i];
    }
    for(int i = 0 ; i < n-1 ; i++)
    {
        if((in[i]=='U' && in[i+1]=='R') || (in[i]=='R' && in[i+1]=='U'))
        {
            count++;
            i++;
        }
    }
    cout << n-count << "\n";
}