#include <bits/stdc++.h>
using namespace std;
struct age{
    int y, m;
};
bool compare(age a, age b)
{
    if(a.y > b.y) return true;
    if(a.y == b.y && a.m > b.m) return true;
    return false;
}
int main()
{
    age arr[] = { {6,5}, {2,1}, {9,6} };
    sort(&arr[0],&arr[3],compare);
    for(int i = 0; i < 3; i++) cout<<arr[i].y <<"\t" <<arr[i].m <<endl;
    return 0;
}



