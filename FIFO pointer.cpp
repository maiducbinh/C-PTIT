#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue <int> q)
{
    while (!q.empty())
    {
        cout << " " << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;
    int n;
    cin>>n;
    int a[n+1];
    for (int i = 0; i < n; i++)
        q.push(i);

    cout << "Elements of Queue" << endl;
    printQueue(q);

}
