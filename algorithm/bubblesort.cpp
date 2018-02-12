void BubbleSort(int a[],int n)
{
 int i,j,t;
 for (i = 0; i < n; i++)
 {
  for (j = n - 1; j>i; j--)
  {
   if (a[j-1] > a[j])
   {
     t = a[j-1];
     a[j-1] = a[j];
     a[j] = t;
   }
  }
 }
}
