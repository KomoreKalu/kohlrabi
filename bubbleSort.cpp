#include <iostream>
using namespace std;
void print(int a[], int n){
    for (int i = 0; i < n; ++i) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int a[], int n){
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-1-i; ++j) {
            if (a[j] > a[j+1])
                swap(a[j],a[j+1]);
        }
        print(a,n);
    }
}

int main(){
    int row=0;
    cin>>row;
    int a[row];
    for (int i=0; i<row; ++i) {
        cin>>a[i];
    }
    bubbleSort(a,row);
    return 0;
}