/* Q14: Vowel or consonant */
#include <stdio.h>
#include <ctype.h>
int main(){ char c; printf("Enter an alphabet: "); scanf(" %c",&c); c=tolower((unsigned char)c); if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') printf("Vowel\n"); else if(c>='a'&&c<='z') printf("Consonant\n"); else printf("Not an alphabet\n"); return 0; }
