#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test ;
    cin >> test;
    while(test--)
    {
        int n;
        string s;
        string p;
        cin >> n;
        cin >> s >> p;
        int zeros = 0, ones = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]!=p[i])
            {
                if(s[i]=='0') zeros++;
                else ones++;    
            }
        }

        if(zeros != ones) {
            cout<<"No"<<"\n";
            continue;
        }

        int c1 = 0;
        bool ans = true;

        for(int i=0; i<n; i++)
        {
            if(s[i] != p[i])
            {
                if(s[i] == '0'){
                    if(c1>0)
                    {
                        c1--;
                    }
                    else 
                    {
                        ans = false;
                        break;
                    }
                }
                else c1++;
            }
        }
        if(ans == true) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}