#include <iostream>
#include <climits>
#include <cstdint>
#include <vector>

using namespace std;

int main() {
    int A[5] = {0, 1, 2, 3, 4};


    for (int i = 0; i < 5; i++) {
        cout << A[i] << '\t';
    }
    cout << endl;

    vector<int> B(10);
    for (int i = 0; i < B.size(); i++) {
        B[i] = i*10;
    }

    for (int i = 0; i < 5; i++) {
        cout << B[i] << '\t';
    }
    cout << endl;

    cout << "Once again B: " << endl;
    for (int x: B) {
        cout << x << '\t';
    }
    cout << endl;

    return 0;
}