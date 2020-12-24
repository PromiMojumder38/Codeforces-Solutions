#include<stdio.h>

int main()
{
	long long n;
	scanf("%lld", &n);
	
	if(n == 0) printf("0\n");        //if no friend comes, pizza won't be required
	else if(n % 2 == 0) printf("%lld\n", n + 1);
	else printf("%lld\n", (n + 1) / 2);
}
