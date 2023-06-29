#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
  int i;
  int sum_diag1 = 0;
  int sum_diag2 = 0;

  for (i = 0; i < size; i++)
  {
    sum_diag1 += *(a + i * size + i);      /* Add elements from the first diagonal */
    sum_diag2 += *(a + i * size + size - 1 - i);  /* Add elements from the second diagonal */
  }

  printf("Sum of the first diagonal: %d\n", sum_diag1);
  printf("Sum of the second diagonal: %d\n", sum_diag2);
}
