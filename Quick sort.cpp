int x[50],n,i;

int quicksort(int st,int dr){  

int aux,i,j,di,dj; 

di=0; dj=1; i=st; j=dr; 

while(i<j){  

         if (x[i]>x[j])  {aux=x[i];x[i]=x[j];x[j]=aux; 

                              aux=di; di=dj; dj=aux; } 

         i=i+di; 

         j=j-dj;} 

 return j; 

 } 

void quick(int st,int dr){  

int p; 

if (st<dr) {p=quicksort(st,dr); 

                 quick(st,p-1); 

                 quick(p+1,dr); 

                 } 

  } 

  void main(){  

  cin>>n; 

  for (i=1;i<=n;i++)cin>>x[i]; 

  quick(1,n); 

  for (i=1;i<=n;i++)cout<<x[i]<<" "; } 
