#include <stdio.h>
#include <stdlib.h>
#include "rubiks.h"
#define PRINT_SQUARE_DEBUG__ 1

int **allocation_memoire() // Allocation de la mémoire pour le tableau qui contiendra 4 lignes et colonnes
{
  int i;
  int **table;
  i=0;
  table = malloc(5*sizeof(int *)); //j'alloue les colonnes dont une vide pour qu'il comprenne que c'est un *int et pas un int
  while (i<4)
    {
      table[i] = malloc(4*sizeof(int)); //j'alloue les lignes. No need une vide car il sait déjà où s'arreter. Valable pour les int mais pas les char*
      i++;
    }
  table[4]=NULL; //optionnel pour eviter les erreurs mon dernier élément est nul.
  return(table);
}

void init_table(int **table) // Initialisation du tableau
{
  table[0][0]= 0;
  table[0][1]= 0;
  table[0][2]= 1;
  table[0][3]= 1;
  table[1][0]= 0; 
  table[1][1]= 0;
  table[1][2]= 1;
  table[1][3]= 1;
  table[2][0]= 2;
  table[2][1]= 2;
  table[2][2]= 3;
  table[2][3]= 3;
  table[3][0]= 2;
  table[3][1]= 2;
  table[3][2]= 3;
  table[3][3]= 3;  
}

void print_tab(int **table) // affichage du tableau 
{
  int i;
  i = 0;

  while (i < 4) // on affiche (tant que i n'atteint pas 4)
    {
      printf("—————————\n");
      printf("|%d|%d|%d|%d|\n",table[i][0],table[i][1],table[i][2],table[i][3]);
      i++;
    }
  printf("—————————\n");
}
 

int main()
{
  int i;
  int **table;
  table = allocation_memoire(); // on alloue la memoire pour le tableau
  init_table(table); //on initialise le tableau
  print_tab(table);
  printf("Rotate Left Line 0.\n");
  algo_line(table,0);
  print_tab(table);
  printf("Rotate Top column 0.\n");
  algo_column(table,0);
  print_tab(table);
  printf("Rotate Clockwise square 0.\n");
  algo_square(table,0);
  print_tab(table);
  printf("Rotate Counter Clockwise square 0.\n");
  algo_square_reverse(table, 0);
  print_tab(table);
  printf("Rotate Down column 0.\n");
  algo_column_reverse(table, 0);
  print_tab(table);  
  printf("Rotate Right line 0.\n");
  algo_line_reverse(table,0);
  print_tab(table); // on l'affiche
  printf("%d - %d\n" , is_in_line(table, 0, 1), is_in_col(table, 2, 3));
  printf("%d - %d\n" , is_in_line(table, 3, 1), is_in_col(table, 2, 0));
  printf("BRAVO\n");
  i=0;
  
  while (i<4)
    {
      free(table[i]); // on libère une ligne
      i++;
    }
  free(table); // je libère tout le tableau
}

