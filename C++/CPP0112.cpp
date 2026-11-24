#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        double kq = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        cout << fixed << setprecision(4) << kq << endl;
    }
    return 0;
}