#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int sum=n*(n+1);
        sum=sum/2;
        cout<<sum<<endl;
    }
    return 0;
}
