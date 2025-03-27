#include <iostream>
using namespace std;
int recursive_EA(int a, int b, int &x, int &y) {
    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }
    int x1, y1;
    int EA = recursive_EA(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return EA;
}

int main() {
    int a, n;
   cout << "enter a:"; cin >> a; cout <<"enter n:"; cin >> n;
    
    int x, y;
    int EA = recursive_EA(a, n, x, y);
    
    if (EA != 1) {
        cout << 0 << endl;
    } else {
        cout << (x % n + n) % n << endl;
    }
    
    return 0;
}