#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    double sq,h,sd, r,pi,area;
    pi=2*acos(0.0);
    cin>>t;
    for(int i=1;i<=t;i++){
    cin>>r;

     h=2*r;
    sq=h*h;
    area=pi*r*r;
     sd=abs(area-sq);
    printf("Case %d: %0.2lf\n",i,sd);
    }
    return 0;

}
