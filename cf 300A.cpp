#include<bits\stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	
	int a[n], i;
	for(i = 0; i < n; i++) scanf("%d", &a[i]);
	
	sort(a, a + n);
	
	int c_pos = 0, c_neg = 0, c_zero = 0, n2 = 0, n3 = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] < 0) c_neg++;
		if(a[i] == 0) c_zero++;
		if(a[i] > 0) c_pos++;
	}
	
	/*for(i = 0; i < n; i++) printf("%d ", a[i]);
	printf("\n");*/
	
	printf("1 %d\n", a[0]);
	if(c_pos == 0)
	{
		if(c_neg % 2 != 0)
		{
			n2 = c_neg - 1;
			n3 = c_zero;
			printf("%d ", n2);
			for(i = 1; i < n; i++)
			{
				if(a[i] < 0) printf("%d ", a[i]);
				else break;
			}
			printf("\n");
			printf("%d ", n3);
			for(i = 0; i < n3; i++)
			{
				printf("0 ");
			}
			printf("\n");
		}
		else
		{
			n2 = c_neg - 2;
			n3 = c_zero + 1;
			printf("%d ", n2);
			for(i = 2; i < n; i++)
			{
				if(a[i] < 0) printf("%d ", a[i]);
				else break;
			}
			printf("\n");
			
			printf("%d %d ", n3, a[1]);
			for(i = 0; i < n3 - 1; i++)
			{
				printf("0 ");
			}
			printf("\n");	
		}
	}
	
	else
	{
		n2 = c_pos;
		n3 = c_zero + c_neg - 1;
		printf("%d ", n2);
		for(i = n - 1; i >= 0; i--)
		{
			if(a[i] > 0) printf("%d ", a[i]);
			else break;
		}
		printf("\n");
		printf("%d ", n3);
		for(i = 0; i < c_zero; i++) printf("0 ");
		for(i = 1; i < n; i++)
		{
			if(a[i] < 0) printf("%d ", a[i]);
			else break;
		}
		printf("\n");
	}
}
