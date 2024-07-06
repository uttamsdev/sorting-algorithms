#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-8, 5, 6, 1, 0, 2, 3, 1, 9, 10};
    sort(&arr[0],&arr[11]);
    for(int i = 0; i < 10; i++) cout<<arr[i] <<endl;
    return 0;
}
