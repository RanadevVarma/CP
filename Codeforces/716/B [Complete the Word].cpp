// Author            -  Ranadev Varma
// Codeforces Handle -  Ranadev_CaptainR
// Codechef Handle   -  ranadev

#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#define mod 1000000007

#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <iterator>
#include <iomanip>

using namespace std ;

char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int main()
{
    char in[50009];
    cin >> in ;
    int len = strlen(in) ,ans = 0;
    for(int i = 0 ; i < len-25 ; i++)
    {
        int present[26] = {0} , q = 0 , count = 0 , flag = 1;
        vector <int> ques ;
        vector <char> avai ;  
        for(int j = 0 ; j < 26 ; j++)
        {
            if(in[i+j]=='?')
            {
                q++;
                ques.push_back(i+j);
            }
            else if(present[in[i+j]-'A']==0)
            {
                present[in[i+j]-'A']++;
                count++;
            }
            else if(present[in[i+j]-'A']>0)
            {
                flag = 0 ;
                break ;
            }
        }
        if(flag==1 && 26-count==q)
        {
            for(int j = 0 ; j < 26 ; j++)
            {
                if(present[j]==0)
                {
                    avai.push_back(alpha[j]);
                }
            }
            for(int j = 0 ; j < ques.size() ; j++)
            {
                in[ques[j]] = avai[j];
            }
            ans = 1 ;
            break;
        }
    }
    if(ans==0)
    {
        cout << "-1" << "\n";
        return 0 ;
    }
    else
    {
        for(int i = 0 ; i < len ; i++)
        {
            if(in[i]=='?')
            {
                in[i] = 'A';
            }
        }
        cout << in << "\n";
        return 0 ;
    }
}