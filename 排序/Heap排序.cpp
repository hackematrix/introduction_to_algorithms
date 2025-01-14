#include<bits/stdc++.h>
using namespace std;

//大根堆化
void MaxHeapify(int arr[],int n,int i) {
    int left=2*i+1; //左节点
    int right=2*i+2;//右节点
    int ma=i;
    if (left<n && arr[left]>arr[ma])
        ma=left;
    if (right<n &&arr[right]>arr[ma])
        ma=right;
    if (ma!=i) {
        swap(arr[i],arr[ma]);
        MaxHeapify(arr,n,ma);
    }
}

//堆排序
void HeapSort(int arr[],int n) {
    //建堆
    for (int i=n/2-1;i>=0;i--) {
        MaxHeapify(arr,n,i);
    }
    for (int i=n-1;i>=1;i--) {
        swap(arr[0],arr[i]);
        MaxHeapify(arr,i,0);

    }
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    HeapSort(a,n);
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
