#include <stdio.h>

void incrementByReference(int* integer, int value);

int main(int argc, char **argv)
{
	int number = 10;

    printf ("Number value before= %d \n", number);

    incrementByReference(&number, 10);
    // The memory address is sent and the function resolves the reference
    
    printf ("Number value after= %d \n", number);
}

void incrementByReference(int* integer, int value)
{
    *integer = *integer + value;
    //value is added to the content of the memory position of integer
}


