#include <stdio.h>
#include <stdlib>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (sucess)
 */

int check _num(char *str)

{
/*Declaring variables*/
unsigned int count;

count = 0;
while (count < strlen(str)) /*count string*/

{
if (!isdigit(str[count])) /*check if str there are digit */
{
return (0);
}

count++;
}
return (1);
}


