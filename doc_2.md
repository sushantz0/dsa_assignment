# Infix to Postfix Conversion and Evaluation in C

## Overview

This program converts a given **infix mathematical expression** (like `3+5*2`) to a **postfix expression** (like `352*+`) and then **evaluates the postfix expression** to calculate the result.  
It uses a **stack** to manage operators and operands efficiently.

---

## Features

- Converts infix expressions with `+`, `-`, `*`, `/` operators to postfix notation.
- Evaluates the postfix expression to produce the correct numerical result.
- Handles operator precedence and parentheses.
- Uses **stack operations** for both conversion and evaluation.

---

## How It Works

### Infix to Postfix Conversion

1. Traverse the infix expression character by character.
2. If an operand (number) is found → add it to postfix expression.
3. If an operator is found → push it onto the stack based on precedence.
4. If `(` → push to stack; if `)` → pop from stack until `(` is found.
5. At the end, pop all remaining operators from the stack to postfix.

### Postfix Evaluation

1. Traverse the postfix expression.
2. If an operand is found → push it to a stack.
3. If an operator is found → pop two operands from the stack, perform the operation, and push the result back.
4. The final value in the stack is the evaluated result.

---

## Usage

