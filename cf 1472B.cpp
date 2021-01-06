#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n], i;
		for(i = 0; i < n; i++) scanf("%d", &a[i]);
		
		int c1 = 0, c2 = 0;
		for(i = 0; i < n; i++)
		{
			if(a[i] == 1) c1++;
			else if(a[i] == 2) c2++;
		}
		if(c1 % 2 != 0) printf("NO\n");
		else if(c2 % 2 != 0 && c1 == 0)printf("NO\n");
		else printf("YES\n");
	}
}
