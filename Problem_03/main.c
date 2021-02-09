#include <stdio.h>

#define ARRAY_SIZE 10
#define STRING_SIZE 12

int main(int argc, char **argv){

  int v[ARRAY_SIZE];
  char string[STRING_SIZE];

  printf ("size of the array: %lu bytes, number of elements of the array = %lu\n",
         sizeof(v), sizeof(v)/sizeof(int));
  printf ("size of the string:%lu bytes, number of elements of the array=%lu\n",
         sizeof(string),sizeof(string)/sizeof(char));
  printf ("length of the string:%lu\n",strlen(string));
  strcpy (string,"Hello Alice");
  printf ("Copy. New size of string:%lu bytes, number of elements of the array=%lu\n",
         sizeof(string),sizeof(string)/sizeof(char));
  printf ("length of the string:%lu\n",strlen(string));

  return 0;
}

