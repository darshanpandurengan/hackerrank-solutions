// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/recursion-in-c/problem?isFullScreen=true
// Problem     Calculate the Nth term
// Difficulty  Easy
// Subdomain   Functions
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-07-18, 04:45 p.m.
// Technique   naive-recursive-summation
// Time        O(3^n)
// Space       O(n)
// Trick       The function uses direct recursion to sum the three preceding terms, which is exponentially slower than iterative dynamic programming.
// Hint        find_nth_term causes stack overflow for large n.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  if(n==1) return a ; 
  else if (n==2) return b ; 
  else if (n==3) return c ; 
  else {
    return(find_nth_term(n-1 , a , b , c)+ find_nth_term(n-2 , a , b , c) +
    find_nth_term(n-3 , a , b , c) );
  }
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
