#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, t, v;
    cin >> n;
    vector <int> a;
    // this is only the reading stage
    for (int i = 0; i < n; i++) 
    {
        cin >> t;
        v = 1;
        for (auto j : a) if (j == t) {
            v--;
            break;
        }
        if (v) a.push_back(t); // if 1 then true and executed, if 0 then false and not executed
    }
    // genius solutin!
    cout << a.size();
    return 0;
}