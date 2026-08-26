#include <stdio.h>
#include <stdlib.h>

char randchar(){
    char returned;
    returned = rand() % 26 + 97;
	return returned;
}
