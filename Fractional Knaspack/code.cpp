#include <bits/stdc++.h>
using namespace std;
struct item{
    double w,p,u;
};
bool compare(item A, item B){
    return B.u > A.u;
}
int main()
{
    int W,n;
    item arr[100];
    cout<<"Enter the size of item: ";
    cin>>n;

    cout<<"Enter the capacity weight: ";
    cin>>W;
    cout<<"Enter the item: ";
    for(int i = 1; i <= n; i++){
        cin>>arr[i].w>>arr[i].p;
        arr[i].u = arr[i].p/arr[i].w;
    }
    sort(&arr[0],&arr[n+1],compare);
    int P = 0;
    for(int i = 1; i <= n; i++){
        if(W > arr[i].w){
            P = P + arr[i].p;
            W = W - arr[i].w;
        }
        else {
            P = P + W*arr[i].u;
            W = 0;
        }
        cout<<"Itam no: " <<i <<"\n" <<"Weight " <<W <<"\t" <<"Profit : " <<P <<"\n\n";
    }
    cout<<"\n\nProfit = " <<P <<endl;
}
