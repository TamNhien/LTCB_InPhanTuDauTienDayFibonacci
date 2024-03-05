#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c;

    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    cout << "Cac phan tu dau tien cua day Fibonacci la: ";

    for (int i = 0; i < n; ++i) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
