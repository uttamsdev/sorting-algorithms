#include <bits/stdc++.h>
using namespace std;
bool compare(int a, int b)
{
    return a > b;
}
int main()
{
    int arr[] = {-8, 5, 6, 1, 0, 2, 3, 1, 9, 10};
    sort(&arr[0],&arr[10],compare);
    for(int i = 0; i < 10; i++) cout<<arr[i] <<endl;
    return 0;
}

