#include <iostream>
using namespace std;

int main() {
    int n, num = 1;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
       
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int k = 1; k <= i; k++) {
            cout << num << " ";
            num++;
        }

        cout << endl;
    }

    return 0;
}