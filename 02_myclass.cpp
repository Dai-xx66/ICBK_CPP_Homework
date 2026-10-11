#include <iostream>
using namespace std;

class MyClass {
public:
void fun(int arr[],int n) {
    int minIndex = 0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[minIndex])
            minIndex = i;
    }
    int temp=arr[minIndex];
    arr[minIndex]=arr[n-1];
    arr[n-1]=temp;
}
};

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int n=5;
    MyClass obj;
    obj.fun(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
};