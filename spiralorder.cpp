#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {

    vector<int> ans;

    int startRow = 0;
    int endRow = matrix.size() - 1;

    int startCol = 0;
    int endCol = matrix[0].size() - 1;

    while (startRow <= endRow && startCol <= endCol) {

        // 1. Left -> Right
        for (int i = startCol; i <= endCol; i++) {
            ans.push_back(matrix[startRow][i]);
        }
        startRow++;

        // 2. Top -> Bottom
        for (int i = startRow; i <= endRow; i++) {
            ans.push_back(matrix[i][endCol]);
        }
        endCol--;

        // 3. Right -> Left
        if (startRow <= endRow) {
            for (int i = endCol; i >= startCol; i--) {
                ans.push_back(matrix[endRow][i]);
            }
            endRow--;
        }

        // 4. Bottom -> Top
        if (startCol <= endCol) {
            for (int i = endRow; i >= startRow; i--) {
                ans.push_back(matrix[i][startCol]);
            }
            startCol++;
        }
    }

    return ans;
}

int main() {

    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12},
        {13,14,15,16}
    };

    vector<int> result = spiralOrder(matrix);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}