#include <iostream>

using namespace std;

int getlen(int size)
{
    return size / sizeof(int);
}

void swapleft(int *left, int *right);

int main()
{
    int arr[] = {6, 5, 3, 4, 1, 2, 6, 5, 3, 4, 1, 2, 55, 99, 1, 4, 22};

    for (int i = 1; i < getlen(sizeof(arr)); i++)
    {
        int checkindex = i - 1;
        int holeindex = i;

        while (arr[holeindex] < arr[checkindex] && checkindex >= 0)
        {
            // swap elements
            swapleft(&arr[checkindex], &arr[holeindex]);
            checkindex--;
            holeindex--;
        }
    }

    for (int i = 0; i < getlen(sizeof(arr)); i++)
        cout << arr[i] << ", ";
}

void swapleft(int *left, int *right)
{
    int temp = *left;
    *left = *right;
    *right = temp;
}