// graph.c
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int graph[n][n];

    printf("Enter adjacency matrix (%dx%d):\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("\nAdjacency Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}






































































































// Graph (Adjacency Matrix)
// Aim:
// To generate and display a Graph using an adjacency matrix.

// Theory:
// A graph is a set of vertices connected by edges.
// An adjacency matrix is a 2D array where:
// matrix[i][j] = 1 if there is an edge between vertex i and j, else 0.

// Types of Graphs:

// Directed: Edges have direction (A → B).

// Undirected: Edges have no direction (A — B).

// Weighted: Edges have weights or costs.

// Adjacency Matrix:
// A 2D array G[V][V] where:

// G[i][j] = 1 if there’s an edge from vertex i to j.

// G[i][j] = 0 otherwise.
//    0  1  2
// 0 [0, 1, 0]
// 1 [1, 0, 1]
// 2 [0, 1, 0]


// Algorithm:
// Start.

// Input number of vertices (n).

// Create an n × n matrix.

// For each pair (i, j):

// Input 1 if edge exists, else 0.

// Display matrix.

// Stop.