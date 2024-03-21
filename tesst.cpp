#include <iostream>
#include <vector>

using namespace std;

void printMagicSquare(vector<vector<int>> &magicSquare) {
    for (const auto &row : magicSquare) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

void generateMagicSquare(int N) {
    if (N % 2 == 0) {
        cout << "Vui lòng nhập một số lẻ." << endl;
        return;
    }

    vector<vector<int>> magicSquare(N, vector<int>(N, 0));

    int num = 1;
    int i = 0, j = N / 2;

    while (num <= N * N) {
        magicSquare[i][j] = num;
        num++;
        int newi = (i - 1 + N) % N;
        int newj = (j + 1) % N;
        if (magicSquare[newi][newj]) {
            i++;
        } else {
            i = newi;
            j = newj;
        }
    }

    cout << "Ma trận kì ảo có kích thước " << N << " x " << N << " là:" << endl;
    printMagicSquare(magicSquare);
}

int main() {
    int N;
    cout << "Nhập vào một số nguyên dương lẻ N: ";
    cin >> N;
    generateMagicSquare(N);
    return 0;
}
