package Java.Dynamic_Programming;
import java.util.*;
public class LongestCommonSubsequence {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        String a = scan.next();
        String b = scan.next();

        int m = a.length();
        int n = b.length();

        LongestCommonSubsequence lcs = new LongestCommonSubsequence();
        lcs.getLCS(a,b,m,n);

        scan.close();
    }
    private void getLCS(String a, String b, int m, int n) {
        int dp[][] = new int[m+1][n+1];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
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
        int len = dp[m][n];

        String res = "";
        int i = m;
        int j = n;
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
        System.out.println("Length of lCS is : "+ len);
        System.out.println("LCS string is : "+ new StringBuilder(res).reverse().toString());
    }
}
