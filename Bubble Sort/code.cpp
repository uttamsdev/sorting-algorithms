#include <bits/stdc++.h>
using namespace std;
void bubble(int n, int arr[]){
    for(int i = 1; i <= n -1; i++){
        for(int j = 1; j <= n - i; j++){
            if(arr[j] > arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
}
int main()
{
    int arr[100], n;
    cout<<"Enter the array size: ";
    cin>>n;

    cout<<"Enter the array: ";
    for(int i = 1; i <= n; i++) cin>>arr[i];
    bubble(n,arr);
    for(int i = 1; i <= n; i++) cout<<arr[i];
    return 0;
}
