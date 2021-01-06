#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
		long long w, h, n, c = 1;
		scanf("%lld %lld %lld", &w, &h, &n);
	
		while(w % 2 == 0 || h % 2 == 0)
		{
			if(w % 2 == 0)
			{
				w /= 2;
				c *= 2;
			}
			if(h % 2 == 0)
			{
				h /= 2;
				c *= 2;
			}
			if(c >= n) break;
		}
		//printf("c %d\n", c);
		if(c >= n) printf("YES\n");
		else printf("NO\n");
	}
}
