#include <iostream>

using namespace std;

void SelectionSort(int *arr, int arrSize){
    for (int i=0; i<arrSize; i++){
        int tmp=i;
        for (int j=i+1; j<arrSize; j++){
            if (arr[j]<arr[tmp])
                tmp=j;
        }
        swap(arr[tmp], arr[i]);
    }
}

template <class T>
void printArray(T arr, int arrSize){
    for (int i=0; i<arrSize; i++)
        cout<<arr[i]<<' ';
    cout<<'\n';
}

int main()
{
    // enter the array
    int arrSize;
    cin>>arrSize;
    int arr[arrSize];
    for (int i=0; i<arrSize; i++)
        cin>>arr[i];

    SelectionSort(arr, arrSize);
    printArray(arr, arrSize);
    return 0;
}
