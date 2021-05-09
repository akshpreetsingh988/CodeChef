#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int k;
        cin>>k;
        long long int arr[n];
        long long int sum=0;
        long long int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        if(sum%k==0)
        {
            cout<<"0"<<endl;
        }
    else
    {
        cout<<"1"<<endl;
     }
     cout<<count<<endl;
    }
    
    
        
    }return 0;
    
    }