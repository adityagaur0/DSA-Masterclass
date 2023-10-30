#include <iostream>
using namespace std;

int fibbo(int p) {
    if (p == 0 || p == 1) {
        return p;
    }
    int i = 2;
    int a = 0;
    int b = 1;
    int c;
    while (i < p) {
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    return c;
}

void pattern8(int n) {
    int num = 0; // Initialize num to the first Fibonacci number (F(0) = 0)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << fibbo(num) << " ";
            num++; // Move to the next Fibonacci number
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the pattern: ";
    cin >> n;
    pattern8(n);
    return 0;
}
