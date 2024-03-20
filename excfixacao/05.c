#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int i, j;
  int m, n;
  int **mat;

  srand(time(NULL));
  
  printf("Entre com as dimensoes da matriz: ");
  scanf("%d%d", &m, &n);
  
  if((mat = (int **) calloc(m,sizeof(int *))) == NULL) {
    printf("Nao foi possivel alocar memoria...\n");
    exit(1);
  }
  for(i = 0; i < m; i++) {
    if((mat[i] = (int *) calloc(n,sizeof(int))) == NULL) {
      printf("Nao foi possivel alocar memoria...\n");
      exit(1);
    }
  }
  
  for(i = 0; i < m; i++) {
    for(j = 0; j < n; j++) {
      mat[i][j] = rand();
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  
  for(i = 0; i < m; i++) {
    free(mat[i]);
  }
  free(mat);
  mat = NULL;
  
  return 0;
}