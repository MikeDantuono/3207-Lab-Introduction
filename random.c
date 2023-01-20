#include <stdio.h>
#include <stdlib.h>
#include "random.h"

char randchar(){
	char letter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[random () % 26]; 
	return letter;
}
