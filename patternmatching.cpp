#include<bits/stdc++.h>
using namespace std;

int main()
{
    char *loc,buf1[80],buf2[80];
    cout<<"Enter to the searched sentence:"<<endl;
    gets(buf1);
    cout<<"Enter to the target string:"<<endl;
    gets(buf2);

    loc=strstr(buf1,buf2);
    if(loc==0)
        cout<<"No matching "<<endl;
    else
        cout<<buf2<<"is found in "<<loc-buf1<<endl;

    return 0;
}
