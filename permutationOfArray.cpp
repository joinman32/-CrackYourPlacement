class Solution {
  public:
      bool isPossible(int k,vector<int> &arr1,vector<int> &arr2){
      if(arr1.size() != arr2.size()) return 0;
      sort(arr1.begin(),arr1.end());
      sort(arr2.begin(),arr2.end());

      for(int i=0;i<arr1.size();i++)
      {
          if((arr1[i]+arr2[i] ) < k) return 0;
      }
        return 1;
      }
};
