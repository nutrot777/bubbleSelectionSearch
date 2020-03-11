#include <iostream>
using namespace std;




void BubbleSort( int A[ ], int n ) {
    int temp;
    for(int k = 0; k< n-1; k++) {
       

        for(int i = 0; i < n-k-1; i++) {
            if(A[ i ] > A[ i+1] ) {
              
                temp = A[ i ];
                A[ i ] = A[ i+1 ];
                A[ i + 1] = temp;
            }
        }
    }
}

int main(int argc, char *argv[]){

int Arr[5] = {7,5,9,3,1};

BubbleSort(Arr, 5);

cout<<"Sorted Array: "<<endl;
for(int i =0; i<5; i++){
    cout<<Arr[i]<<","<<"\t";
  
}

return 0;

}
