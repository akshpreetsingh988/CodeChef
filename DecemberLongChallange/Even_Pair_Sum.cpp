#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a>>b;
        int a_even = floor(a/2);
        int b_even = floor(b/2);
        int a_odd = a-a_even;
        int b_odd = b-b_even;
        cout<<(a_even*b_even)+(a_odd*b_odd)<<endl; 
    }
}