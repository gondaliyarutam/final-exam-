 #include <stdio.h>
#include <ctype.h>  

int main()
 {
    char ch;

    
    printf("Enter a single character: ");
    scanf(" %c", &ch); 

    
    if (isalpha(ch))
	 {
        printf("'%c' is an alphabet letter.\n", ch);
    } else if (isdigit(ch))
	 {
        printf("'%c' is a digit.\n", ch);
    } else
	 {
        printf("'%c' is a special character.\n", ch);
    }

    
}
