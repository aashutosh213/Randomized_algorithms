//randomize in a place array better than permute by sorting: O(n)
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

void RiaP(int arr[], int n){//Randomize in a place algo
    srand(time(0));
    
    for (int i = 0; i < 5; i++)
        swap(arr[i], arr[rand()%n]);   //O(n)
    
}

int main()
{
    int arr[5]{1,7,3,2,9};

    print(arr,5);
    cout<< "-------------------"<<endl;
    
    RiaP(arr,5);
    
    print(arr,5);

    return 0;
}