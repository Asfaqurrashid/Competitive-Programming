#include<bits/stdc++.h>
using namespace std;
#define pb push_back
struct data {
    char name[1001];
    int height, weight;
    long long income;
};
bool compare(data a, data b)
{
    if(a.income == b.income)
    {
        if(a.height == b.height)
        {
            if(a.weight == b.weight)
            {
                return strlen(a.name)< strlen(b.name);
            }
            else
            {
                return a.weight < b.weight;
            }
        }
        else
        {
            return a.height > b.height;
        }
    }
    else
    {
       return a.income> b.income;
    }
}
int main()
{
    vector< data > v;
    int n;
    cout << "Enter The number of Boy : ";
    cin >> n;
    while(n--)
    {
    data d;
    cout << "Enter name : ";
    cin >> d.name;
    cout << "Enter height : ";
    cin >> d.height;
    cout << "Enter weight : ";
    cin >> d.weight;
    cout << "Enter income : ";
    cin >> d.income;
    v.pb(d);
    }

    sort(v.begin(), v.end(), compare);
    for(int i=0; i<v.size(); i++)
    {
        cout << i << " : " << v[i].name << endl;
    }

    return 0;
}
