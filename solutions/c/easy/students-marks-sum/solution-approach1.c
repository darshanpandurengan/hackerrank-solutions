// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/students-marks-sum/problem?isFullScreen=true
// Problem     Students Marks Sum
// Difficulty  Easy
// Subdomain   Functions
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-07-18, 04:46 p.m.
// ──────────────────────────────────────────────────



//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
    int counter = (gender == 'g') ? 1 : 0 ;
    int result = 0 ;  
    for (int i = counter ; i < number_of_students ; i += 2  ){
        result += marks[i] ;
    }
    return result ;

}

