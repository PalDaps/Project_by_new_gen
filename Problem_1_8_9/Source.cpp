#include <iostream>
#include <vector>
using namespace std;

// Check if the array is symmetrical about the main diagonal.
//

int main()
{
    int n = 0, c = 0, k = 0;
    cin >> n;
    if (n < 0 || n > 10)
    {
        return 0;
    }
    cin >> k;
    vector<vector<int>> future(n, vector<int>(n));
    // the reading
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> future[i][j];
        }
    }
    // the processing and output
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (k == i - j && k > 0)
            {
                cout << future[i][j] << " ";
            }
            if (k == i - j && k < 0 )
            {
                cout << future[i][j] << " ";
            }
            if (k == 0 & i == j)
            {
                cout << future[i][j] << " ";
            }
        }
    }
    
    return 0;
}