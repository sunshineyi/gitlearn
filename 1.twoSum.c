/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int i,j;
    const int N=2;
    int* sum=(int *)malloc(N*sizeof(int)); //要动态申请空间
    for(i=0;i<numsSize;++i){
        for(j=i+1;j<numsSize;++j){
            if(nums[i]+nums[j]==target){
                sum[0]=i;
                sum[1]=j;
                break;
            }
        }
    }
    return sum;
}
