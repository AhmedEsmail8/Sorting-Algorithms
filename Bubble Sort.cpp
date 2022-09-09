#include <iostream>

using namespace std;

void BubbleSort(int *arr, int arrSize){
    bool flag = false;
    do{
        flag = false;
        for (int i=0; i<arrSize-1; i++){
            if (arr[i]>arr[i+1]){
                swap(arr[i], arr[i+1]);
                flag = true;
            }
        }
    }while(flag);
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

    BubbleSort(arr, arrSize);
    printArray(arr, arrSize);
    return 0;
}
