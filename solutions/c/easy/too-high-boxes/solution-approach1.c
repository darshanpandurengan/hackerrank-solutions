// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/too-high-boxes/problem?isFullScreen=true
// Problem     Boxes through a Tunnel
// Difficulty  Easy
// Subdomain   Structs and Enums
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-07-18, 04:44 p.m.
// Technique   struct-member-access
// Time        O(1)
// Space       O(1)
// Trick       The solution uses a ternary operator to compare the struct member b.height against the constant 41.
// Hint        b.height is accessed directly without pointer dereferencing.
// ──────────────────────────────────────────────────



struct box
{
	/**
	* Define three fields of type int: length, width and height
	*/
    int length , width , height ;
};

typedef struct box box;

int get_volume(box b) {
	/**
	* Return the volume of the box
	*/
    return b.height * b.length * b.width ; 
}

int is_lower_than_max_height(box b) {
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
    return (b.height < 41 ) ? 1 : 0 ;
}

