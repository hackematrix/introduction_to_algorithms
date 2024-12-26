#include<iostream>
#include<algorithm>
using namespace std;
//heap sort
void Max_Heapify(int arr[],int n,int i){
  int left=2*i+1;//左节点
  int right=2*i+2;//右节点
  int ma=i;
  if(left<n&&arr[left]>arr[ma]){
    ma=left;
  }
  if(right<n&&arr[right]>arr[ma])
  {
    ma=right;
  }
  if(ma!=i){
    swap(arr[i],arr[ma]);
    Max_Heapify(arr,n,ma);
  }
}

void Heap_Sort(int arr[],int n){
  for(int i=n/2-1;i>=0;i--)
  {
    Max_Heapify(arr,n,i);
  }
  for(int i=n-1;i>=1;i--){
    swap(arr[0],arr[i]);
    Max_Heapify(arr,i,0);
  }
  
}

int main(){
  int n;
  cin>>n;
  int arr[10005];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  Heap_Sort(arr,n);
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
  return 0;
}
