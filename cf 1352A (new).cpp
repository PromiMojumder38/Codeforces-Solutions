//better

#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, c = 0, cnt = 0;
		scanf("%d", &n);
		int num = n;
		while(n != 0)
		{
			if(n % 10 != 0) 
			{
				c++;
			}
			n /= 10;
		}
		printf("%d\n", c);
		
		while(num != 0)
		{
			if(num % 10 != 0) 
			{
				printf("%d", num % 10);
				for(int i = 0; i < cnt; i++) printf("0");
				printf(" ");
			}
			cnt++;
			num /= 10;
		}
		printf("\n");
	}
}
