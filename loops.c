#include <stdio.h>

int main(){
	int i;
	//declare & initialize
	int marks[7] = {10,20,30,40,50,60,70};
	
	//Loops, for loops
	//for(start;stop;step)
    for(i = 0; i < 7; i++) {
    	printf("%d\n", marks[i]);
    }
	

	return 0;
}