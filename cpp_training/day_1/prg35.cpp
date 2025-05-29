#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {

        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars with spaces in between
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "-";
            if (k != 2 * i - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}