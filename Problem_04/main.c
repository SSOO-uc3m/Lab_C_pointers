#include <stdio.h>

int *readArray( int *numE);
void reverseList (int *v, int nume);
  
int main(int argc, char **argv){
  int numElements;
  int *v;
  
  v= readArray(&numElements);
  reverseList(v, numElements);
}
  

int *readArray( int *numE){
  int i, *v;
  printf("How many items do you want to enter:");
  scanf ("%d",numE);
  v=(int *) malloc (*numE * sizeof(int) );
  for (i=0; i<*numE; i++){
    printf ("Enter item position %d : ",i);
    /*  This is the alternative way to read with with pointer arithmetic : scanf ("%d",(v+i)); */
    scanf ("%d",&v[i]);
  }
  return v;
}

void reverseList (int *v, int nume){
  int i;
  for (i=nume-1; i>= 0; i--)
    /* This is the alternative way to read with with pointer arithmetic :
       printf ("posicion %d, valor=%d\n", i, *(v+i)); */
    printf ("position %d, value=%d\n", i, v[i]);
}
