#include <stdio.h>
#include <stdlib.h>
#include <sodium.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*

Library reference to generate random data
https://doc.libsodium.org/generating_random_data

*/
int main() {
	
	char random_array[32];
	printf("Initializing the library...\r\n");
	if(sodium_init() < 0){
		return -1;
	}
	
	randombytes_buf(random_array,32);                  
	for(int i=0; i < 32; i++){    
	printf("Random number [%i] = %d\r\n",i,random_array[i]);     
	}	
	
	return 0;	
}  
