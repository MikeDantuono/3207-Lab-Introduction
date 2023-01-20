#include <stdio.h>
#include <stdlib.h>
#include "random.h"
char randchar(){
	char randomletter = 'A' + (random() % 26);
	return randomletter;
}
