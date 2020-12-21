#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
		int n;
		scanf("%d", &n);
		long long a[n], i, j;
		for(i = 0; i < n; i++) scanf("%lld", &a[i]);
		
		if(n % 2 != 0)
		{
			for(i = 0, j = n-1; i <= n/2; i++, j--)
			{
				printf("%lld ", a[i]);
				if(i == n/2) break;
				printf("%lld ", a[j]);
			}
		}
		
		else 
		{
			for(i = 0, j = n-1; i < n/2; i++, j--)
			{
				printf("%lld ", a[i]);
				printf("%lld ", a[j]);
			}
		}
		
		printf("\n");
	}
}
