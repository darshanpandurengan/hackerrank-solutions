// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true
// Problem     Pointers in C
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-07-18, 04:40 p.m.
// Technique   pointer-dereference-arithmetic
// Time        O(1)
// Space       O(1)
// Trick       The code uses the ternary operator to calculate the absolute difference between dereferenced pointers *a and *b without using math.h.
// ──────────────────────────────────────────────────

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function   
    printf("%d\n" , (*a + *b)) ;
    printf("%d" , ((*a > *b) ? (*a - *b) : (*b - *a)) ) ; 
     
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    //printf("%d\n%d", a, b);

    return 0;
}
