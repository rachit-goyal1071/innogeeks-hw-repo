#include <stdio.h>

int main ()
{
  int i, j, k=0,l=1, n;
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)
    {
      for (j = 1; j <= i; j++)
	{
	  if((i+j)%2==0)
	  {
	     printf("%d ",l);
	  }
	  else if((i+j)%2!=0)
	  {
	     printf("%d ",k);
	  }

	}
      printf ("\n");
    }
  return 0;
}
