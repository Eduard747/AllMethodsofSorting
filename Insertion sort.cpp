int n, X[100];
//reading x[] elements
for(int i = 1 ; i < n ; i ++)
{
    int x = a[i];
    int p = i - 1;
    while(p >= 0 && a[p] > x)
        a[p + 1] = a[p], p --;
    a[p + 1] = x;
}
