#include <iostream>
using namespace std;
void traversal(int *arr, int size)
{
    cout << "ARRAY: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << endl;
    cout << endl;
}
void findLargest(int *arr, int size)
{
    // 1. sort 2. traversal
    int max = -99999;
    for (int i = 0; i < size; i++)
        if (i > max)
            max = i;
    cout << "The maximum element in arr: " << max;
}
int main()
{
    int arr[10] = {9, 7, 2, 4, 1, 3, 2, 2, 5, 7};
    int size = 10;
    traversal(arr, size);
    findLargest(arr, size);
    return 0;
}