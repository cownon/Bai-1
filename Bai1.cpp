#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Nhập ba số từ người dùng
    cin >> a >> b >> c;

    // Tìm số lớn nhất trong ba số
    int max_number = max(a, max(b, c));

    // In ra số lớn nhất
    cout << max_number;

    return 0;
}
