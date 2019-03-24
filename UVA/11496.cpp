#include <bits/stdc++.h>

using namespace std;

int main() {
    long n;

    while(scanf("%ld", &n), n) {
        long array[10020] = {};

        int i = 0;
        int k = n;
        while (k--) {
            long value;
            scanf("%ld", &value);
            array[i++] = value;
        }

        long peaks = 0;
        for (i = 1; i <= n; i++) {
            int previousIndex = i - 1;
            int index = i % n;
            int afterIndex = (i + 1) % n;
            if (array[previousIndex] < array[index] && array[afterIndex] < array[index]) {
                peaks++;
            } else if (array[previousIndex] > array[index] && array[afterIndex] > array[index]) {
                peaks++;
            }
        }
        cout << peaks << endl;
    }
}
