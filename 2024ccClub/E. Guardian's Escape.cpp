#include <iostream>
using namespace std;

bool canKingEscape(int n, int qx, int qy, int kx, int ky, int tx, int ty) {
    // Check if the king and target are in the same quadrant relative to the queen
    bool kingQuadrant = (kx < qx) == (tx < qx) && (ky < qy) == (ty < qy);
    return kingQuadrant;
}

int main() {
    int n, qx, qy, kx, ky, tx, ty;
    cin >> n >> qx >> qy >> kx >> ky >> tx >> ty;

    if (canKingEscape(n, qx, qy, kx, ky, tx, ty))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
