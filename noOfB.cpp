#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    bool possible(vector<int>& arr, int day, int m, int k) {
        int count = 0;
        int noOfB = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            if (arr[i] <= day) {
                count++;
            } else {
                noOfB = noOfB + (count / k);
                count = 0;
            }
        }

        noOfB = noOfB + (count / k);
        return noOfB >= m;
    }

    int minDays(vector<int>& arr, int m, int k) {
        long long val = k * 1LL * m * 1LL;
        int n = arr.size();

        if (val > n) return -1;

        int low = INT_MAX;
        int high = INT_MIN;

        for (int i = 0; i < n; i++) {
            low = min(low, arr[i]);
            high = max(high, arr[i]);
        }

        while (low <= high) {
            int mid = (low + high) / 2;

            if (possible(arr, mid, m, k)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};

int main() {
    Solution solution;

    // Input from the user
    int n, m, k;
    cout << "Enter the number of flowers: ";
    cin >> n;

    vector<int> flowers(n);
    cout << "Enter the flowers' heights: ";
    for (int i = 0; i < n; i++) {
        cin >> flowers[i];
    }

    cout << "Enter the number of bouquets (m): ";
    cin >> m;

    cout << "Enter the number of consecutive flowers per bouquet (k): ";
    cin >> k;

    int result = solution.minDays(flowers, m, k);

    cout << "Minimum number of days: " << result << endl;

    return 0;
}
