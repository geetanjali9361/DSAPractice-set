#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    bool found = false;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == 9)
            {
                int a = i;
                int b = j;
                cout << "The indices are: " << "[" << a << "," << b << "]";
                found = true;
            }
        }
    }
    if (!found)
    {
        cout << "No indices found whose sum is 9.\n";
    }
    return 0;
}