int searchInsert(int* nums, int numsSize, int target) {
   int i = 0;
   int j = 0;
  
   while(i < numsSize)
   {
    if(nums[i] >= target )
        return i;
    i++;
   } 
  
return i;
}