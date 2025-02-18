#include <iostream>
using namespace std;

int saveThePrisoner(int n, int m, int s) {
    // Calculate the last candy's position using modulo arithmetic
    int last_position = (s - 1 + m - 1) % n;
    // Return the position in 1-based indexing
    return last_position + 1;
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n, m, s;
        cin >> n >> m >> s;
        cout << saveThePrisoner(n, m, s) << endl;
    }
    return 0;
}
