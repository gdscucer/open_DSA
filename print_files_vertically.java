import java.util.ArrayList;
import java.util.List;

public class print_files_vertically {
    class Solution {
        public List<String> printVertically(String s) {
            String[] arr=s.split(" ");
            int max=0;
            for(String v:arr){
                max=Math.max(max,v.length());
            }

            List<String> ret=new ArrayList();
            for(int i=0;i<max;i++){
                String v="";
                for(int j=0;j<arr.length;j++){
                    int len=arr[j].length();
                    v+=(len<max && i>=len)?" ": arr[j].charAt(i);
                }
                ret.add(v.replaceAll("\\s+$",""));
            }
            return ret;
        }
    }
}
