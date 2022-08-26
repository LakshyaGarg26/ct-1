// Name - Lakshya Garg
// Roll No. - 2010990418
// Set No. - 05
//  Q1


#include <bits/stdc++.h>
using namespace std;


int lenOfLongSubarr(int nums[],
                    int n,
                    int target)
{
//Function Length of Sub array is created.
    unordered_map<int, int> um;

    int sum = 0, maxLen = 0;
//int sum and int max length declared.
    
    for (int i = 0; i < n; i++)
    {

        sum += nums[i];

        if (sum == target)
            maxLen = i + 1;

        if (um.find(sum) == um.end())
            um[sum] = i;

        if (um.find(sum - target) != um.end())
        {

            
            if (maxLen < (i - um[sum - target]))
                maxLen = i - um[sum - target];
        }
    }

    cout << "The longest subarray is"
         << " having length " << maxLen;
}


int main()
{
    int n;
    cout<<"Enter the length of array"<<endl;
    cin>>n;
    // input of length of array taken
    int nums[n];
    cout<<"Enter Elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    //Array input taken
    int target = 8;
    // cout << "Subarrays with sum 8 are"<<endl;


     lenOfLongSubarr(nums, n, target);
    return 0;
}
