#include <stdio.h>

int isTrue(long long x)
{
	long long temp = x;
	while(temp > 0)
	{
		if(temp % 10 == 0)
		{
			temp /= 10;
			continue;
		}
		if(x % (temp % 10) != 0) return 0;
		temp /= 10;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		while(1) 
		{
			if(isTrue(n)) break;
			else n++;
		}
		printf("%lld\n", n);
	}
	return 0;
}

