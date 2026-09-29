#include <stdio.h>
#include <string.h>

int main() {
    char data[20][20], stuffed[40][20], unstuffed[20][20];
    int n, i, j = 0, k = 0;

    printf("Enter number of data items: ");
    scanf("%d", &n);

    printf("Enter data items: ");
    for (i = 0; i < n; i++)
        scanf("%s", data[i]);

    for (i = 0; i < n; i++) {
        if (strcmp(data[i], "FLAG") == 0 ||
            strcmp(data[i], "ESC") == 0) {
            strcpy(stuffed[j++], "ESC");
        }

        strcpy(stuffed[j++], data[i]);
    }

    printf("\n...sending frame...\n");
    printf("FLAG | HEADER | ");

    for (i = 0; i < j; i++) {
        if (strcmp(stuffed[i], "ESC") == 0 &&
            (strcmp(stuffed[i + 1], "FLAG") == 0 ||
             strcmp(stuffed[i + 1], "ESC") == 0)) {
            continue;
        }

        strcpy(unstuffed[k++], stuffed[i]);
    }

    printf("\nData after unstuffing:\n");

    for (i = 0; i < k; i++)
        printf("%s ", unstuffed[i]);

    printf("\n");

    return 0;
}
