#include<bits/stdc++.h>
using namespace std;

vector<int>v;
int main()
{
    int arr[10001];
    int n,k;
    cin>>n>>k;
    int ck=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    v.erase(unique(v.begin(),v.end()),v.end());
    cout<<v.size()<<endl;

    return 0;
}
