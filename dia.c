#include<stdio.h>
void diagonal (int a[][10], int, int);
void input (int a[][10], int, int);
void print (int a[][10], int, int);
void
main ()
{
  int i, j, l, m;
  printf ("enter matrix A dimensions: \n");
  scanf ("%d %d", &l, &m);
  
  int a[10][10];
      printf ("\nenter matrix A: \n");
      input (a, l, m);
      printf ("\nMatrix A :\n");
      print (a, l, m);
	diagonal(a,l,m);
      

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
diagonal (int a[][10], int n, int o)
{
  printf ("\ndiagonals of Matrix A :\n");
  int i, j;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < o; j++)
	{	
		if(i==j)
	  		printf ("%d  ", a[i][j]);
		else if(i+j==n-1)
			printf ("%d  ", a[i][j]);
		else
			printf("   ");
	}
      printf ("\n");
    }
}
