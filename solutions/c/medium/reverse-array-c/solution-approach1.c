// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/reverse-array-c/problem?isFullScreen=true
// Problem     Array Reversal
// Difficulty  Medium
// Subdomain   Arrays and Strings
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-07-18, 04:42 p.m.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    for(int i = 0 ; i < num / 2 ; i++){
        arr[i] = arr[i] + arr[num - i - 1] ;
        arr[num - i - 1 ] = arr[i] - arr[num - i - 1] ;
        arr[i] = arr[i] - arr[num - i - 1] ;
        
        
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
