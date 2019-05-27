#include<Bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,sum=1;

    cin>>a>>b;
    if(a<b){
        for(int i=1;i<=a;i++)
            sum=sum*i;
    }
    else{
        for(int i=1;i<=b;i++)
            sum=sum*i;
    }
    printf("%d\n",sum);
    int i,j;
    j=i*(i+1)<<1;
    cout<<j;
    return 0;
}
