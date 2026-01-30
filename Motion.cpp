#include <bits/stdc++.h>
using namespace std;


int main() {
    float u, a, t;
    cout << "Enter initial velocity (m/s): ";
    cin >> u;
    cout << "Enter an acceleration (m/s^2):" ;
    cin >> a;
    cout << "Enter time (s): ";
    cin >> t;

    // Final Velocity
    float v = u + a * t;

    // Displacement
    float s = u * t + 0.5f * a * t * t;

    cout << "Final velocity: " << v << "m/s\n";
    cout << "Displacement: " << s << "m\n";


    static_assert(2 == 2);
}