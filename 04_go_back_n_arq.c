#include <stdio.h>

int main() {
    int totalFrames, windowsize;
    int i, ack, frame = 1;

    printf("Enter total number of Frames: ");
    scanf("%d", &totalFrames);

    printf("Enter window size: ");
    scanf("%d", &windowsize);

    while (frame <= totalFrames) {
        printf("\nSending Frames: ");

        for (i = frame;
             i < frame + windowsize && i <= totalFrames;
             i++) {
            printf("%d ", i);
        }

        printf("\nEnter last ACK received (0 if ACK lost): ");
        scanf("%d", &ack);

        if (ack >= frame) {
            frame = ack + 1;
        } else {
            printf("Timeout! Retransmitting from Frame %d\n", frame);
        }
    }

    printf("\nAll Frames transmitted successfully.\n");

    return 0;
}
