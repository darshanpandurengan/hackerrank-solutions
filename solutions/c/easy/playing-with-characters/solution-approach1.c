// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true
// Problem     Playing With Characters
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-07-18, 04:43 p.m.
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
