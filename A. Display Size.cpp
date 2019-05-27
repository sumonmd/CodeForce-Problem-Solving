#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n,low;
    cin>>n;
    low = sqrt(n);
    while(1)
    {
        if(n%low==0)
        {
            cout<<low<<" ";
            cout<<n/low<<endl;
            break;
        }
        low--;
    }

    return 0;
}
