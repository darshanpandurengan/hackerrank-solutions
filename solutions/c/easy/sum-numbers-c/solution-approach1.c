// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true
// Problem     Sum and Difference of Two Numbers
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-07-18, 04:27 p.m.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a , b ; 
    float c , d ; 
    scanf("%d %d" , &a , &b) ; //Getting input for integer
    scanf("%f %f" , &c , &d) ;  //Getting input for float
    printf("%d %d" ,a + b , a - b) ; // Given that a > b 
    printf("\n%.1f %.1f" , c + d , c - d) ;// Given that c > d
    return 0;
}
