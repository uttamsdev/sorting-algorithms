#include <bits/stdc++.h>
using namespace std;
void Merge(int lo, int mid, int hi, int arr[])
{
    int i = lo, j = mid+1, temp[100], k=1;
    while(i <= mid && j <= hi) {
        if(arr[i] < arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }
    while(i <= mid) temp[k++] = arr[i++];
    while(j <= hi) temp[k++] = arr[j++];
    for(k = 1, i = lo; i <= hi; k++,i++){
        arr[i] = temp[k];
    }
}
void mergeSort(int lo, int hi, int arr[])
{
    if(lo == hi) return;
    int mid = (lo+hi)/2;
    mergeSort(lo,mid,arr);
    mergeSort(mid+1,hi,arr);
    Merge(lo,mid,hi,arr);
}
int main()
{
    int arr[100], n;
    cout<<"Enter the array size: ";
    cin>>n;

    cout<<"Enter your array: ";
    for(int i = 1; i <= n; i++){
        cin>>arr[i];
    }
    mergeSort(1,n,arr);
    for(int i = 1; i <= n; i++){
        cout<<arr[i] <<"\t";
    }
    return 0;
}
