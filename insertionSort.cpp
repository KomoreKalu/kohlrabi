#include <iostream>
using namespace std;
void print(int a[], int n){
    for (int i = 0; i < n; ++i) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void insertionSort(int a[], int n){
    int j, B;
    for (int i = 1; i < n; ++i) {
        B = a[i];
        j = i -1;
        while (j>=0 && B<a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = B;
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
    insertionSort(a,row);
    return 0;
}