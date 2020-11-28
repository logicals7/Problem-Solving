#include<iostream>
using namespace std;

//Insert Elements in Array
void insertElements(int n, int arr[]){
    for(int i=0; i<n; i++)
        cin>>arr[i];
}

//Rotate an array
void rotate(int arr[], int n){
    int temp, k, count_rotate=0;
    cout<<"Enter the number of elements you want to rotate an array with: ";
    cin>>k;

    while(count_rotate!=k){
        temp = arr[0];
        //rotating an element by 1
        for(int j=0; j<n-1; j++){
            arr[j] = arr[j+1];
        }
        arr[n-count_rotate-1] = temp;
        count_rotate++;
    }
    //Print Array
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
}


int main()
{
    int n, k;
    cout<<"Enter the number of elements you want to insert in an array: ";
    cin>>n;

    int arr[n];

    insertElements(n, arr);
    rotate(arr, n);

    return 0;
}