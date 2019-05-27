#include<bits/stdc++.h>
using namespace std;
int arra[1000][1000];
int ar[10001];
int main()
{
    int ln,des,lr;
    int sum=0;

    cin>>ln>>des>>lr;
    //for(int i=1;i<=2*m*n;i++){
    //    arra[i]=i;
    //}
    for(int i=1;i<=ln;i++){
        for(int j=1;j<=des*2;j++){
            sum=sum+1;
            arra[i][j]=sum;
            if(arra[i][j]==lr){
                    if(j%2==0){
                     cout<<i<<" "<<j/2<<" ";
                    }
                    else{
                        j=j+1;
                        cout<<i<<" "<<j/2<<" ";
                    }


            }

        }
    }
    if(lr%2==0)
        cout<<"R"<<endl;
    else
        cout<<"L"<<endl;
    return 0;

}
