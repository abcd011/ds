#include <stdio.h>
#define MAX 10

int main() {
    int graph[MAX][MAX];
    int vertices, edges;
    int i, j, src, dest;

    printf("Enter number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    // Initialize the graph with 0s
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            graph[i][j] = 0;
        }
    }

    printf("Enter edges (source destination):\n");
    for (i = 0; i < edges; i++) {
        scanf("%d %d", &src, &dest);
        graph[src][dest] = 1;   // For directed graph
        graph[dest][src] = 1;   // Comment this line for directed graph
    }

    printf("\nAdjacency Matrix Representation:\n");
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}
