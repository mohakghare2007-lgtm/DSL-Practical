#include<iostream.h>
#include<conio.h>
int binarySearch(int A[],int,int)
int binarySearch(int A[],int high,int low)
{
  int key,mid;
  cout<<"\nEnter element to be search\n";
  cin>>key;
  while(low<=high)
  {
    mid = low + (high - low)/2;
    if (key==A[mid])
    {
      return mid;
    }
    if (key>A[mid])
    {
      low = mid +1;
    }
    else
    {
      high = mid -1;
    }
  } //while loop
  return -1;
}//binarySearch()

void main()
{
  int A[]={2,3,7,9,11,12,13,19};
  int result=0,i = 0;
  clrscr();
  for(i =0;i<=7;i++)
    {
      cout<<A[i]<<"\t";
    }
  result = binarySearch(A,0,7);
  if(result==-1)
    cout<<"\nElement not found.";
  else
    cout<<"\nElement found.";
  getch();
}//void
