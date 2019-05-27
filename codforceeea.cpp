#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ln,ds,lr;
    cin>>ln>>ds>>lr;
    int ms=lr;
    ds=2*ds;
    int line=lr/ds;
    if(lr%ds>0)
        line++;
    lr=lr-((line-1)*ds);
    int desk=lr/2;
    if(desk%2>0)
        desk++;
    cout<<line<<" "<<desk<<" ";

    if(ms%2==0)
        cout<<"R"<<endl;
        else
            cout<<"L"<<endl;

        return 0;


}
