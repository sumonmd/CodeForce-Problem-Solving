#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tt,k;
	int i;
	char str[50];

	scanf("%d",&tt);

	for(k=1;k<=tt;k++)
	{
		scanf("%s",str);

		printf("String #%d\n",k);

		i=0;
		while(str[i]!='\0')
		{
			if(str[i]=='Z')
				putchar('A');
			else
				putchar(str[i]+1);

			i++;
		}

		cout<<endl;

	}

	return 0;
}
