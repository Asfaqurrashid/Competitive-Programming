#include<bits/stdc++.h>
using namespace std;

int fact(int a, int arr[])
{

    int k=0;
    for(int i=2; i<a; i++)
    {
        if(a%i==0)
        {
            arr[k++] = i;
        }
    }
    return k;

}
int main()
{
    while(1)
    {
        int a,b;
        int arr1[1001], arr2[1001], final_1[1001];
        cin >> a >> b;
        int size_a = fact(a,arr1);
        int size_b = fact(b,arr2);
        int k = 0;
        for(int i=0; i<size_a; i++)
        {
            for(int j=0; j<size_b; j++)
            {
                if(arr1[i]==arr2[j])
                {
                    final_1[k] = arr1[i];


                }
            }
        }
        cout << *max_element(final_1, final_1+k) << endl;


    }
    return 0;
}
