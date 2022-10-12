class Solution {
   List<Integer> getPositiveCumulativeSum (int[] arr) {
       List<Integer> prefixSum = new ArrayList<Integer>();  
            for (int i = 0; i < arr.length; i++) {
               int prefix = 0;
               for (int j = 0; j <= i; j++) {
                   prefix += arr[j];
               }
               if(prefix > 0) {
                   prefixSum.add(prefix);
               }
            }
       return prefixSum;
   }
}
