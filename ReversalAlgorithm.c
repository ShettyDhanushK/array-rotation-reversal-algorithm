#include<stdio.h>

void printArray(int arr[], int N) //This function just prints out all the elements in the array
{
    for(int i = 0; i < N; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int start, int end)
{
    while(start < end)
    {
        int temp = arr[start];  //swapping
        arr[start] = arr[end];  //swapping
        arr[end] = temp;        //swapping

        start++;    //incrementing the start
        end--;      //decrementing the end
    }
}

void rotate(int arr[], int N, int d)
{
    if(d == 0) return;
    reverse(arr, 0, d-1);   //First part reversal
    reverse(arr, d, N-1);   //Second part reversal
    reverse(arr, 0, N-1);   //Entire Array reversal
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; //Declaring the array
    int N = sizeof(arr) / sizeof(arr[0]); //Getting the size of the array
    int d = 3;  //Number of places to be shifted

    rotate(arr, N, d); //Calling out the rotate function to intiate the reversal algorithm.
    
    printArray(arr, N); //Calling out the printArray function after the reversal to print all the elements in the array.
    return 0;
}

//Check your understanding
//Try to reverse the algorithm to the right side
//Comment down the answer