(a) Data Structure Definition

In this program, a stack is used to check whether the parentheses in a mathematical expression are balanced.

The stack is implemented using:

#define MAX 100
char stack[MAX];
int top = -1;


stack is a character array to store opening brackets.

top keeps track of the last inserted element.

If top = -1, the stack is empty.

The stack works on the LIFO principle, meaning the last bracket inserted is checked first.

(b) Functions Implemented

push(char ch)
Adds an opening bracket into the stack.

pop()
Removes and returns the top element from the stack.

isMatchingPair(open, close)
Checks if the opening and closing brackets match correctly.

isBalanced(expr[])
Scans the expression:

Pushes opening brackets.

Pops and checks when closing brackets appear.

If stack is empty at the end → Balanced.

Otherwise → Not Balanced.

(c) Organization of main() Function

The main() function:

Takes the expression as input.

Calls isBalanced() to check it.

Prints whether the expression is balanced or not.

It mainly handles input, function calling, and output display.

(d) Sample Output

Input 1:

a + (b − c) ∗ (d


Output:

Expression is NOT Balanced


Input 2:

m + [a − b ∗ (c + d ∗ {m)]


Output:

Expression is NOT Balanced


Input 3:

a + (b − c)


Output:

Expression is Balanced