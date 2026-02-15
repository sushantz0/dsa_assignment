# Balanced Parentheses Checker in C

## Overview

This program checks whether a given mathematical expression has a **balanced number of parentheses**, brackets, and braces.  
It uses a **stack** data structure to verify that every opening bracket has a corresponding closing bracket in the correct order.

---

## Features

- Checks `()`, `{}`, and `[]` brackets.
- Supports any valid mathematical expression.
- Prints whether the expression is **balanced** or **not balanced**.
- Uses **stack operations** (`push`, `pop`) for validation.

---

## How It Works

1. Traverse the expression character by character.
2. If an **opening bracket** is found, push it onto the stack.
3. If a **closing bracket** is found:
   - Pop the top element from the stack.
   - Check if it matches the closing bracket.
4. After traversing the entire expression:
   - If the stack is empty → Expression is **balanced**.
   - If the stack is not empty → Expression is **not balanced**.

---

## Usage

1. Compile the program:
   ```bash
   gcc balanced_parentheses.c -o balanced_parentheses
