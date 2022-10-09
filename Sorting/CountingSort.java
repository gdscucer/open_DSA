/**
 * 1. Counting sort is a sorting technique based on keys between a specific range.
 * 2. It works by counting the number of objects having distinct key values.
 * 3. O(n+k) where n is the number of elements in the input array and k is the range of input. 
 */

package Sorting;

import java.util.Scanner;

public class CountingSort {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i] =  scan.nextInt();
        }

        System.out.println("Arrays before sorting");
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();

        CountingSort sort = new CountingSort();
        sort.countingSort(arr);
        
        System.out.println("Arrays after sorting");
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }

        scan.close();
    }

    private void countingSort(int[] arr) {
        int max = getMax(arr);
        int min = getMin(arr);

        int range = max - min + 1;
        int count[] = new int[range];
        int output[] = new int[arr.length];

        for (int i = 0; i < arr.length; i++) {
            count[arr[i] - min]++;
        }
  
        for (int i = 1; i < count.length; i++) {
            count[i] += count[i - 1];
        }
  
        for (int i = arr.length - 1; i >= 0; i--) {
            output[count[arr[i] - min] - 1] = arr[i];
            count[arr[i] - min]--;
        }
  
        for (int i = 0; i < arr.length; i++) {
            arr[i] = output[i];
        }
    }

    private int getMax(int[] arr) {
        int max = Integer.MIN_VALUE;
        for(int i : arr){
            max = Math.max(max, i);
        }
        return max;
    }

    private int getMin(int[] arr) {
        int min = Integer.MAX_VALUE;
        for(int i : arr){
            min = Math.min(i, min);
        }
        return min;
    }
}

// Contributor : Rishabh Srivastava 
// Github Link : https://github.com/RishabhSrivastava1423/