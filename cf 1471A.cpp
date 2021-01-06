#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
		long long n, x, i;
		scanf("%lld %lld", &n, &x);
		long long a[n];
		for(i = 0; i < n; i++) scanf("%lld", &a[i]);
		
		long long s = 0, s1 = 0;
		for(i = 0; i < n; i++)
		{
			s += a[i];
			if(a[i] % x != 0) s1 += (a[i] / x) + 1;
			else s1 += a[i] / x;
		}
		if(s % x != 0) printf("%lld %lld\n", (s/x) + 1, s1);
		else printf("%lld %lld\n", (s/x), s1);
	}
}
