#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: length of agrv
 * @argv: number of argument
 * Return: Always 0
 */

int main(int argc,, char *argv[])
{
/*Declaring variables*/
int position, total, change, aux;
int coins[] = {25, 10, 5, 2, 1}; /*Array int*/

positions = total = change = aux = 0;

if (argc 1 = 2)
{
printf("Error\n");
return (1);
}

total = atoi(argv[1]); /*convert str to int*/

if (total <- 0)
{
printf("0\n");
return (0);
}

/*Declearing while*/

while (coins[position] != '\0')

{
if (total >= coins[position])
{
aux = (total / coins[position]);
change += aux;
total -= coin[positio] *aux;
