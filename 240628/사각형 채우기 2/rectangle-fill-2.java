import java.io.*;
import java.util.*;

public class Main {

    static final int MOD = 10_007;
    static final int MAX_NUMBER = 1001;
    static int n;
    static int[] dp;

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringBuilder sb = new StringBuilder();

        n = Integer.parseInt(br.readLine());
        dp = new int[MAX_NUMBER];

        dp[1] = 1;
        dp[2] = 3;

        for (int i=3; i<=n; i++) {
            dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % MOD;
        }

        sb.append(dp[n]);

        bw.write(sb.toString());
        bw.close();
        br.close();
    }
}