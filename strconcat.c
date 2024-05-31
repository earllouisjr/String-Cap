
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strconcat(char *s1, const char *s2){
	int len1 = 0;
	while (s1[len1]) {					//length of string 1
		len1++;						
	}
	int len2 = 0;							//length of string 2
	while (s2[len2]) {
		len2++;
	}
	for(int j=0; j < len2; j++) {
		s1[j + len1] = s2[j];				//adding string 2 to the end of string 1
	}
	s1[len1 + len2] = '\0';				//setting last character in string to null
										
	return s1;
}

int main(int argc, char **argv){
	char str[100];
	char* newstr = NULL;
	int newlen = 0;
	while (fgets(str, 100, stdin) != NULL) {					//getting input string
		if (strlen(str)) {
			str[strlen(str)-1] = '\0';							//removing \n character
		}
		newlen += strlen(str);
		
		newstr = (char*)realloc(newstr, (newlen + 1)*sizeof(char));			//allocating enough memory for both strings plus 1 character for null
		strconcat(newstr, str);												//calling strconcat
	}
	printf("concatenated strings = %s\n", newstr);		//printing concatenated string
	free(newstr);										//freeing memory where string was		
}
