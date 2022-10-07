import java.util.ArrayList;
import java.util.List;
/*
Time-1ms
Space-41.8MB
 */
public class Camel_case_matching {
    public List<Boolean> camelMatch(String[] queries, String pattern) {
        List<Boolean> answer = new ArrayList<>();
        char[] pA=pattern.toCharArray();
        for(String query:queries){
            answer.add(match(query,pA));
        }
        return answer;
    }

    private boolean match(String original,char pattern[]){
        char[] arr=original.toCharArray();
        int pC=0;
        for(int i=0;i<arr.length;i++){
            if(pC<pattern.length && arr[i]==pattern[pC]){pC++;}
            else{
                if(arr[i]<'a' || arr[i]>'z'){return false;}
            }
        }

        if(pC!=pattern.length){
            return false;
        }
        return true;
    }
}
