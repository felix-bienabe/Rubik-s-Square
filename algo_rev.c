#include <stdio.h>
#include <stdlib.h>

void algo_line_reverse(int **table, int line)
{
  int tmp;
  tmp = table[line][0];
  table[line][0] = table[line][3];
  table[line][3] = table[line][2];
  table[line][2] = table[line][1];
  table[line][1] = tmp;
}

void algo_column_reverse(int **table, int column)
{
  int tmp;
  tmp = table[0][column];
  table[0][column] = table[3][column];
  table[3][column] = table[2][column];
  table[2][column] = table[1][column];
  table[1][column] = tmp;
}

void algo_square_reverse(int **table, int square)
{
  int tmp;

  if(square == 0)
    {
  tmp = table[0][0];
  table[0][0] = table[0][1];
  table[0][1] = table[1][1];
  table[1][1] = table[1][0];
  table[1][0] = tmp;
    }
  else if (square == 1) 
    {
  tmp = table[0][2];
  table[0][2] = table[0][3];
  table[0][3] = table[1][3];
  table[1][3] = table[1][2];
  table[1][2] = tmp;
    }
  else if(square == 2)
    {
  tmp = table[2][0];
  table[2][0] = table[2][1];
  table[2][1] = table[3][1];
  table[3][1] = table[3][0];
  table[3][0] = tmp;
    }

  else if(square == 3)
    {
  tmp = table[2][2];
  table[2][2] = table[2][3];
  table[2][3] = table[3][3];
  table[3][3] = table[3][2];
  table[3][2] = tmp;
    }
}
