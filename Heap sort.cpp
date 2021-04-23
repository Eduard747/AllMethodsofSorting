#include <algorithm>
#include <vector>
using namespace std;
void heapSort(int a[],int n) 
{
    int i;
    vector<int> v; 
    for(int i = 0;i < n;i++) { 
        v.push_back(a[i]); 
    }
    make_heap(v.begin(),v.end());
    sort_heap(v.begin(),v.end());
    for(int i = 0;i < n;i++) {
        a[i] = v[i];
    }
}
