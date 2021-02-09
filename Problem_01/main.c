#include <stdio.h>
#include <stdlib.h> // for malloc and free
#include <string.h> // for strcpy

int main(int argc, char **argv)
{

    int *x  ;
    int *y  ;
   
    char* string  ;
    
    printf ("Address of the not initialized x variable  %p\n", x); 
     
    printf ("xMalloc of x variable \n");
    
    x = (int*) malloc (sizeof(int));    
    if(x==NULL) {
        perror("Error allocating memory");
        return -1;
        }
    
    printf ("Address of x variable %p\n", x);    
    *x = 4;
    printf ("Content of x variable %d\n", *x);
    
    free(x);
    
    y = (int*) malloc (sizeof(int));    
    if( y == NULL ) {
        perror("Error allocating memory");
        return -1;
        }
        
    printf ("Address of y variable %p\n",y);
    
    printf ("Content of y variable after malloc %d\n",*y);
    
    *y = 5;
    
    printf ("Content of y variable %d\n",*y);
    
    free(y);

    string = (char*) malloc (sizeof(char)*10);   
 
    if(string==NULL) {
        perror("Error allocating memory");
        return -1;
        }
    printf ("Address of string variable %p\n",string);
    
    strcpy(string, "test string");
    
    printf ("Content of string %s\n",string);
    
    free(string);
    
    return 0;
}


