#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,d,h;
    int x=0,y=0;
    int dis[1005],arr[1005];
    cin>>n>>m>>d;
    for(int i=0;i<n;i++){

        cin>>h;
        if(h<=d&&h!=0){
            arr[x++]=i+1;
        }

    }
    for(int i=0;i<x;i++){
            dis[y++]=abs(m-arr[i]);
        }
     sort(dis,dis+y);
     cout<<dis[0]*10<<endl;

    return 0;
}
