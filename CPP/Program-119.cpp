#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cin >> rows >> cols;
    int mat1[100][100], mat2[100][100], sum[100][100];
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> mat1[i][j];
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> mat2[i][j];
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            sum[i][j] = mat1[i][j] + mat2[i][j];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << sum[i][j] << " ";
        cout << endl;
    }
    return 0;
}