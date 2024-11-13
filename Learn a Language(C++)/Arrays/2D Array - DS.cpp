#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int hourglassSum(const vector<vector<int>>& arr)
{
    int maxsum = -99999999;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            int hourglass = arr[i][j] + arr[i][j+1] + arr[i][j+2] +
                            arr[i+1][j+1] +
                            arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];

            maxsum = max(maxsum, hourglass);
        }
    }

    return maxsum;
}

int main()
{
    vector<vector<int>> arr(6, vector<int>(6));

    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j < 6; ++j)
        {
            cin >> arr[i][j];
        }
    }

    int result = hourglassSum(arr);
    cout << result << endl;

    return 0;
}
