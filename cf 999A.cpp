// pari na goo kisu
#include<stdio.h>

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	
	int a[n], i, cnt1 = 0, cnt2 = 0, flag1 = 0, flag2 = 0;
	for(i = 0; i < n; i++) scanf("%d", &a[i]);
	for(i = 0; i < n; i++)
	{
		if(a[i] > k)
		{
			flag1 = 1;
			break;
		}
		else cnt1++;
	}
	
	if(flag1 == 0) 
	{
		printf("%d\n", cnt1);
		return 0;
	}
	
	for(i = n-1; i >= 0; i--)
	{
		if(a[i] > k)
		{
			flag2 = 1;
			break;
		}
		else cnt2++;
	}
	
	if(flag1 == 1 && flag2 == 1) printf("%d\n", cnt1 + cnt2);
}
