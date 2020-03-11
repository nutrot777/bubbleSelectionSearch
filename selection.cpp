#include <iostream>

using namespace std;

void swapping(int arr[], int findex, int sindex){
    int temp;
    temp = arr[findex];
    arr[findex] = arr[sindex];
    arr[sindex] = temp;
}


int indexOfMin(int arr[], int startIndex, int n){
    int minValue = arr[startIndex];
    int minIndex = startIndex;

     for(int i =minIndex+1; i<n; i++){
         if(arr[i]< minValue){
             minIndex = i;
             minValue = arr[i];
         }
     }
     return minIndex;

}

void selectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int index = indexOfMin(arr, i, n);
        swapping(arr, i, index);
    }
}

void DispArray(int arr[], int size){
    int i;
    for(i=0; i<size; i++){
        cout<<arr[i]<<",";
    }
}

int main(int argc, char *argv[]){
    int arr[]={4,78,96,4,7,8};
    int n =sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout<<"Sorted Array: "<<endl;
    DispArray(arr, n);

    return 0;
}