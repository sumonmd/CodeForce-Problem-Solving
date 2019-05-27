#include<bits/stdc++.h>
using namespace std;
int a[3];
int main()
{

    int t1,t2,fi,ad;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
    cin>>t1>>t2>>fi>>ad>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    double res=(a[1]+a[2])/2.0;
     res=t1+t2+fi+ad+res;
    if(res>=90)
        cout<<"Case "<<i<<": "<<"A"<<endl;
    else if(res>=80 && res<90)
        cout<<"Case "<<i<<": "<<"B"<<endl;
    else if(res>=70 && res<80)
        cout<<"Case "<<i<<": "<<"C"<<endl;
    else if(res>=60 && res<70)
        cout<<"Case "<<i<<": "<<"D"<<endl;
    else if(res<60){
        cout<<"Case "<<i<<": "<<"F"<<endl;
    }
    }
    return 0;
}
