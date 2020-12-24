#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int a[n];
	int i, j;
	for(i = 0; i < n; i++) scanf("%d", &a[i]);
	
	for(i = 0; i < n; i++)
	{
		for(j = i+1; j < n; j++)
		{
			if(a[i] == a[j]) a[i] = -1;
		}
	}
	
	int c = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] != -1)
		{
			c++;
		}
	}
	
	printf("%d\n", c);
	for(i = 0; i < n; i++)
	{
		if(a[i] != -1)
		{
			printf("%d ", a[i]);
		}
	}
	printf("\n");
}
