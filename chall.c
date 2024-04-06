#include <stdio.h>
#include <stdlib.h>

void vulnerable_function() {
	char input[64];

	system("printf \"Hey!  I'll repeat anything you say! \n\"");
	fgets(input, 64, stdin);
	printf(input);
}

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	puts("Howdy!");
	printf("You might find this useful: %x\n", puts);
	while(1) {
		vulnerable_function();
	}
}
