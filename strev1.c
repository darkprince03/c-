#include<stdio.h>
#include<string.h>
void
main ()
{
  char a[100];
  char b[10][100]={'\0'};
  int i = 0, j = 0, k = 0;
  gets (a);
  while (a[i] != '\0')
  {
    if (a[i] == ' ')
      {
	k++;
	i++;
	j = 0;
      }
    if (a[i] != '\0')
      {
	b[k][j++] = a[i++];

      }
  }
  for (i = k; i >= 0; i--){
    printf ("%s ", b[i]);
	}


}
