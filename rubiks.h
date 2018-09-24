#ifndef _RUBIKS_H_
#define _RUBIKS_H_

#include <stdio.h>
#include <stdlib.h>

void algo_line(int **table, int line);
void algo_column(int **table, int column);
void algo_square(int **table, int square);
void algo_line_reverse(int **table, int line);
void algo_column_reverse(int **table, int column);
void algo_square_reverse(int **table, int square);
int is_in_line(int **table, int line, int value);
int is_in_col(int **table, int column, int value);

#endif
