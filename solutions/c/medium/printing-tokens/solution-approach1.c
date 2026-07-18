// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/printing-tokens-/problem?isFullScreen=true
// Problem     Printing Tokens
// Difficulty  Medium
// Subdomain   Arrays and Strings
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-07-18, 04:48 p.m.
// Technique   char-iteration-scan
// Time        O(n)
// Space       O(n)
// Trick       The code uses a single loop to iterate through the string and replaces every space character with a newline using printf.
// Hint        scanf %[^
] stops at the first newline character.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for(int i = 0 ; s[i] != '\0' ; i++ )
    {
        if (s[i] == ' ')
        {
            printf("\n") ;
        }
        else 
        {
            printf("%c" , s[i]) ;
        }
    }
    return 0;
}
