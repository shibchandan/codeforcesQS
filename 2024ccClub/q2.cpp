#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100000

int main() {
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--) {
        int n, q; // Number of levels and queries
        scanf("%d %d", &n, &q);

        int strengths[MAX_N];
        for (int i = 0; i < n; i++) {
            scanf("%d", &strengths[i]);
        }

        // Precompute the next valid levels
        int next[MAX_N];
        for (int i = 0; i < n; i++) {
            next[i] = -1; // Default: No next level
        }

        int stack[MAX_N];
        int top = -1;

        // Compute the next greater element using a monotonic stack
        for (int i = n - 1; i >= 0; i--) {
            while (top >= 0 && strengths[stack[top]] <= strengths[i]) {
                top--;
            }
            if (top >= 0) {
                next[i] = stack[top];
            }
            stack[++top] = i;
        }

        // Process queries
        while (q--) {
            int x, y;
            scanf("%d %d", &x, &y);

            // Check if Sahil can reach Supreet's level
            int current = x;
            while (current != -1 && current < y) {
                current = next[current];
            }

            if (current == y) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }

    return 0;
}
