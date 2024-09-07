#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i,j,n,bandera=0,bandera1=0,posicion=0,temp=0;
	
	srand(time(NULL));
	
	printf("Numero de Elementos a Ordenar: ");
	scanf("%d",&n);
	int lista[n];
	
	bandera=lista[0]; //para posicion primera
	
	for(i=0;i<n;i++)
	{
		lista[i]=rand()%(100+1-1)+1;
	}
	
	printf("Lista sin Ordenar\n");
	
	for(i=0;i<n;i++)
	{
		printf(" %d ",lista[i]);
	}
	printf("\n");
	
	//ordenamiento por seleccion 
	
	for (i=0; i<n; i++)
	{
		posicion=i;
		for(j=i+1;j<n;j++)
		{
			if(lista[posicion]>lista[j])
			{
				posicion=j;
			}
		}
		if(posicion!=i)
		{
			temp=lista[i];
			lista[i]=lista[posicion];
			lista[posicion]=temp;
		}
	}
		//printf("%d ",b[j]);
		
	printf("Matriz A Ordenada:\n");
	
	for (i=0; i<n; i++)
	{
		printf("%d ",lista[i]);
	}
	
	printf("\n");
	
	//printf("Numero mayor\n");
	
	for(i=0;i<n;i++)
	{
		if(lista[i]>bandera1)
		{
			//printf(" %d ",lista[i]);
			bandera1=lista[i];
		}	
	}
	printf("\nEl numero mayor es: %d",bandera1);
	
	//printf("Numero menor\n");
	for(i=0;i<n;i++)
	{
		if(lista[i]<bandera)
		{
			//printf(" %d ",lista[i]);
			bandera=lista[i];
		}	
		else if(lista[i]>bandera1)
		{
			//printf(" %d ",lista[i]);
			bandera1=lista[i];
		}	
	}
	printf("\nEl numero menor es: %d",bandera);
	
	printf("\n");
	
	return 0;
}
