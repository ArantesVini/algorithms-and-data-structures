#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "The size of the array is: " << sizeof(arr) << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "The value of the array at index " << i << " is: " << arr[i] << endl;
    }

    return 0;
}