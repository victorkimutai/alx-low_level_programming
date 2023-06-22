#include "main.h"
 /**
  * _isdigit - It check fot the digit
  * @c: carries the digits
  * Return: return 1 for digit or otherwise 0
  */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
