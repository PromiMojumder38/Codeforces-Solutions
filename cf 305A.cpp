#include<bits\stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	
	int a[n], i, c = 0, c_not_zero1 = 0, c_not_zero2 = 0, c100 = 0, c_not_zero21 = 0; 
	for(i = 0; i < n; i++) scanf("%d", &a[i]);
	
	sort(a, a + n);
	for(i = 0; i < n; i++)
	{
		if(a[i] == 0) c++;
		else if(a[i] != 0 && a[i] <= 9 && c_not_zero1 == 0) c_not_zero1++;
		else if(a[i] > 9) break;
		//if(c_not_zero1 == 1) break; 
	}
	c += c_not_zero1;
	
	for(i = 0; i < n; i++)
	{
		if(a[i] >= 10 && a[i] <= 99)
		{
			if(a[i] % 10 == 0 && c_not_zero21 == 0 && c_not_zero2 == 0) 
			{
				c_not_zero21++;
			}
			else if(a[i] % 10 != 0 && c_not_zero1 == 0 && c_not_zero2 == 0 && c_not_zero21 == 0)
			{
				c_not_zero2++;
			}
		}
		else if(a[i] > 99) break;
	}
	
	c += c_not_zero2 + c_not_zero21;
	
	for(i = n - 1; i >= 0; i--)
	{
		if(a[i] == 100)
		{
			c100 = 1; 
			break;
		}
		else break;
	}
	
	c += c100;
	
	printf("%d\n", c);
	for(i = 0; i < n; i++)
	{
		if(a[i] == 0) printf("0 ");
		else if(a[i] > 0 && a[i] <= 9)
		{
			if(c_not_zero1 == 1) 
			{
				printf("%d ", a[i]);
				break;
			}
			else break;
		}
		else break;
	}
	for(i = 0; i < n; i++)
	{
		if(a[i] >= 10 && a[i] <= 99 && a[i] % 10 == 0) 
		{
			if(c_not_zero21 == 1)
			{
				printf("%d ", a[i]);
				break;
			}
			else break;
		}
		if(a[i] > 99) break;
	}
	for(i = 0; i < n; i++)
	{
		if(a[i] >= 10 && a[i] <= 99 && a[i] % 10 != 0)
		{
			if(c_not_zero2 == 1) 
			{
				printf("%d ", a[i]);
				break;
			}
			else break;
		}
		if(a[i] > 99) break;
	}
	
	if(c100 == 1) printf("100 ");
	printf("\n");
}
