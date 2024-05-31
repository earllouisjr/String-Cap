#include <stdio.h>
int main(int argc, char **argv){
	char *str = argv[1];
	int length;
	for (; str[length] != 0; length++){
	}
	printf("The length of the string is %d\n", length);
	
	for (int i=0; i < length; i++){
		if ((str[i] >= 'a') && (str[i] <= 'z')){
			*(str + i) -= 0x20;
		}
	}
	printf("The capitalized string is %s\n", str);
}