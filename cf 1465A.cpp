#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
		int l, i, j;
		scanf("%d", &l);
		char s[l];
		scanf("%s", s);
		
		int c = 0;
		for(i = strlen(s) - 1; i >= 0; i--)
		{
			if(s[i] == ')') c++;
			if(s[i] != ')') break;
		}
		//printf("cnt %d\n", c);
		if(c <= strlen(s)-c) printf("No\n");
		else printf("Yes\n");
	}
}
