#include<bits/stdc++.h>
using namespace std;

map<string ,int>mp;
int main()
{
    string str;
    mp["Tetrahedron"]=4;
    mp["Cube"]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;
    int n;
    long long int sum=0;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
       getline(cin,str);
        sum=sum+mp[str];
    }
    cout<<sum<<endl;

    return 0;

}
