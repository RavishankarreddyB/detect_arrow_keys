#include <stdio.h>

int main() {
int ch, prev_char=0;
while ( ( ch = getchar() ) != 'q' ) {
	
	if (ch == 'A' && prev_char == '[')
		printf("up arrow\n");
	else if (ch == 'B' && prev_char == '[')
		printf("down arrow\n");
	else if (ch == 'C' && prev_char == '[')
		printf("right arrow\n");
	else if (ch == 'D' && prev_char == '[')
		printf("left arrow\n");
	else 
		printf("entered character is %c\n", ch);
	prev_char=ch;
}
return 0;
}
