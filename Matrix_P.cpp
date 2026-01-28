#include <bits/stdc++.h>

using namespace std;

long long permutate(int n, int r) {
    long long result {1};

    if (r > n) {
        return n;
    }

    if (r < 0 || n < 0) {
        return -1;
    }

    for (int i = 0; i < r; i++) {
        result = result * (n - i); 
    }

    return result;
}



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
    cout << permutate(10, 3) << "\n";
}