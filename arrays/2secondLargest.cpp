#include <iostream>
using namespace std;
void traversal(int *arr, int size)
{
    cout << "ARRAY: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << endl;
    cout << endl;
}
void findSecondLargest(int *arr, int size)
{
    int largest = INT_FAST8_MIN, second = INT_FAST8_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        if (arr[i] > second && arr[i] < largest)
            second = arr[i];
    }
    cout << "THE LARGEST ELEMENT IN THE ARRAY: " << largest << endl;
    cout << "THE SECOND LARGEST ELEMENT IN THE ARRAY: " << second << endl;
}

int main()
{
    int arr[10] = {9, 7, 2, 4, 1, 3, 2, 2, 5, 7};
    int size = 10;
    traversal(arr, size);
    findSecondLargest(arr, size);
    return 0;
}