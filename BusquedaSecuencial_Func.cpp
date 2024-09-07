#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void buscarElementoEnArreglo(int array[], int num, int elemento) 
{
    int i, bandera = 0;

    printf("Elementos de la lista\n");
    for (i = 0; i < num; i++) 
	{
        array[i] = rand() % (10 + 1 - 1) + 1;
        printf(" %d ", array[i]);
    }
    printf("\n");

    for (i = 0; i < num; i++) 
	{
        if (array[i] == elemento) 
		{
            printf("Elemento en posicion: %d\n", i + 1);
            bandera = 1;
            break;
        }
    }

    if (bandera == 0) 
	{
        printf("Elemento no se encuentra :(\n");
    }
}

int main() 
{
    clock_t tic = clock();

    int num, elemento;
    
    printf("Numero de elementos a crear:\n");
    scanf("%d", &num);
    int lista[num];

    printf("Elemento a buscar:\n");
    scanf("%d", &elemento);

    buscarElementoEnArreglo(lista, num, elemento);

    clock_t toc = clock();
    printf("Elapsed %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);

    return 0;
}

