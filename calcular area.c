#include<stdio.h>
#include<math.h>

//prototipo
int area(int num1, int num2);

int main()
{
	int num1, num2, result;

	printf("Introduza 2 numeros inteiros:");
	scanf("%d %d", &num1, &num2);

	if(num1<0 || num2<0)
	{
		printf("Opcao Invalida!\n");
		return 0;
	}
	result = area(num1, num2);

	printf("O resultado e: %d", result);
}

//implementação
int area(int n1, int n2)
{
	int temp;

	temp = n1 * n2;
	return temp;
}