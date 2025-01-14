#include<bits/stdc++.h>
using namespace std;
#define maxn 10005
//冒泡排序
int main() {
    int n;
    int a[maxn];
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i];
    for (int i=1;i<n;i++) {
        for (int j=0;j<n-i;j++) {
            if (a[j]>a[j+1]) {
                swap(a[j],a[j+1]);
            }
        }
    }
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}


