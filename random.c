#include <stdio.h>
#include <stdlib.h>

char randchar(){
    char returned;
    returned = rand() % 26 + 'A';
	return returned;
}
