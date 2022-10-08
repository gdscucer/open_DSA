package Sorting;

import java.util.Arrays;

public class firstMissingPositive {
    public static void main(String[] args) {
        int[] arr = {4,0,2,6};
        firstMissingPositive(arr);
        System.out.println(Arrays.toString(arr));

    }
    static int firstMissingPositive(int[] nums) {
        int i = 0;
        while(i< nums.length){
            int correct = nums[i]-1;
            if(nums[i] > 0 && nums[i] <= nums.length && nums[i] != nums[correct]){
                swap(nums, i,correct);
            }else {
                i++;
            }
        }
        // search for first missing number
        for (int index = 0;index< nums.length;index++){
            if (nums[index] != index +1){
                return index +1;
            }
        }
        // case 2
        return nums.length +1;
    }

    static void swap(int[] arr, int first, int second){
        int temp= arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}
