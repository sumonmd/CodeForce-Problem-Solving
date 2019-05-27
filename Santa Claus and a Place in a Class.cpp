#include<bits/stdc++.h>
using namespace std;

int main()
{
    int lln,dds,mm,lines,desks;
    cin>>lln>>dds>>mm;

    dds=dds*2;

    lines=mm/dds;
    if(mm%dds>0)
        lines++;
    mm=mm-(lines-1)*dds;
    desks=mm/2;
    if(mm%2>0)
        desks++;
    cout<<lines<<" "<<desks<<" ";
    if(mm%2==0)
        cout<<"R"<<endl;
    else
        cout<<"L"<<endl;

    return 0;
}
