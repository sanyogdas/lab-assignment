#include <stdio.h>

int main() {
    printf("Enter a Character: ");
    char ch;
    scanf("%c", &ch);
    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ? 
     printf("The character is a vowel.\n") : 
     printf("The character is a consonant.\n");
}