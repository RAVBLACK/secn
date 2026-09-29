#include <stdio.h>

int main() {
    int n, i = 1, ack;

    printf("Enter the number of frames: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("\nSending Frame %d...\n", i);

        printf("Enter ACK status (1 = received, 0 = lost): ");
        scanf("%d", &ack);

        if (ack == 1) {
            printf("ACK received for frame %d\n", i);
            i++;
        } else {
            printf("ACK lost! Retransmitting Frame %d...\n", i);
        }
    }

    printf("\nAll frames transmitted successfully.\n");

    return 0;
}
