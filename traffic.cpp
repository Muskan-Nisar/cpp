#include <iostream>
#include <vector>
#include <algorithm> // for max
using namespace std;

int traffic(int n, int m, vector<int> vehicle) {
    int left = 0, right = 0, flips_used = 0, max_length = 0;

    while (right < n) {
        if (vehicle[right] == 0) {
            flips_used++;
        }

        while (flips_used > m) {
            if (vehicle[left] == 0) {
                flips_used--;
            }
            left++;
        }

        max_length = max(max_length, right - left + 1);
        right++;
    }

    return max_length;
}

int main() {
    // Example usage:
    vector<int> vehicles = {1, 0, 1, 1, 0, 1, 1, 1, 0, 1};
    int n = vehicles.size();
    int m = 1;
    cout << "Maximum length of consecutive vehicles: " << traffic(n, m, vehicles) << endl;  // Output: 5

    return 0;
}
