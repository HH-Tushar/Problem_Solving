#include <iostream>
using namespace std;
#include <vector>

    int numIdenticalPairs(vector<int>& nums) {
        int total=0;
        int size=nums.size();
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                if(nums[i]==nums[j]){total++;}

            }
        }
        return total;
        
    }

int main(){
    vector<int> arr={1,2,3,2,3,4};
    cout<<numIdenticalPairs(arr);
}