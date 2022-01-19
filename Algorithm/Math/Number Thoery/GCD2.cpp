#include<bits/stdc++.h>
using namespace std;

int Primefact(int a, int arr[])
{

    int k=0;
    while(a%2==0)
    {
        arr[k++] = 2;
        a = a/2;
    }
    for(int i=3; i<=a; i+=2)
    {
        while(a%i==0)
        {
            arr[k++] = i;
            a = a/i;
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
        int size_a = Primefact(a,arr1);

        int size_b = Primefact(b,arr2);

        int k = 0;

        for(int i=0; i<size_a; i++)
        {
            for(int j=0; j<size_b; j++)
            {
                if(arr1[i]==arr2[j])
                {
                    final_1[k++] = arr1[i];
                    arr2[j] = -1;
                    break;

                }
            }
        }

       int mul = 1;
       for(int i=0; i<k; i++)
       {
           mul = mul*final_1[i];
       }
       cout << mul << endl;


    }
    return 0;
}
