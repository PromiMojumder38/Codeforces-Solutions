#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, i;
		scanf("%d", &n);
		char s1[n], s2[n];
		scanf("%s %s", s1, s2);
		int cnt_red = 0, cnt_blue = 0;
		for(i = 0; i < n; i++)
		{
			if(s1[i] > s2[i]) cnt_red++;
			else if(s1[i] < s2[i]) cnt_blue++;
		}
		if(cnt_red > cnt_blue) printf("RED\n");
		else if(cnt_red < cnt_blue) printf("BLUE\n");
		else if(cnt_red == cnt_blue) printf("EQUAL\n");
	}
}
