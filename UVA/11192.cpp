#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    while (scanf("%d", &n), n) {
        getline(cin, s);
        s = s.substr(1);
        int index = s.size()/n;
        for (int i = index-1; i < s.size();) {
            printf("%c", s[i]);
            if (i == 0 || i % index == 0) {
                i += (2*index)-1; 
            } else {
                i--;
            }
        }

        printf("\n");
    }

    return 0;
}
