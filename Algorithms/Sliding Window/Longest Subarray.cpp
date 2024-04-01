TC -> O(n+n)
SP -> O(1)

int func(vector<int> &nums, int k){
  
  int sum = 0;
  while(right < nums.size()){
      sum += nums[right];
      while(sum > k){
          sum -= nums[left];
          left++;
      }
      ans = max(ans, right-left+1);
      right++;
  }
  return ans;  
  
}

-------------------------------------------

TC -> O(n)
SP -> O(1)
  
int func(vector<int> &nums, int k){

  int sum = 0;
  while(right < nums.size()){
      sum += nums[right];
      if(sum > k){
          sum -= nums[left];
          left++;
      }
      ans = max(ans, right-left+1);
      right++;
  }
  return ans;  

}
