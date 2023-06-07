#include <stdio.h>
#include <limits.h>

#define INF INT_MAX
#define N 6
#define M 8

int min(int a, int b) {
    return (a < b) ? a : b;
}

void multiStageGraph(int cost[N][N], int dist[N], int path[N]) {
    int i, j;

    // Calculate the minimum cost from the last stage to the destination
    dist[N - 1] = 0;

    // Calculate the mInimum cost and path for each stage from right to left
    for (i = N - 2; i >= 0; i--) {
        dist[i] = INF;

        for (j = i; j < N; j++) {
            if (cost[i][j] != INF && dist[j] + cost[i][j] < dist[i]) {
                dist[i] = dist[j] + cost[i][j];
                path[i] = j;
            }
        }
    }
}

int main() {
    int cost[N][N] = {
        {INF, 1, 2, 5, INF, INF},
        {INF, INF, INF, INF, 4, 11},
        {INF, INF, INF, INF, 9, 5},
        {INF, INF, INF, INF, INF, 1},
        {INF, INF, INF, INF, INF, INF},
        {INF, INF, INF, INF, INF, INF}
    };

    int dist[N];
    int path[N];

    multiStageGraph(cost, dist, path);

    printf("Minimum cost: %d\n", dist[0]);
    printf("Path: 1");
    int next = path[0] + 1;

    while (next != N) {
        printf(" -> %d", next);
        next = path[next] + 1;
    }

    return 0;
}
