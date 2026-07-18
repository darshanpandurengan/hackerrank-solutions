// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/students-marks-sum/problem?isFullScreen=true
// Problem     Students Marks Sum
// Difficulty  Easy
// Subdomain   Functions
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-07-18, 04:46 p.m.
// Technique   strided-array-iteration
// Time        O(n)
// Space       O(1)
// Trick       The code uses a ternary operator to set the loop starting index to 0 or 1, then increments by 2 to skip unwanted gender entries.
// Hint        The ternary operator logic assumes gender is strictly 'g' or 'b'.
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

