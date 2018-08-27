#include <iostream>

int main() {
    int a, b, c, d;
    while (scanf("%d %d %d %d", &a, &b, &c, &d), a) {
        int day = 1;
        double distanceClimbed = b/1.0f;
        double height = 0.0f;
        bool success = false;
        double slidingRate = distanceClimbed * (d/100.0f);

        while (true) {
            if (distanceClimbed > 0)
                height += distanceClimbed;

            if (height > a) {
                success = true;
                break;
            }

            height -= c/1.0f;
            if (height < 0) {
                break;
            }

            distanceClimbed -= slidingRate;

            day++;
        }

        
        printf("%s on day %d\n", success ? "success" : "failure", day);
    }
}