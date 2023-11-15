#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - function that additionate a and b
 * @a: number a
 * @b: number b
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that substract b from a
 * @a: number a
 * @b: number b
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/*
 * op_mul - function that multiplicate a by b
 * @a: number a
 * @b: number b
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divide a by b
 * @a: number a
 * @b: number b
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function that calculates a modulo b
 * @a: number a
 * @b: number b
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
