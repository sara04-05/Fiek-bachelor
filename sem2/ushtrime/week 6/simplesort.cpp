#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {5, 2, 9, 1, 3};

    for (int i = 0; i < v.size(); i++)
    { 
        for (int j = 0; j < v.size(); j++)
        { 
            if (v[i] < v[j])
            {
                int zv = v[i];
                v[i] = v[j];
                v[j] = zv;
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}