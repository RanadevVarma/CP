#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
#include <stdio.h>

#define INF  -1000000009

using namespace std ;

int ans1,ans2 ;

int sol ;

int main()
{
	char pat1[26],pat2[26] ;
    char in[1009];
    char map[26];
    cin >> pat1 >> pat2 >> in ;
    for(int i = 0 ; i < 26 ; i++)
    {
        map[pat1[i]-'a'] = pat2[i];
    }
    int len = strlen(in);
    for(int i = 0 ; i < len ; i++)
    {
        if(in[i]<='z' && in[i]>='a')
        {
            cout << map[in[i]-'a'];
        }
        else if(in[i]<='Z' && in[i]>='A')
        {
            cout << (char)('A' + map[in[i]-'A']-'a');
        }
        else
        {
            cout << in[i];
        }
    }
}