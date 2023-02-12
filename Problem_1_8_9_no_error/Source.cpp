#include <iostream>
#include <vector>
using namespace std;

// Transposed matrix(vector).
//

int main()
{
    int n = 0, m = 0;
    cin >> n >> m;
    if (m < 0 || n < 0 || n > 1000 || m > 1000)
    {
        return 0;
    }
    vector<vector<int>> future(n, vector<int>(m));
    // the reading
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> future[i][j] ;
        }
    }
    // the processing and output
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << future[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}