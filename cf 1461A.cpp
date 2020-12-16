#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, k, i;
		scanf("%d %d", &n, &k);
		if(n % 3 == 0) for(i = 0; i < n/3; i++) printf("abc");
		else if(n % 3 == 1)
		{
			for(i = 0; i < n/3; i++) printf("abc");
			printf("a");	
		} 
		else if(n % 3 == 2)
		{
			for(i = 0; i < n/3; i++) printf("abc");
			printf("ab");	
		} 
		printf("\n");
	}
}
