int n, v[100];

bool sorted;
do
{
  sorted = true;
  for(int i = 0 ; i < n - 1 ; i ++)
    if(v[i] > v[i+1])
    {
      int aux = v[i];
      v[i] = v[i+1];
      v[i+1] = aux;
      sorted = false;
    }
}
while(!sorted);
