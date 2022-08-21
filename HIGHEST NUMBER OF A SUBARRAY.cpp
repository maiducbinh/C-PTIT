#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

void print(int arr[], int n, int k)
{
	deque <int> q(k);
	int i;
	for (i = 0; i < k;i++) {
		while ((!q.empty()) && arr[i] >= arr[q.back()])
			q.pop_back();
		q.push_back(i);
	}
	for (; i < n;i++) {
		cout << arr[q.front()] << " ";
		while ((!q.empty()) && q.front() <= i - k)
			q.pop_front();
		while ((!q.empty()) && arr[i] >= arr[q.back()])
			q.pop_back();
		q.push_back(i);
	}
	cout << arr[q.front()];
}


int main()
{
    int t;
    cin >>t ;
    for(int r=0;r<t;r++)
    {
        int n,k;
        cin>>n>>k;
        int a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        print(a, n, k);
        cout << endl;
    }
}
