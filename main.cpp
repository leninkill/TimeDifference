#include <iostream>

using namespace std;

int main() {
    int h, m, s;
    int h2, m2, s2;

    cin >> h;
    cin >> m;
    cin >> s;

    cin >> h2;
    cin >> m2;
    cin >> s2;

    int moment1 = h * 3600 + m * 60 + s;
    int moment2 = h2 * 3600 + m2 * 60 + s2;

    int answer = moment2 - moment1;

    cout << answer;

    return 0;
}
