#include<bits/stdc++.h>
using namespace std;
#define ll long long int


ll CustomPower(ll a, ll b)
{
    if(b==0) return 1;
    if(b==1) return a;
    if(b&1) return (((a* CustomPower(a,b/2))%1000000007) * CustomPower(a,b/2))%1000000007;
    else return (CustomPower(a,b/2)*CustomPower(a,b/2))%1000000007;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        cout<<CustomPower(2,n-1)<<endl;

    }
}
