#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, i, j;
	scanf("%d", &n);
	int a[10];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(" ");
		}
		else
			break;
	}

}