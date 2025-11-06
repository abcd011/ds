#include <stdio.h>

int main() {
    int vertices, i, j;

    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &vertices);

    int adjMatrix[vertices][vertices];

    printf("Enter the adjacency matrix (enter 1 if edge exists, 0 if not):\n");
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            scanf("%d", &adjMatrix[i][j]);
        }
    }

    printf("\nThe adjacency matrix of the graph is:\n");
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            printf("%d ", adjMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

