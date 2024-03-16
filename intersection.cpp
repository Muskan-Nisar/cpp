#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> intersection(vector<int> &arr1, int n, vector<int> &arr2, int m) {
    vector<int> result;
    
    // Sort the arrays to simplify intersection check
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            // If the elements match, add it to the result
            result.push_back(arr1[i]);
            // Move both pointers forward to find the next potential intersection
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            // If the element in arr1 is smaller, move its pointer forward
            i++;
        } else {
            // If the element in arr2 is smaller, move its pointer forward
            j++;
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int m;
    cin >> m;
    vector<int> arr1(m);
    for (int i = 0; i < m; i++) {
        cin >> arr1[i];
    }
    
    vector<int> ans = intersection(arr, n, arr1, m);
    for (int element : ans) {
        cout << element << " ";
    }
    return 0;
}
