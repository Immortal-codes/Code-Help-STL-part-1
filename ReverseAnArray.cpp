#include <iostream>
#include <vector>

using namespace std;

vector<int> rev(vector<int> v)
{

    int s = 0, e = v.size() - 1;

    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }

    return v;
}

void printing(vector<int> v)
{
    cout<<"After reverse :- ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;

    v.push_back(2);
    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);

    cout<<"before reverse :- ";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    int n = v.size();

    vector<int> z = rev(v);

    printing(z);
}