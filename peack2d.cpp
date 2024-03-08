#include <iostream>
#include <vector>
using namespace std;

int max(vector<vector<int>> &mat, int n, int m, int col) {
    int maxValue = -1;
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (mat[i][col] > maxValue) {
            maxValue = mat[i][col];
            index = i;
        }
    }
    return index;
}

pair<int, int> findPeakGrid(vector<vector<int>> &mat) {
    int n = mat.size();
    int m = mat[0].size();
    int low = 0;
    int high = m - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int maxRowIndex = max(mat, n, m, mid);
        int left = mid - 1 >= 0 ? mat[maxRowIndex][mid - 1] : -1;
        int right = mid + 1 < m ? mat[maxRowIndex][mid + 1] : -1;
        if (mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid] > right) {
            return {maxRowIndex, mid};
        }
        if (mat[maxRowIndex][mid] < left) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return {-1, -1};
}

int main() {
    int n, m;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of m: ";
    cin >> m;

    vector<vector<int>> v(n, vector<int>(m));
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    pair<int, int> thePeakValue = findPeakGrid(v);
    cout << "Peak Element Coordinates: (" << thePeakValue.first << ", " << thePeakValue.second << ")\n";

    return 0;
}

    