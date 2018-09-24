#include <stdio.h>
#include <stdlib.h>

int is_in_line(int **table, int line, int value)
{
  int c;

  c = 0;

  while(c < 4)
    {
      if(table[line][c] == value)
	return(0);
      c++;
    }
  return(1);
 }

int is_in_col(int **table, int column, int value)
{
  int c;

  c = 0;

  while(c < 4)
    {
      if(table[c][column] == value)
	return(0);
      c++;
    }
  return(1);
}
