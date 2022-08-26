// Name - Lakshya Garg
// Roll No. - 2010990418
// Set No. -05
// Q2

#include <bits/stdc++.h>
using namespace std;

// Function to print all subarrays with a zero-sum
// in a given array
void printAllSubarrays(int arr1[], int k)
{
    // we will consider all subarrays are starting from `i`
    for (int i = 0; i < k; i++)
    {
        int sum = 0;

        // we will consider all subarrays are ending at `j`
        for (int j = i; j < k; j++)
        {
            // sum of elements so far
            sum += arr1[j];

            // if the sum is seen before, we have found a subarray
            // with zero-sum
            if (sum == 0)
            {
                cout << "{";
                for (int it = i; it <= j; it++)
                {
                    cout << arr1[it] << ",";
                }
                cout << "}";
                cout << endl;
                
            }
        }
    }
}

int main()
{
    int k;
    cout<<"Enter the number of Elements"<<endl;
    //Input of length of array taken
    cin>>k;
    int arr1[k];
    cout << "Enter Elements of array"<<endl;
    //Input of Elements of array taken
    for (int i = 0; i < k; i++)
    {
        cin >> arr1[i];
    }
    cout<<"Subarrays with zero-sum are"<<endl;
    printAllSubarrays(arr1, k);
    //Function Print All Subarrays called
    return 0;
}