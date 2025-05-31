/* a number is called an emirp number if we get another prime number by reversing the number itself in other words an emirp number that is prime forwards or backwords it is also know as twisted prime numbers*/
#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}
bool isEmirp(int n) {
    if (!isPrime(n)) return false;
    int reversed = reverseNumber(n);
    return (reversed != n && isPrime(reversed));
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isEmirp(num)) {
        cout << num << " is an Emirp number." << endl;
    } else {
        cout << num << " is not an Emirp number." << endl;
    }

    return 0;
}