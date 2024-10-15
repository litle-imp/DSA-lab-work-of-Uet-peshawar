//GIVEN
//data stored is in array isnt sorted
//develop function to sort using selection sort

#include<iostream>
using namespace std;

class Q_5 
{public:
    //function
    void SelectionSort(int size, int *arr)
    {
        for(int i=0; i<size; i++)
        {
            int minidx = i;
            for(int j=i+1; j<size; j++)
            {
                if(arr[j] < arr[minidx])
                minidx = j;
            }
            swap(arr[minidx],arr[i]);
        }
    }

     //print array
    void Print(int size, int *arr)
    {
    for(int i=0; i<size; i++)
    {
        cout<<arr[i];
    }
    }
};

int main()
{
    int arr[] = {3,4,7,8,5,3};
    int size = sizeof(arr) / sizeof(int);

    Q_5 obj;

    obj.SelectionSort(size,arr);

    obj.Print(size,arr);

    return 0;
}