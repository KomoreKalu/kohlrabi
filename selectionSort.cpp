#include <iostream>
using namespace std;
void print(int a[], int n){
    for (int i = 0; i < n; ++i) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int selectionSort(int a[], int n){
    int min, tmp, count = 0;
    for (int i = 0; i < n-1; ++i) {
        min = i;
        for (int j = i+1; j < n; ++j) {
            min = a[j]<a[min]?j:min;
        }
        if (min != i){
            tmp = a[i];
            a[i] = a[min];
            a[min] = tmp;
            count++;
        }
    }
    return count;
}
int main(){
    int row=0, count;
    cin>>row;
    int a[row];
    for (int i=0; i<row; ++i) {
        cin>>a[i];
    }
    count = selectionSort(a,row);
    print(a,row);
    cout<<count<<endl;
    return 0;
}