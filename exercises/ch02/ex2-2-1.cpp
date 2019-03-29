#include <bits/stdc++.h>

using namespace std;

/* Suppose you are given an unsorted array S of n integers. Solve each
 * of the following tasks below with the best possible algorithms that you can think of and
 * analyze their time complexities. Let's assume the following constraints: 1 <= n <= 100K so
 * that O(n^2) solutions are theoretically infeasible in a contest environment.
 */

// Determine if S contains one or more pairs of duplicate integers.
bool answer1(vector<int> s) {
    if (s.size() <= 1) return false;
    sort(s.begin(), s.end());
    
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) return true;
    }

    return false;
}

// Given an integer v, find two integers a,b E S such that a + b = v.
pair<int, int> answer2(vector<int> s, int v) {
    sort(s.begin(), s.end());

    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        if (s[left] + s[right] == v) return make_pair(left, right);
        else if (s[left] + s[right] < v) left++;
        else right++;
    }

    return make_pair(-1, -1);
}

pair<int, int> answer2x2(vector<int> s, int v) {
    unordered_map<int, int> visited;
    
    for (int i = 0; i < s.size(); i++) {
        int n = s[i];
        if (visited[v - n] != 0) {
            return make_pair(visited[v - n] - 1, i);
        } else {
            visited[n] = i+1; // 0 is a valid index so sum 1 to be able to check for uninitialized value
        }
    }

    return make_pair(-1, -1);
}

// Follow-up to Question 2: what if the given array S is already sorted?
pair<int, int> answer3(vector<int> s, int v) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        if (s[left] + s[right] == v) return make_pair(left, right);
        else if (s[left] + s[right] < v) left++;
        else right++;
    }

    return make_pair(-1, -1);
}

// Print the integers in S that fall between a range [a...b] (inclusive) in sorted order
void answer4(vector<int> s, int a, int b) {
    if ((a < 0 || b < 0) || (a + b >= s.size())) return;
    sort(s.begin()+a, s.begin()+b);
}

// Determine the length of the longest increasing contiguous sub-array in S.
int answer5(vector<int> s) {
    if (s.size() <= 1) return s.size();
    int length = 0;
    int actual = 0;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] > s[i-1]) actual++;
        else {
            actual = 0;
            length = max(length, actual);
        }
    }

    return length;
}

// Determine the median (50th percentile) of S. Assume that n is odd.
int answer6(vector<int> s) {
    sort(s.begin(), s.end());
    return s[s.size()/2];
}
