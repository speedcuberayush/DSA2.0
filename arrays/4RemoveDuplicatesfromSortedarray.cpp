#include <iostream>
using namespace std;
void traversal(int *arr, int size)
{
    cout << "ARRAY: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << endl;
    cout << endl;
}

int main()
{
    int arr[10] = {9, 7, 2, 4, 1, 3, 2, 2, 5, 7};
    int size = 10;
    traversal(arr, size);

    return 0;
}