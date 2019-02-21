#include<bits/stdc++.h>

int main()
{
    int n,binary;
    scanf("%d",&n);
    string str="";
    while(n!=0){
        binary=n%2;
        str=str+binary;
        n=n/2;
    }

    cout>>str;
    return 0;
}
