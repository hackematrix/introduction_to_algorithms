#include<bits/stdc++.h>
using namespace std;
//插入排序
int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    for (int i=1;i<n;i++ ) {
        int base=a[i];
        int j=i-1;
        while (j>=0&&a[j]>base) {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=base;
    }
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
