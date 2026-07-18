// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true
// Problem     Playing With Characters
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-07-18, 04:43 p.m.
// Technique   formatted-io-streams
// Time        O(N)
// Space       O(1)
// Trick       The code uses fgets to capture the full sentence including spaces after scanf leaves a newline character in the buffer.
// Hint        scanf %s stops at whitespace, unlike fgets.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c ; 
    scanf("%c", &c);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char s[100] ;
    scanf("%s" , &s) ;
    getchar();  
    char sen[100] ;
    fgets(sen, sizeof(sen), stdin);
    printf("%c\n" , c) ;
    printf("%s\n" , s) ;
    printf("%s" , sen ) ;
    return 0;
}
