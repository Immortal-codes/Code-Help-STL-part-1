#include<iostream>
#include<vector>

using namespace std;


int main()
{
    vector<int>v;

    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(12);
    v.push_back(0);
    v.push_back(5);

    

    int j=0;
    
    for (int i = 0; i < v.size(); i++)
    {
       if(v[i]!=0)
       { 

        swap(v[i],v[j]);
        j++;
       }
    }

    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }

}

