#include <iostream>
using namespace std;
int main()
{
    int n, m, a;
    cout << "Nhập n, m, a: ";
    cin >> n >> m >> a;
    long long kichthuocsan = n * m;
    cout << "Kích thước quảng trường là: " << kichthuocsan << endl;
    long long kichthuocgach = a * a;
    cout << "Kích thước phiến đá là: " << kichthuocgach << endl;
    long long pd1 = (n + a - 1) / a;
    long long pd2 = (m + a - 1) / a;
    long long tong = pd1 * pd2;
    cout << "Số phiến đá cần lát là: " << tong;
    return 0;
}