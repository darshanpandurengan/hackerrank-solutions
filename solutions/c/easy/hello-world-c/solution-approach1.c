// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/hello-world-c/problem?isFullScreen=true
// Problem     "Hello World!" in C
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-07-18, 11:47 a.m.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    printf("Hello, World! \n%s" , s) ; 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
