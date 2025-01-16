#include<bits/stdc++.h>
using namespace std;
//快速排序
void quickSort(int arr[],int start,int end) {
    int left=start;
    int right=end;
    int pivot=arr[left];
    if (left>=right)
        return;
    while (left<right) {
        while (left<right &&arr[right]>=pivot)
            right--;
        arr[left]=arr[right];
        while (left<right && arr[left]<=pivot)
            left++;
        arr[right]=arr[left];

    }
    arr[left]=pivot;
    quickSort(arr,start,left-1);
    quickSort(arr,left+1,end);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
        cin>>arr[i];
    quickSort(arr,0,n-1);
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
