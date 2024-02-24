#include <iostream>
#include <vector>
#include <utility> // Include for std::pair
using namespace std;

pair<int, int> getFloorAndCeil(vector<int>& a, int x, int n) {
    int low = 0;
    int high = n - 1;
    pair<int, int> result = {-1, -1}; // Initialize both values to -1

    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] <= x) {
            result.first = a[mid]; // Update floor value
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Now, find the ceiling
    low = 0;
    high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] >= x) {
            result.second = a[mid]; // Update ceiling value
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        a.push_back(q);
    }
    int x;
    cin >> x;

    pair<int, int> floorAndCeil = getFloorAndCeil(a, x, n);
    cout << "Floor: " << floorAndCeil.first << endl;
    cout << "Ceiling: " << floorAndCeil.second << endl;

    return 0;
}
