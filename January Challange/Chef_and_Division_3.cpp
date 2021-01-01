#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n,k,d,total_ques=0,temp=0;
        cin >> n >> k >> d;
        for(int i=0; i<n; i++)
        {
            cin >> temp;
            total_ques+=temp;
        }
        if((total_ques/k) >= d) cout<< d<<"\n";
        else cout<<total_ques/k<<"\n";
    }
    return 0;
}