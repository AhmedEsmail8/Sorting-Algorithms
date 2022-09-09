#include <iostream>
#include <map>

using namespace std;

template <class T>
void printArray(T arr, int arrSize){
    for (int i=0; i<arrSize; i++)
        cout<<arr[i]<<' ';
    cout<<'\n';
}

void CountSort(int *arr, int arrSize){
    map <int, int> mp;
    int sum=0;

    // make fequency array using map
    for (int i=0; i<arrSize; i++)
        mp[arr[i]]++;

    // add last positions of elements after sorting in the map
    for (auto k:mp){
        sum += k.second;
        mp[k.first] = sum;
        // to be zero index
        mp[k.first]--;
    }

    // declare new array to add elements after sorting
    int newArr[arrSize];
    for (int i=0; i<arrSize; i++){
        // decrement the position to make the map has the next position
        newArr[ mp[ arr[i] ]-- ] = arr[i];
    }

    // copy elements to the main array
    copy(newArr, newArr+arrSize, arr);
}


int main()
{
    // enter the array
    int arrSize;
    cin>>arrSize;
    int arr[arrSize];
    for (int i=0; i<arrSize; i++)
        cin>>arr[i];

    CountSort(arr, arrSize);
    printArray(arr, arrSize);
    return 0;
}
