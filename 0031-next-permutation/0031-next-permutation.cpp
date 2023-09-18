class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
        
    }
};


// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {

//         int n=nums.size();
//         int k,l,id;
//         //step1: find index where nums[k]<nums[k+1] from back:
//         for(k=n-2;k>=0;k--){
//             if(nums[k]<nums[k+1]);
//             id=k;
//             break;
//         }
  
//        // Step 2: find from back: the 
//         if(id<0){
//             reverse(nums.begin(),nums.end());
//         }
//         else{
//             for(l=n-1;l>k;l--){
//                 if(nums[l]>nums[k]){
                    
//                      break;
//                 }
//             }
//             swap(nums[l],nums[k]);
//             reverse(nums.begin()+k+1,nums.end());
//         } 
//     }
// };

// class Solution {
//     // private:
//     // void reverse(vector<int>& nums, int s, int e) {
//     //     while(s < e) {
//     //         swap(nums[s++], nums[e--]);
//     //     }
//     // }
    
//     public:
//     void nextPermutation(vector<int>& nums) {
//         int n = nums.size();

//         int index = -1;
//         for(int i = n-2; i >= 0; i--) { // TC: O(n)
//             if(nums[i] < nums[i+1]) {
//                 index = i;
//                 break;
//             }
//         }
        
//         if(index != -1) {
//             for(int i=n-1;i>index;i--){ // TC: O(n)
//                 if(nums[i]>nums[index]){
//                     swap(nums[i],nums[index]);
//                     break;
//                 }
//             }
            
//         }

//         reverse(nums.begin()+index+1,nums.end()); // TC: O(n)
//     }
// };