# Min and Max Heap Construction in C

## Overview

This program builds **min heap** and **max heap** from an unsorted array.  
A **heap** is a complete binary tree where:  
- **Max Heap**: Parent is greater than or equal to its children.  
- **Min Heap**: Parent is less than or equal to its children.

---

## Features

- Builds both min and max heap from a given unsorted array.
- Uses **heapify operations** to maintain heap property.
- Prints both heaps for verification.
- Works for arrays of any size.

---

## How It Works

1. **Heapify Functions**
   - `maxHeapify()` ensures max heap property at a node.
   - `minHeapify()` ensures min heap property at a node.
2. **Build Heap**
   - Start from last non-leaf node and apply heapify up to root.
   - `buildMaxHeap()` constructs the max heap.
   - `buildMinHeap()` constructs the min heap.
3. **Print Array**
   - Displays the heap as an array.

---

## Usage
