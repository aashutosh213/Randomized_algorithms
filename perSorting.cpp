//permute by sorting: to randomize the input by permuting array
#include <iostream>
#include<time.h>

using namespace std;

void print(int arr[],int n){
    for (int i = 0; i < n; i++) {
        cout<< arr[i] <<" ,";
    }
    cout<< endl;
}

void swap(int *a, int *b){
    int c{0};
    *a=c;
    *a=*b;
    *b=c;
}

void perSort(int arr[], int n){
    int P [5]{0};
    
    srand(time(0));
    
    for (int i = 0; i < 5; i++)
        P[i] = rand() %125;
    
    print(P,5);
    cout<< "-------------------"<<endl;
    
    int z{1};
    while(z<5){
        if(P[z-1]>P[z]){
            swap(P[z-1],P[z]);
            swap(arr[z-1],arr[z]);
            z = 1;
        }else{
            z++;
        }
    }
    print(P,5);
}

int main()
{
    int arr[5]{1,7,3,2,9};

    print(arr,5);
    cout<< "-------------------"<<endl;
    
    perSort(arr,5);
    
    cout<< "-------------------"<<endl;
    
    print(arr,5);

    return 0;
}
