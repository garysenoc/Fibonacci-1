#include <stdio.h>
#include <stdlib.h>
//The Fibonacci sequence
//0 1 1 2 3 5 8 13 21

#define MAX_SIZE  100

int fibonacci(int n)

void main()
{
	int i;
	int *Fibonacci_array;

	Fibonacci_array = (int *)malloc(sizeof(int)*MAX_SIZE);
	Fibonacci(Fibonacci_array, MAX_SIZE);

	for(i=0; i<MAX_SIZE; i++){
		printf("%d\n", Fibonacci_array[i]);
	}
	
	free(Fibonacci_array);
	return ;
}

int fibonacci(int n){
return (n==0) ? 0 : (n==1) ? 1 : (fibonacci(n-1) + fibonacci(n-2));// use ternary and recursion to shorten code
}
