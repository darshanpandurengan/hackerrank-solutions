// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/hello-world-c/problem?isFullScreen=true
// Problem     "Hello World!" in C
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-07-18, 11:47 a.m.
// Technique   formatted-io-scan
// Time        O(n)
// Space       O(1)
// Trick       The scanf format specifier %[^
] reads input until a newline character is encountered, effectively capturing the entire line including spaces.
// Hint        scanf format string %[^
] requires manual newline consumption.
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
