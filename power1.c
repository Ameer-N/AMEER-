#include<stdio.h>

int isPowerOfTwo(int n)
{
if (n == 0)
	return 0;
while (n != 1)
{
	if (n%2 != 0)
		return 0;
	n = n/2;
}
return 1;
}


int main()
{
int no;
scanf("%d",&no);
isPowerOfTwo(no)? printf("yes"): printf("no\n");

return 0;
}
