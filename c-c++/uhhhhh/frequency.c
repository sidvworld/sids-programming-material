/* This program reads users' multi-line string inputs and calculates the frequency of each letter.
 * 
 * The program enters a loop prompting the user to:
 * "Input lines of text. Press ENTER on blank line when finished."
 * Using fgets stores inputs into a 2D char array named text with maximum lines
 * 1000 and maximum characters 2000.
 * 
 * Program enters an if statement that checks whether the user has entered
 * an empty line and exit prompting loop.
 * 
 * Program then calculates the frequency of each letter values and stores 
 * frequency number in an integer array called frequency with size 26.
 * 
 * Program then prints alphabet list and each letters' frequency.
 * 
 * Siddharth Ghosh - July 9th 2024 
 * 
 * */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main (void) {
	
	int max_lines = 1000;
	int max_char = 2000;
	char text[max_lines][max_char];
	int lines = 0;
	
	int frequency[26] = {0};
	
	// bool loop = 1;
	
	printf("Input lines of text. Press ENTER on blank line when finished.\n");	
	
	do {
		fgets(text[lines], 1000, stdin);
		
		if (text[lines][0] == '\n' || text[lines][0] == '\r') {
			// loop = 0;

			//for (int i = 0; i < lines; i++) {
				//printf("%s", text[i]);
			//}
			
			for(int i = 0; i < lines; i++){
				for(int j = 0; text[i][j] != '\0'; j++){
					unsigned char character = toupper(text[i][j]);
					
					if (isalpha(character)){
						character -= 'A';
						frequency[character]++;
					}
					
					// int character = (int)text[i][j];
					//if (character > 64 && character < 97){
						//character -= 65;
						//frequency[character]++;
					//}
					//if (character >= 97 && character < 123) {
						//character -= 97;
						//frequency[character]++;
					//}
					
				} 
			}
			
			break;
		}
		lines++;
	} while (1);
	
	 for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'A' + i, frequency[i]);
    }
    
	return 0;
}
