# Random Numbers Sorting Program in C

## Overview

This program generates **N random integers** in the range [1, 1000] and allows the user to **choose a sorting algorithm** to sort them.  
It displays the array **before and after sorting** and counts the **comparisons and swaps** made during sorting.

---

## Features

- Generates random numbers dynamically based on user input.
- Supports multiple sorting algorithms:
  - Bubble Sort
  - Selection Sort
  - Insertion Sort
  - Merge Sort
- Displays sorting results clearly.
- Tracks number of **comparisons** and **swaps** (for applicable algorithms).

---

## How It Works

1. **Input**
   - User enters the number of random integers `N`.
   - User chooses a sorting algorithm.
2. **Random Number Generation**
   - Numbers in the range [1, 1000] are generated using `rand()`.
3. **Sorting**
   - Depending on choice, the program sorts using the selected algorithm.
   - Counts comparisons and swaps.
4. **Output**
   - Displays array **before sorting**.
   - Displays array **after sorting**.
   - Displays total comparisons and swaps.

---

## Usage

1. Compile the program:
   ```bash
   gcc random_sort.c -o random_sort
