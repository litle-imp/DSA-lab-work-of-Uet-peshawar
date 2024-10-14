//GIVEN
//data stored is in array isnt sorted
//develop function to sort using bubble sort


#include <iostream>
using namespace std;

class  Q02
{
    public:
    //function for sorting
    void BubbleSort(int size, int *arr)
    {
        bool swapped = false;

        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size-i; j++)
            {
                if(arr[j] > arr[j+1])
                {
                    swap(arr[j],arr[j+1]);

                    swapped = true;
                }
            }
            if(swapped == false)
            {
                break;
            }
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
    int arr[] = {8,6,4,2,4,7,3};

    int size = sizeof(arr) / sizeof(int);

    Q02 obj;

    obj.BubbleSort(size,arr);

    obj.Print(size,arr);


    return 0;
}