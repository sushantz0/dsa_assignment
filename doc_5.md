# Undirected Graph Using Adjacency Matrix with BFS & DFS in C

## Overview

This program implements an **undirected graph** using an **adjacency matrix** and demonstrates **BFS (Breadth-First Search)** and **DFS (Depth-First Search)** traversals.

---

## Features

- Represents undirected graphs using an adjacency matrix.
- Supports traversal using:
  - **DFS** – recursively explores nodes depth-wise.
  - **BFS** – iteratively explores nodes level-wise using a queue.
- Works with any number of vertices and edges.
- Demonstrates traversal starting from vertex `0`.

---

## How It Works

1. **Graph Representation**
   - Adjacency matrix `adj[MAX][MAX]` stores 1 if an edge exists between vertices.
2. **DFS Traversal**
   - Recursively visits unvisited adjacent vertices.
   - Prints nodes as they are visited.
3. **BFS Traversal**
   - Uses a queue to visit nodes level by level.
   - Marks nodes visited to avoid revisiting.
4. Input includes the number of vertices, edges, and the list of edges.

---

## Usage


