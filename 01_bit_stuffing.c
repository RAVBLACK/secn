#include <stdio.h>

void bitstuffing(int n, int arr[]) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);

        if (arr[i] == 1) {
            count++;
        } else {
            count = 0;
        }

        if (count == 5) {
            printf("0");
            count = 0;
        }
    }

    printf("\n");
}

int main() {
    int arr[] = {1, 1, 1, 1, 1, 1};

    bitstuffing(6, arr);

    return 0;
}
