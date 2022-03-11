#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums1  = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = nums1.size();
    int n = nums2.size();

    vector<int> nums3;

    int count = 0;

    for(auto x:nums1){
        if(x==0){
            count++;
        }
    }

    int i =0;
    int j=0;
    while(i<count and j<count){
        if(nums1[i]<=nums2[j]){
            nums3.push_back(nums1[i]);
            i++;
        }
        else{
            nums3.push_back(nums2[j]);
            j++;
        }

    }

    while(j<n){
        nums3.push_back(nums2[j]);
        j++;
    }


    int k = 0;

    while(k<m){
        nums1[k] = nums3[k];
        k++;
    }


}

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
    }
};