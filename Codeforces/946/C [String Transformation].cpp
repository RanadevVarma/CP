#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <iterator>

using namespace std ;

int main()
{
	char in[100009];
    cin >> in ;
    int len = strlen(in);
    int pos[27];
    int temp = 0 ;
    for(int i = 0 ; i < len ; i++)
    {
        if(in[i]-'a'<=temp)
        {
            temp++;
            pos[temp] = i;
        }
        if(temp==26)
        {
            break;
        }
    }
    int present = 0;
    int j;
    int now = 1 ;
    if(temp==26)
    {
        for(int i = 0 ; i < len ; i++)
        {
            if(i==pos[now])
            {
                printf("%c",96+now);
                now++;
            }
            else
            {
                printf("%c",in[i]);
            }
        }
    }
    else
    {
        cout << "-1";
    }
    cout << "\n";
}