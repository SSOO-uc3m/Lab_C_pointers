#include <stdio.h>

void swap (int *x, int *y);
void XorSwap(int *x, int *y); 

int main(int argc, char **argv){

  int a=3, b=5;
  printf ("a = %d, b = %d\n", a, b );  //Has to print: a = 3, b = 5
  XorSwap (&a,&b);
  printf ("swapped a = %d, b = %d\n", a, b );  //Has to print: swapped a = 5, b = 3
}


  void swap (int *x, int *y) {
  int r;
  r=*x;
  *x=*y;
  *y=r;
}

  void XorSwap(int *x, int *y) {
  if (x != y)
  {
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
  }
}