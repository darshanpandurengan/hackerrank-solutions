// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true
// Problem     Pointers in C
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-07-18, 04:40 p.m.
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
