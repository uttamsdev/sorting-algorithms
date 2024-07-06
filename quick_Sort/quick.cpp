#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int p, int r)
{
    int povit = arr[r];
    int i = p-1;
    for(int j = p; j <= r-1; j++){
        if(arr[j] >= povit) {
                i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}

int quick(int arr[], int p, int r)
{
    if(p < r){
        int q = partition(arr,p,r);
        quick(arr,p,q-1);
        quick(arr,q+1,r);
    }
}
int main()
{
    int arr[100],n;
    cout<<"Enter the array size: ";
    cin>>n;

    cout<<"Enter the array: ";
    for(int i = 1; i <= n; i++) cin>>arr[i];
    quick(arr,1,n);
    cout<<"The sorted array is: \n";
    for(int i = 1; i <= n; i++) cout<<arr[i] <<"\t";
    return 0;
}
