// Name - Lakshya Garg
// Roll No. - 2010990418
// Set No. - 05
//  Q1

#include <iostream>
#include <unordered_map>
using namespace std;

void findMaxLenSubarray(int nums[], int n, int S)
{

    unordered_map<int, int> map;

    map[0] = -1;

    int target = 0;

    int len = 0;

    int ending_index = -1;

    // traverse the given array
    for (int i = 0; i < n; i++)
    {
        // sum of elements so far
        target += nums[i];

        // if the sum is seen for the first time, insert the sum with its
        // into the map
        if (map.find(target) == map.end())
        {
            map[target] = i;
        }

        if (map.find(target - S) != map.end() && len < i - map[target - S])
        {
            len = i - map[target - S];
            ending_index = i;
        }
    }

    // print the subarray
    cout << "The largest subarray is ";
    cout << "{";
    for (int i = (ending_index - len + 1); i <= ending_index; i++)
    {
        cout << nums[i] << ",";
    }
    cout << "}";
    cout << " having length " << (ending_index - (ending_index - len + 1) + 1);
}

int main()
{
    int k;
    cout << "Enter the number of Elements" << endl;
    // Input of length of array taken
    cin >> k;
    int arr1[k];
    cout << "Enter Elements of array" << endl;
    // Input of Elements of array taken
    for (int i = 0; i < k; i++)
    {
        cin >> arr1[i];
    }
    int target;

    findMaxLenSubarray(arr1, k, target);

    return 0;
}