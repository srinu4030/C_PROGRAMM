/* Define a self-referential structure to represent a binary tree node. Each node should have data (inte
ger) and pointers to left and right child nodes. */

struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};


/*data → stores an integer value

left → pointer to the left child

right → pointer to the right child

The structure refers to itself using pointers → self-referential structure*/