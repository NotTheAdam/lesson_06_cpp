#include <iostream>
#include <climits>
#include <cstdint>
#include <vector>

using namespace std;


void print_vector(const vector<int> &A) {
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << '\t';
    }
    cout << endl;
}

int main() {
    const int N = 5;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        A[i] = i*1000;
    }
    print_vector(A);

    vector<int> B(N);
    for (int i = 0; i < N; i++) {
        B[i] = A[N-1-i]; // для зеракального элемента
    }
    print_vector(B);

    return 0;
}
