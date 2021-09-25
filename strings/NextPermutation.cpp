class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
          bool val= next_permutation(arr.begin(),arr.end());
          return arr;
    }
};