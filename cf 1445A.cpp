#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
		int n, x;
		scanf("%d %d", &n, &x);
		
		int a[n], b[n], i;
		for(i = 0; i < n; i++) scanf("%d", &a[i]);
		for(i = 0; i < n; i++) scanf("%d", &b[i]);
		
		sort(a, a+n);
		sort(b, b+n, greater<int>());
		/*for(i = 0; i < n; i++) printf("%d ", a[i]);
		printf("\n");
		for(i = 0; i < n; i++) printf("%d ", b[i]);*/
		int flag = 0;
		for(i = 0; i < n; i++)
		{
			if(a[i] + b[i] > x)
			{
				flag = 1;
				printf("No\n");
				break;
			}
		}
		if(flag == 0) printf("Yes\n");
	}
	
}
