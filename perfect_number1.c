#include<stdio.h>
int main()
{
    int t;
    unsigned long long n;
    scanf("%d",&t);
    while(t--){
        scanf("%llu",&n);
        int i,sum=0;
        for(i=1;i<n;i++){
                if(n%i==0){
            sum+=i;
                }
        }
        if(n==sum)
            printf("Yes, %llu is a perfect number!\n",n);
        else
            printf("No, %llu is not a perfect number!\n",n);
    }


    return 0;
}
