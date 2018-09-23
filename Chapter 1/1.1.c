#include <stdio.h>
#include <stdlib.h>

/*
int intcomp(int *x, int *y){  //书上的版本
	return *x - *y;
}
*/

int intcomp (const void * x, const void * y){  //书上的会有警告,这里参考了 GitHub 上的代码,但是依然没有输出
	return *(int *)x - *(int *)y;
}

int a[10000000];
int main(void){
	int i, n = 0;
	while(scanf("%d", &a[n]) != EOF)
		n++;
	qsort(a, n, sizeof(int), intcomp);
	for (i = 0; i < n; i++)
		printf ("%d\n", a[i]);
	return 0;
}

/*
//GitHub 上的代码
#define MAXNUM 10000000
#include <stdio.h>
#include <stdlib.h>
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int nums[MAXNUM];
int main()
{
	int i, n = 0;
	while(scanf("%d", &nums[n]) != EOF)
		n++;
	qsort (nums, n, sizeof(int), compare);
	for (i=0; i<n; i++)
    	printf ("%d\n",nums[i]);
	return 0;
}
*/