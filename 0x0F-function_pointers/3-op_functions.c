#include "3-calc.h"

/**
  *op_add - adds two integer
  *@a: first integer
  *@b: second integer
  *)
  *Return: Result
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - subtracts two integers
  *@a: first integer
  *@b: second integer
  *)
  *Return: result
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - multplies two integers
  *@a: first integer
  *@b: second integer
  *)
  *Return: Result
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - divides two integer
  *@a: first integer
  *@b: second integer
  *)
  *Return: Null or result
  */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  *op_mod - remainder of two integers
  *@a: first integer
  *@b: second integer
  *)
  *Return: result or Null
  */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
