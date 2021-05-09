#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
	ll N, hourToSolve, TimeLeft;
	vector<int>TimeZone;
	
	//input the values
	cin >> N >> hourToSolve >> TimeLeft;
	for(ll i=0,x; i<N; i++)
	{
		cin >> x;
		TimeZone.push_back(x);
	}	
	
	
	
	//main part
	for(auto x:TimeZone)
	{
		if((x+TimeLeft) >= hourToSolve)
		{
			cout<<"YES"<<"\n";
			exit(0);
		}
	}
	cout<<"NO";
}

int main()
{
	solve();
	return 0;
}
