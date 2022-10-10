package Java.Dynamic_Programming;
import java.util.*;
public class LongestPalindromicSubsequence {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        String a = scan.next();
        int m = a.length();

        LongestPalindromicSubsequence lps = new LongestPalindromicSubsequence();
        lps.getLPS(a,m);

        scan.close();
    }
    private void getLPS(String a,int m) {
        String b = new StringBuilder(a).reverse().toString();

        int dp[][] = new int[m+1][m+1];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0){
                    dp[i][j] = 0;
                }
                else if(a.charAt(i-1) == b.charAt(j-1)){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = Math.max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        int len = dp[m][m];

        String res = "";
        int i = m;
        int j = m;
        while (i > 0 && j > 0) {
            if (a.charAt(i - 1) == b.charAt(j - 1)) {
                res += Character.toString(a.charAt(i - 1));
                i--;
                j--;
            }
 
            else if (dp[i - 1][j] > dp[i][j - 1])
                i--;
            else
                j--;
        }
        System.out.println("Length of LPS is : "+ len);
        System.out.println("LPS string is : "+ new StringBuilder(res).reverse().toString());
    }
}
