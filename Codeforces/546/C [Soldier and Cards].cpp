#include <iostream>
#include <queue>

using namespace std ;

long long int num = 1 ;
int main()
{
    int n , temp ;
    scanf("%d",&n);
    queue <int> p1 ;
    queue <int> p2 ;
    int k1,k2 ;
    scanf("%d",&k1);
    for(int i = 0 ; i < k1 ; i++)
    {
        scanf("%d",&temp);
        p1.push(temp);
    }
    scanf("%d",&k2);
    for(int j = 0  ; j < k2 ; j++)
    {
        scanf("%d",&temp);
        p2.push(temp);
    }
    int check1,check2;
    while(num<=100000000)
    {
        check1 = p1.front();
        check2 = p2.front();
        p1.pop();
        p2.pop();
        if(check1>check2)
        {
            p1.push(check2);
            p1.push(check1);
        }
        else
        {
            p2.push(check1);
            p2.push(check2);
        }
        if(p1.empty())
        {
            cout << num << " " << "2" << "\n";
            return 0;
        }
        else if(p2.empty())
        {
            cout << num << " " << "1" << "\n";
            return 0;
        }
        else
        {
            num++;
        }
    }
    cout << "-1" << "\n";
}