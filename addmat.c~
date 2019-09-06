#include<stdio.h>
void addmat (int a[][3], int b[][3]);
void input (int a[][3]);
void print (int a[][3]);
void
main ()
{
  int i, j, a[3][3], b[3][3];
  printf ("enter matrix A: \n");
  input (a);
  printf ("\nMatrix A :\n");
  print (a);
  printf ("\nenter matrix B: \n");
  input (b);
  printf ("\nMatrix B :\n");
  print (b);
  addmat (a, b);


}

void
input (int a[][3])
{
  int i, j;
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
    }
}

void
print (int a[][3])
{
  int i, j;
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  printf ("%d  ", a[i][j]);
	}
      printf ("\n");
    }
}

void
addmat (int a[][3], int b[][3])
{
  int i, j;
  printf ("\nAddition of Matrix A and B :\n");
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  printf ("%d  ", a[i][j] + b[i][j]);
	}
      printf ("\n");
    }
}
