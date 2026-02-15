# Dijkstra’s Algorithm for Shortest Path in C

## Overview

This program implements **Dijkstra’s algorithm** to find the **shortest path** from a source vertex to all other vertices in a **weighted undirected graph** using an adjacency matrix.

---

## Features

- Finds shortest distance from a given source vertex.
- Works with weighted graphs (positive weights only).
- Uses **adjacency matrix** for graph representation.
- Displays shortest distance for each vertex from the source.

---

## How It Works

1. **Graph Representation**
   - Weighted edges stored in a `graph[MAX][MAX]` matrix.
2. **Algorithm**
   - Initialize distances to all vertices as infinity, except source = 0.
   - Select the unvisited vertex with the smallest distance.
   - Update distances for adjacent vertices.
   - Repeat until all vertices are visited.
3. Output shows **distance from source to all vertices**.

---

## Usage