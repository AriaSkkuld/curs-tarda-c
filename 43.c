#include <stdio.h>
 
int main()
{
  int numeros[6], numnum, c, d, canvi;
 
  printf("Quans nombres vols ordenar?\n");
  scanf("%d", &numnum);
 
  printf("Escriu %d nombres\n", numnum);
 
  for (c = 0; c < numnum; c++){
  
    scanf("%d", &numeros[c]);
}
  for (c = 0 ; c < ( numnum - 1 ); c++)
  {
    for (d = 0 ; d < numnum - c - 1; d++)
    {
    //per fer de mes gran a més petit canvia > per <
      if (numeros[d] > numeros[d+1]) 
      {
        canvi = numeros[d];
        numeros[d] = numeros[d+1];
        numeros[d+1] = canvi;
      }
    }
  }
 
  printf("Els nombres en ordre Ascendent son:\n");
 
  for ( c = 0 ; c < numnum ; c++ )
     printf("%d\n", numeros[c]);
 
  return 0;
}
