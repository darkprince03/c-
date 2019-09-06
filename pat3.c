#include<stdio.h>
void
main ()
{
  int a, i, j;
  printf ("Enter number of lines: ");
  scanf ("%d", &a);

  for (i = a; i >= 1; i--)
    {
      for (j = 1; j < i; j++)
	{
	  printf (" ");
	}
      for (j = i; j <= a; j++)
	{
	  printf ("*");
	}

      printf ("\n");
    }
}
