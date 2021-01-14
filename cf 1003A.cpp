#include<bits\stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	
	int x, i;
	vector <int> freq(105);
	for(i = 0; i < 105; i++) freq[i] = 0;
	for(i = 0; i < n; i++) 
	{
		scanf("%d", &x);
		freq[x]++;
	}
	
	if(n == 1)
	{
		printf("1\n");
		return 0;
	}
	
	printf("%d\n", *max_element(freq.begin(), freq.end()));
}
