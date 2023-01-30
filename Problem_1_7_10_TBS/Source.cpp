#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 0, b = 0, temp = 0;
    bool c = true; // flag
    cin >> n;
    vector<int> pepega;
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        for (int i = 0; i < pepega.size(); ++i)
        {
            if (pepega[i] == temp)
            {
                c = false;
                break;
            }
            else
            {
                c = true;
                break;
            }

        }
        if (c)
        {
            pepega.push_back(temp);
        }
    }
    cout << pepega.size();
    return 0;
}