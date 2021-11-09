#include <iostream>

using namespace std;

int makeProductOne(int arr[], int N)
{
    int zero=0, negative=0, steps=0;
    
    for(int i=0; i<N; i++)
    {
        if(arr[i]==0)
            zero++;
        else if(arr[i] < 0)
        {
            negative++;
            steps += -1 - arr[i];
        }
        else 
        {
            steps +=  arr[i]-1;
        }
    }
    if(negative%2==0)
        steps = steps + zero;
    else
    {
        if(zero>0)
            steps = steps + zero;
        else
            steps = steps+2; 
    }
    return steps;
}

int main()
{
    int a[] = {3, 6, -2, -11,-1, -1, 0, 0, 0};//};
    int n = sizeof(a) / sizeof(a[0]);
    cout << makeProductOne(a, n);
    return 0;
}
