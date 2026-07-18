// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/functions-in-c/problem?isFullScreen=true
// Problem     Functions in C
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-07-18, 04:53 p.m.
// Technique   nested-ternary-comparison
// Time        O(1)
// Space       O(1)
// Trick       The implementation uses the ternary operator ? : to perform pairwise comparisons to determine the maximum value among four integers.
// Hint        scanf requires address-of operator & for integer arguments.
// ──────────────────────────────────────────────────

#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b,int  c, int  d) {
    
    int temp1 = (a > b ) ? a : b ;
    int temp2 = (c > d) ? c : d ;
    return (temp1 > temp2) ? temp1 : temp2 ; 
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
