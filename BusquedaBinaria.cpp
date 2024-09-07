#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	clock_t tic=clock();
	
	int i,j,num,elemento,bandera=0;
	int primero,ultimo,mitad;
	
	srand(time(NULL));
	
	int lista[10]={1,2,4,6,9,10,11,15,18,20};
	num=10;
	
	printf("Elementos de la lista\n");
	for(i=0;i<num;i++)
	{
		printf(" %d ",lista[i]);
	}
	printf("\n");
	printf("Elemento a buscar:\n");
	scanf("%d",&elemento);
	
	primero=0;
	ultimo=num-1;
	mitad=(primero+ultimo)/2;
	
	while(primero<=ultimo)
	{
		if(lista[mitad]<elemento)
		{
			primero=mitad+1;
		}
		else if(lista[mitad]==elemento)
		{
			printf("Posicion: %d\n",mitad+1);
			bandera=1;
			break;
		}
		else
		{
			ultimo=mitad-1;
		}
		mitad=(primero+ultimo)/2;
	}
	if(bandera==0)
	{
		printf("Elemento no se encuentra :(");
	}
	
	clock_t toc=clock();
	printf("Elapsed %f seconds\n",(double)(toc-tic)/CLOCKS_PER_SEC);
	
	return 0;
}
