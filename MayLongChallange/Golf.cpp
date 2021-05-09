#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll N,x,k;
        cin >> N >> x >> k;
        int flag = 0;
        if(x%k == 0) flag = 1;
        x = (N+1)-x;
        if(x%k == 0) flag = 1;
        if(flag==1) cout<< "YES\n";
        else cout<<"NO\n"; 
    }
}