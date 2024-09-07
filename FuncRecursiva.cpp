#include <stdio.h>

//Funciones recursivas, se mandan a llamar a si mismas, se llaman asi mismas para dividir una tarea en bloques mas pequeños hasta llegar a un caso base

//Factorial ejemplo
/*int factorial(int num)
{
	if(num==0)//cuando llegue a uno, retorna el valor obtenido
	{
		return 1;
	}
	else
	{
		return (factorial(num-1)*num);
	}
}

int main()
{
	int numero;
	printf("Ingresa un numero para calcular su factorial: \n");
	scanf("%d",&numero);
	printf("\n");
	printf("El factorial de %d es %d\n",numero,factorial(numero));
	
	return 0;
}*/
								//////////////////////

//Suma de numeros naturales

/*int sumarNumeros(int n);

int main()
{
	int num;
	printf("Ingresa un numero: ");
	scanf("%d",&num);
	printf("Suma: %d",sumarNumeros(num));
	
	return 0;
}

int sumarNumeros(int n)
{
	if(n!=0)//mientras el numero sea diferente de 0, el numero que ponemos empieza a descender, sin llegar a 0
	{
		printf("%d ",n);
		return (n+sumarNumeros(n-1));
	}
	else //cuando llegue a 0 por asi decirlo, termina y retorna el valor de la suma o el printf del resultado
	{
		printf("\n");
		return n;
	}
}*/

								//////////////////////
						
//Elevar un numero a una potencia dada
								
int elevarPotencia(int n1,int n2);

int main()
{
	int num,potencia,result;
	
	printf("Numero: ");
	scanf("%d",&num);
	printf("Potencia a elevar (Numero Positivo xfa): ");
	scanf("%d",&potencia);
	result=elevarPotencia(num,potencia);
	printf("%d ^ %d = %d",num,potencia,elevarPotencia(num,potencia));
	
	return 0;
}

int elevarPotencia(int num, int potencia)
{
	if(potencia!=0)
	{
		return (num*elevarPotencia(num,potencia-1));
	}
	else
	{
		return 1;
	}
}

//Euristica: regla que tu creas o defines por ejemplo, el pivote del arreglo que escojas, el de enmedio, izquierda o derecha
