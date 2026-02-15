#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = ch;
    }
}

char pop() {
    if (top == -1) {
        return '\0';
    } else {
        return stack[top--];
    }
}

int isMatchingPair(char open, char close) {
    if (open == '(' && close == ')')
        return 1;
    if (open == '{' && close == '}')
        return 1;
    if (open == '[' && close == ']')
        return 1;
    return 0;
}

int isBalanced(char expr[]) {
    for (int i = 0; i < strlen(expr); i++) {
        char ch = expr[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        }

        else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1)
                return 0;

            char popped = pop();
            if (!isMatchingPair(popped, ch))
                return 0;
        }
    }

    if (top == -1)
        return 1;
    else
        return 0;
}

int main() {
    char expr[100];

    printf("Enter expression: ");
    fgets(expr, sizeof(expr), stdin);

    if (isBalanced(expr))
        printf("Expression is Balanced\n");
    else
        printf("Expression is NOT Balanced\n");

    return 0;
}
