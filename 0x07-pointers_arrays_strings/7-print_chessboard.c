#include "holberton.h"
#include "main.h"
/**
 * print_chessboard - this is what the main function does
 * @a: variable
 * Return: this is what's supposed to be returned to main
 */


void print_chessboard(char (*a)[8])



{

  int rows = 8;
  int const columns = 8;

  int chesss[ ] [columns] = {
			     {r, k, b, q, k, b, k, r},
			     {p, p, p, p, p, p, p, p},
			     {" ", " ", " ", " ", " ", " ", " ", " ",}
			     {" ", " ", " ", " ", " ", " ", " ", " ",}
			     {" ", " ", " ", " ", " ", " ", " ", " ",}
			     {" ", " ", " ", " ", " ", " ", " ", " ",}
			     {P, P, P, P, P, P, P, P}
			     {R, K, B, Q, K, B, K, R}
			     
  };

  for(int i = 0; i < rows; i++)
    {
      for (int j = 0; j < columns; j++)
	{
	  printf("%d ", chesss[i][j];
		 }
	    printf("\n");
	}

	return (0);


}
