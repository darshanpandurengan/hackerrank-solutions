// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/1d-arrays-in-c/problem?isFullScreen=true
// Problem     1D Arrays in C
// Difficulty  Medium
// Subdomain   Arrays and Strings
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-07-18, 04:49 p.m.
// Technique   vla-summation-loop
// Time        O(n)
// Space       O(n)
// Trick       The code uses a Variable Length Array (VLA) declared as int array[n] to store input values before calculating the sum via a for loop.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n ;
    scanf("%d" , &n)  ;
    int array[n] ;
    int sum = 0 ;
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d",&array[i]);
        sum += array[i] ;
    }
    printf("%d",sum) ;
    return 0;
}
