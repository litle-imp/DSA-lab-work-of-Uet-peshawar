//GIVEN
//check if array is sorted or not

#include<iostream>
using namespace std;

class Q01
{public:
    void ArrayCheck(int size,int *arr)
    {
        
        bool sorted = false;

        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size-i; j++)
            {
                if(arr[j] > arr[j+1])
                {
                    sorted = true;
                }
            }
            if(sorted == false)
            {
                cout<<"array is sorted";
                break;
            }
            else
            {
                cout<<"array is not sorted";
                break;
            }
        }
    }
};

int main()
{
    int arr[] = {1,2,3,4,5,6};

    int size = sizeof(arr) / sizeof(int);

    Q01 obj;

    obj.ArrayCheck(size,arr);

    //obj.Print(size,arr);

    return 0;
}