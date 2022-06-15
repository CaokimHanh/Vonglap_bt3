#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int arr[20],i,n;
	printf("Enter the number elements of Fibonacci series:\n");
	scanf("%d",&n);
	arr[0]=0;
	arr[1]=1;
	for(i=2;i<=n;i++)
	
{
	arr[i]=arr[i-1]+arr[i-2];
}

printf(" The Fibonacci series are:\n");
for (i=0;i<n;i++)
printf("%d\t",arr[i]);
			
	return 0;
}
