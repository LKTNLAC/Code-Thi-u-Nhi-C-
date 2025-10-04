#include <stdio.h>
#include <bits/stdc++.h>


#include <string.h>

int main()
{
	char s[100];
	gets(s);

	int n=strlen(s);
	char s1;
	for(int i=0;i<n;i++)
	{
		if((s[i]!=' ' && s[i-1]==' ')||i==0)
			printf("%c",toupper(s[i]));
			//cout<<s[0];
	}

}
