#include <iostream>
#include <vector>
using namespace std;
int binarySearch(const std::vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            return mid; // Target found, return its index
        }
        else if (arr[mid] < target)
        {
            low = mid + 1; // Adjust the search range to the right half
        }
        else
        {
            high = mid - 1; // Adjust the search range to the left half
        }
    }

    return -1; // Target not found
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 6;
    int result = binarySearch(arr, target);

    if (result != -1)
    {
        cout << "Element " << target << " found at index " << result << std::endl;
    }
    else
    {
        cout << "Element not found" << std::endl;
    }

    return 0;
}
