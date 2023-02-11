#include <iostream>
#include <vector>
using namespace std;

// Check if the array is symmetrical about the main diagonal.
//

int main()
{
    int n = 0, c = 0;
    cin >> n;
    if (n < 0 || n > 10)
    {
        return 0;
    }
    vector<vector<int>> future(n, vector<int>(n));
    // the reading
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> future[i][j];
        }
    }
    // the processing
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i != j && future[i][j] == future[j][i])
            {
                c++;
            }
        }
    }
    // the ouptut
    if (c == n * n - n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
