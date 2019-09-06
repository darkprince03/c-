#include<stdio.h>
void mulmat (int a[][10], int b[][10], int, int, int, int);
void input (int a[][10], int, int);
void print (int a[][10], int, int);
void
main ()
{
  int i, j, l, m, n, o;
  printf ("enter matrix A dimensions: \n");
  scanf ("%d %d", &l, &m);
  printf ("\nenter matrix B dimensions: \n");
  scanf ("%d %d", &n, &o);
  int a[10][10], b[10][10];
  if (m == n)
    {
      printf ("\nenter matrix A: \n");
      input (a, l, m);
      printf ("\nenter matrix B: \n");
      input (b, n, o);
      printf ("\nMatrix A :\n");
      print (a, l, m);
      printf ("\nMatrix B :\n");
      print (b, n, o);
      mulmat (a, b, l, m, n, o);
    }
  else
    {
      printf ("Matrix Multiplication not possible.");
    }


}

void
input (int a[][10], int q, int w)
{
  int i, j;
  for (i = 0; i < q; i++)
    {
      for (j = 0; j < w; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
    }
}

void
print (int a[][10], int q, int w)
{
  int i, j;
  for (i = 0; i < q; i++)
    {
      for (j = 0; j < w; j++)
	{
	  printf ("%d  ", a[i][j]);
	}
      printf ("\n");
    }
}

void
mulmat (int a[][10], int b[][10], int l, int m, int n, int o)
{
  int i, j, k;
  int mult[10][10] = { 0 };
  printf ("\nMultipication of Matrix A and B :\n");
  for (i = 0; i < l; ++i)
    {
      for (j = 0; j < o; ++j)
	{
	  for (k = 0; k < m; ++k)
	    {
	      mult[i][j] += a[i][k] * b[k][j];
	    }
	}
    }
  print (mult, l, o);
}
