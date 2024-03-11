#include <iostream>
#include <vector>

using namespace std;

void rotateArrayLeft(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;

    // Create a temporary vector to store the rotated elements
    vector<int> temp(k);

    // Copy the first k elements to the temporary vector
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    // Copy the elements from the temporary vector to the end
    for (int i = n - k; i < n; i++) {
        arr[i] = temp[i - (n - k)];
    }
}

int main() {
    // Example array
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    // Number of positions to rotate
    int k = 3;

    // Display the original array
    cout << "Original Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Rotate the array to the left by k positions
    rotateArrayLeft(arr, k);

    // Display the rotated array
    cout << "Rotated Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
