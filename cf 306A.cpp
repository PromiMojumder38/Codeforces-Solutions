#include<stdio.h>

int main()
{
	int n, m, i;
	scanf("%d %d", &n, &m);
	
	if(n % m == 0)
	{
		for(i = 0; i < m; i++) printf("%d ", n / m);
	}
	else
	{
		int a[m];
		for(i = 0; i < m; i++) a[i] = n / m;
		for(i = 0; i < n % m; i++) a[i]++;
	
		for(i = 0; i < m; i++) printf("%d ", a[i]);
	}
	printf("\n");
}
