#include<bits/stdc++.h>
using namespace std;
//合并
void merge(int arr[],int temp[],int left,int leftEnd,int right,int rightEnd) {
    int i=left;
    int size=rightEnd-left+1;

    //如果两个数组都没取完
    while (left<=leftEnd && right<=rightEnd) {
        if (arr[left]<arr[right])
            temp[i++]=arr[left++];
        else
            temp[i++]=arr[right++];
    }

    //右数组取完
    while (left<=leftEnd)
        temp[i++]=arr[left++];

    //左数组取完
    while (right<=rightEnd)
        temp[i++]=arr[right++];

    //克隆
   for (int j=0;j<size;j++,rightEnd--)
       arr[rightEnd]=temp[rightEnd];
}

//分割
void mergeSort(int arr[],int temp[],int left,int right) {
    if (left>=right)
        return;
    int mid=(left+right)/2; //中间值
    mergeSort(arr,temp,left,mid);
    mergeSort(arr,temp,mid+1,right);
    merge(arr,temp,left,mid,mid+1,right);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
        cin>>arr[i];
    int temp[n];
    mergeSort(arr,temp,0,n-1);
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
