// Author            -  Ranadev Varma
// Codeforces Handle -  Ranadev_CaptainR
// Codechef Handle   -  ranadev
 
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
 
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

#define MOD 1000000007

#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)

#define FOR(i,a,b)  for(int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(int i = a ; i > b ; i--)

#define pb push_back
#define mp make_pair

bool cmp(pair<int,int> p1,pair<int,int> p2)
{
    return abs(p1.first)+abs(p1.second) < abs(p2.first)+abs(p2.second);
}

int main()
{
    lol1;
    lol2;
    int n,x,y,one=0,two=0;
    cin >> n ;
    vector <pair<int,int>> points ;
    FOR(i,0,n)
    {
        cin >> x >> y ;
        points.pb(mp(x,y));
        if(x==0 || y==0)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    cout << 6*two+4*one << "\n";
    sort(points.begin(),points.end(),cmp);
    FOR(i,0,n)
    {
        if(points[i].first==0)
        {
            if(points[i].second>0)
            {
                cout << "1" << " " << abs(points[i].second) << " " << "U" << "\n";
                cout << "2" << "\n";
                cout << "1" << " " << abs(points[i].second) << " " << "D" << "\n";
                cout << "3" << "\n";
            }
            else
            {
                cout << "1" << " " << abs(points[i].second) << " " << "D" << "\n";
                cout << "2" << "\n";
                cout << "1" << " " << abs(points[i].second) << " " << "U" << "\n";
                cout << "3" << "\n";
            } 
        }
        else if(points[i].second==0)
        {
            if(points[i].first>0)
            {
                cout << "1" << " " << abs(points[i].first) << " " << "R" << "\n";
                cout << "2" << "\n";
                cout << "1" << " " << abs(points[i].first) << " " << "L" << "\n";
                cout << "3" << "\n";
            }
            else
            {
                cout << "1" << " " << abs(points[i].first) << " " << "L" << "\n";
                cout << "2" << "\n";
                cout << "1" << " " << abs(points[i].first) << " " << "R" << "\n";
                cout << "3" << "\n";
            } 
        }
        else
        {
            if(points[i].first>0 && points[i].second>0)
            {
                cout << "1" << " " << abs(points[i].first) << " " << "R" << "\n";
                cout << "1" << " " << abs(points[i].second) << " " << "U" << "\n";
                cout << "2" << "\n";
                cout << "1" << " " << abs(points[i].second) << " " << "D" << "\n";
                cout << "1" << " " << abs(points[i].first) << " " << "L" << "\n";
            }
            else if(points[i].first<0 && points[i].second>0)
            {
                cout << "1" << " " << abs(points[i].first) << " " << "L" << "\n";
                cout << "1" << " " << abs(points[i].second) << " " << "U" << "\n";
                cout << "2" << "\n";
                cout << "1" << " " << abs(points[i].second) << " " << "D" << "\n";
                cout << "1" << " " << abs(points[i].first) << " " << "R" << "\n";
            }
            else if(points[i].first>0 && points[i].second<0)
            {
                cout << "1" << " " << abs(points[i].first) << " " << "R" << "\n";
                cout << "1" << " " << abs(points[i].second) << " " << "D" << "\n";
                cout << "2" << "\n";
                cout << "1" << " " << abs(points[i].second) << " " << "U" << "\n";
                cout << "1" << " " << abs(points[i].first) << " " << "L" << "\n";
            }
            else
            {
                cout << "1" << " " << abs(points[i].first) << " " << "L" << "\n";
                cout << "1" << " " << abs(points[i].second) << " " << "D" << "\n";
                cout << "2" << "\n";
                cout << "1" << " " << abs(points[i].second) << " " << "U" << "\n";
                cout << "1" << " " << abs(points[i].first) << " " << "R" << "\n";
            }
            cout << "3" << "\n";
        }
    }
    return 0 ;
}