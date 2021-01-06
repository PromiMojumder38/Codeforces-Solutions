#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
		long long n, x;
		scanf("%lld %lld", &n, &x);
		long long a[n], i;
		for(i = 0; i < n; i++) scanf("%lld", &a[i]);
		
		long long s = 0, c = 1;
		for(i = 0; i < n; i++) s += a[i];
		
		i = 0;
		while(1)
		{
			if(a[i] % x != 0) break;
			else
			{
				s += a[i] * c;
				a[i] /= x;
			}
			//printf("s %lld\n", s);
			if(i == n - 1) 
			{
				i = 0;
				c *= x;
			}
			else i++;
		}
		printf("%lld\n", s);
	}
}

/*2
1 2
12
4 2
4 6 8 2*/
