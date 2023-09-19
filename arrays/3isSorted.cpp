#include <iostream>
using namespace std;
void traversal(int *arr, int size)
{
    cout << "ARRAY: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << endl;
    cout << endl;
}

bool solve(int *arr, int size)
{
    if (arr[0] > arr[1])
        return false;
    if (size == 1)
        return true;
    solve(arr + 1, size - 1);
}
bool isolve(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
        if (arr[i] > arr[i + 1])
            return false;
    return true;
}
void isSorted(int *arr, int size)
{
    // recursion 
    // cout << (solve(arr, size) ? "SORTED" : "NOT SORTED") << endl;
    
    //iteration 
    cout << (isolve(arr, size) ? "SORTED" : "NOT SORTED") << endl;
}

int main()
{
    int arr[10] = {9, 7, 2, 4, 1, 3, 2, 2, 5, 7};
    int size = 10;
    int arr1[10];
    for (int i = 0; i < 11; i++)
        arr1[i] = i;
    isSorted(arr, size);
    isSorted(arr1, 10);
    return 0;
}