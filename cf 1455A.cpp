#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
		char s[1000];
		scanf("%s", s);
		printf("%d\n", strlen(s));
	}
}
