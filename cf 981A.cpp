#include<stdio.h>
#include<string.h>

int isPalin (char str[], int len)
{
    int i, h = len / 2;
    for (i = 0; i < h; i++) if (str[i] != str[len - i - 1]) return 0;
	return 1;
}

int retLen (char str[], int len)
{
    if (len == 0) return 0;
	if (isPalin(str,len)) retLen(str, --len);
    else return len;
}

int main ()
{
    char str[50];
    int len,i;

    scanf("%s", str);
	len = strlen(str);

    printf("%d\n",retLen(str,len));

    return 0;
}
