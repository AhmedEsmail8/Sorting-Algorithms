#include <iostream>

using namespace std;

template <class T>
void printArray(T arr, int arrSize){
    for (int i=0; i<arrSize; i++)
        cout<<arr[i]<<' ';
    cout<<'\n';
}

void insertsionSort(int *arr, int arrSize){
    for (int i=1; i<arrSize; i++){
        int k=i-1, tmp=arr[i];

        // shift elements bigger than tmp
        while (tmp<arr[k] && k>=0){
            arr[k+1] = arr[k];
            k--;
        }

        arr[k+1] = tmp;
    }
}

int main()
{
    // enter the array
    int arrSize;
    cin>>arrSize;
    int arr[arrSize];
    for (int i=0; i<arrSize; i++)
        cin>>arr[i];

    insertsionSort(arr, arrSize);
    printArray(arr, arrSize);
    return 0;
}
