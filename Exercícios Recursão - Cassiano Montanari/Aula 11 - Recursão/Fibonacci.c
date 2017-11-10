#include <stdio.h>

int fibonacci(int n)
{
	if(n == 0) return 0;
	else if(n == 1) return 1;
	return fibonacci(n-2) + fibonacci(n-1);
}


int main(void)
{
    int n, fib;

    printf("Qual posicao de fibonacci deseja saber: ");
    scanf("%d",&n);

    fib = fibonacci(n);

    printf("fib[%d] = %d", n, fib);

    return 0;
}
