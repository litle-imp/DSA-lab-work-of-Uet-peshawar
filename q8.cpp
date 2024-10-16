

#include<iostream>
using namespace std;
 class Q_8
 {public:
    void InsertionSort(int size, int *arr)
    {
        for(int i=0; i<size; i++)
        {
            int temp = arr[i];
            int j = i -1;
            for(; j >=0; j--)
            {
                if(arr[j] > temp)
                arr[j+1] = arr[j];

                else
                break;
            }
            arr[j+1] = temp;
        }
    }

    //print array
    void Print(int size, int *arr)
    {
    for(int i=0; i<size; i++)
    {
        cout<<arr[i] <<", ";
    }
    }
 };

 int main()
 {
    int arr[] = {4,6,2,7,9};
    int size = sizeof(arr) / sizeof(int);

    Q_8 obj;
    obj.InsertionSort(size,arr);

    obj.Print(size,arr);

    return 0;
 }