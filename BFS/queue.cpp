#include <bits/stdc++.h>
using namespace std;
struct node
{
    int u, v;
};
int main()
{
    queue <int> q;
    q.push(-50);
    q.push(10);
    q.push(20);

    cout << q.front() << " " << q.size() << endl;
    q.pop();

    cout << q.front() << " " << q.size() << endl;

    queue <node> sq;
    sq.push({1,2});
    sq.push({3,4});

    node t = sq.front();
    cout << t.u << ' ' << t.v << endl;

    sq.pop();
    t = sq.front();
    cout << t.u << ' ' << t.v << endl;

    return 0;
}
