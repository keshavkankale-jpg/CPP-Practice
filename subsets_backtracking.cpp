#include <iostream>
#include <vector>
using namespace std;
void subsets(vector<int>& nums, vector<int>& current, int i, vector<vector<int>>& result){
    if(i>=nums.size()){
        result.push_back(current);
        return;
    }
    current.push_back(nums[i]);
    subsets(nums, current, i+1, result);

    current.pop_back();
    subsets(nums, current, i+1, result);

}
int main(){
    vector<int> nums={1,2,3};
    vector<vector<int>> result;
    vector<int> current;
    subsets(nums, current, 0, result);


    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;

    }
}