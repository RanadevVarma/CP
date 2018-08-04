#include <iostream>
#include <vector>
#include <cstring>

using namespace std ;

int ans,sum;

int main()
{
    char check[6] = "hello" ;
    char in[107] ;
    cin >> in ;
    int len = strlen(in);
    int found = 0;
    for(int i = 0 ; i < len ; i++)
    {
        if(in[i]==check[found])
        {
            found++;
        }
        if(found==5)
        {
            cout << "YES" << "\n";
            return 0 ;
        }
    }
    cout << "NO" << "\n";
}