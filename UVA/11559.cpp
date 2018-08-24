#include <iostream>

int main() {
    int participantsNumber;
    int budget;
    int hotelsNumber;
    int weeks;

    while (scanf("%d %d %d %d", &participantsNumber, &budget, &hotelsNumber, &weeks) != EOF) {
        int daily;
        int minimumCost = 0;

        while (hotelsNumber--) {
            scanf("%d", &daily);
            int estimatedCost = daily * participantsNumber;
            bool hasRoomAvailable = false;

            for (int i = 0; i < weeks; i++) {
                int numberOfRooms;
                scanf("%d", &numberOfRooms);
                if (numberOfRooms >= participantsNumber) {
                    hasRoomAvailable = true;
                }
            }

            if (minimumCost == 0 && estimatedCost <= budget && hasRoomAvailable) {
                minimumCost = estimatedCost;
            } else if (estimatedCost < minimumCost && hasRoomAvailable) {
                minimumCost = estimatedCost;
            }
        }

        if (minimumCost == 0) {
            printf("stay home\n");
        } else {
            printf("%d\n", minimumCost);
        }
    }

    return 0;
}