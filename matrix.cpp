#include <bits/stdc++.h>

using namespace std;

class Matrix {
    private:
    int rows, cols;
    vector<vector<int>> mat;

    public:
    Matrix(int rows, int cols) : rows(rows), cols(cols), mat(rows, vector<int>(cols)) {}

    int getCols() const {
        return cols;
    }
};

int main() {
    Matrix A(3, 3);
    cout << A.getCols() << "\n";
}