#include<bits/stdc++.h>
using namespace std;
{
    int t; cin >> t;
    while(t--)
    {
        int X,A,B;
        cin >> X >>A >> B;
        int ans = A + ((100 - X)*B);
        cout<<ans*10;

    }
} // namespace std;
