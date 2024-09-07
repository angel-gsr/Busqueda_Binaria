#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void BubbleSort(int array[], int n)
{
	int i,j,temp=0;
	for(i=0;i<n-1;++i)
	{
		for(j=0;i<n-i-1;j++)
		{
			if(array[i]>array[i+1])
			{
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}
}

int main()
{
	int n,j;
	srand(time(NULL));
	
	printf("Ingrese la longitud de la matriz:\n");
	scanf("%d",&n);
	
	int A[n];
	
	printf("Matriz A:\n");
	
	for (j=0; j<n; j++)
	{
		A[j]=rand() % (9 + 1 - 1) + 1;
		printf("%d ",A[j]);
	}
	printf("\n");
	
	BubbleSort(A,n);
	
	printf("Matriz A Ordenada:\n");
	
	for (j=0; j<n; j++)
	{
		printf("%d ",A[j]);
	}
	printf("\n");
	
	return 0;
}
