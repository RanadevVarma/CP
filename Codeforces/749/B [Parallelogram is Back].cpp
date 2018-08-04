
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

int main()
{
    int x1,y1,x2,y2,x3,y3 ;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;
    cout << "3" << "\n";
    //cyclic
    cout << x1+(x2-x1)+(x3-x1) << " " << y1+(y2-y1)+(y3-y1) << "\n";
    cout << x2+(x3-x2)+(x1-x2) << " " << y2+(y3-y2)+(y1-y2) << "\n";
    cout << x3+(x1-x3)+(x2-x3) << " " << y3+(y1-y3)+(y2-y3) << "\n";
    return 0 ;
}