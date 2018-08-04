// Author            -  Ranadev Varma
// Codeforces Handle -  Ranadev_CaptainR
// Codechef Handle   -  ranadev
 
//#pragma comment(linker, "/stack:200000000")
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
#define pi 3.14159

#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)

#define FOR(i,a,b)  for(int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(int i = a ; i > b ; i--)

#define pb push_back
#define mp make_pair
#define fi first
#define se second

long long int inv=0;

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    FOR(i,0,n1)
        L[i] = arr[l + i];
    FOR(j,0,n2)
        R[j] = arr[m + 1+ j];
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            inv+=(n1-i);
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    lol1;
    lol2;
    int n;
    cin >> n;
    int in[n];
    FOR(i,0,n)
    {
        cin >> in[i];
    }
    mergeSort(in,0,n-1);
    if(n%2==0)
    {
        if(inv%2==0)
        {
            cout << "Petr" << "\n";
            return 0;
        }
        else
        {
            cout << "Um_nik" << "\n";
            return 0;
        }
    }
    else
    {
        if(inv%2==0)
        {
            cout << "Um_nik" << "\n";
            return 0;
        }
        else
        {
            cout << "Petr" << "\n";
            return 0;
        }
    }
}