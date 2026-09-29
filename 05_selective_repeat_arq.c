#include <stdio.h>

int main() {
    int totalFrames, windowsize;
    int ack[100];
    int i;

    printf("Enter total number of Frames: ");
    scanf("%d", &totalFrames);

    printf("Enter window size: ");
    scanf("%d", &windowsize);

    for (i = 1; i <= totalFrames; i++) {
        printf("\nSending Frame %d\n", i);

        printf("ACK received for Frame %d? (1 = Yes, 0 = No): ", i);
        scanf("%d", &ack[i]);

        if (ack[i] == 1) {
            printf("Frame %d Acknowledged.\n", i);
        } else {
            printf("Retransmitting Frame %d...\n", i);

            printf("ACK received after retransmission (1 = Yes): ");
            scanf("%d", &ack[i]);

            if (ack[i] == 1)
                printf("Frame %d successfully received.\n", i);
        }
    }

    printf("\nAll Frames transmitted successfully.\n");

    return 0;
}
