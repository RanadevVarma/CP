#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define FOR(i,a,b) for (int i = a; i <= b; i++)

int main(int argc, char const *argv[])
{
	//Fast I/O
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    cin>>a>>b;

   	int lena = a.length();
   	int lenb = b.length();
   	int sa = 0;
   	int sb = 0;

   	char ans[20];
   	int pos = 0;
   	ans[pos++] = a[sa++];
   	lena--; 
   	while(lena > 0){
   		if (a[sa] < b[0])
   		{
   			ans[pos++] = a[sa++];
   			lena--;
   		}
   		else{
   			break;
   		}
   	}
   	ans[pos++] = b[0];
   	ans[pos] = '\0';

   	cout<<ans<<endl;
    return 0;
}

