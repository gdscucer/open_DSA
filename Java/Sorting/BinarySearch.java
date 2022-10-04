// Given an array of integers, return the number of times that two 6's are next to each other in the array. 
// Also count instances where the second element is 7 ( BINARY SEARCH )
// Shivam

package Java.Sorting;
import java.util.*;

public class BinarySearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array ");
        int size = sc.nextInt();
        int arr[] = new int[size];

        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println();

        Arrays.sort(arr);
        System.out.println("Enter the element you want to search: ");
        int key = sc.nextInt();
        int ub = size, lb = 0;
        int mid;
        while (lb != ub) {
            mid = (lb + ub) / 2;
            if (key < arr[mid]) {
                ub = mid - 1;
            } else if (key > arr[mid]) {
                lb = mid + 1;
            } else if (key == arr[mid]) {
                System.out.println("Element found");
                break;
            } else {
                System.out.println("Not found, invalid entry");
                break;
            }
        }
    }
}
