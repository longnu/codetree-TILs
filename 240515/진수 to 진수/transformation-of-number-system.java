import java.io.*;
import java.util.*;
import java.util.stream.*;

public class Main {
    public static int baseA, baseB;
    public static List<Integer> baseBNum = new ArrayList<>();
    public static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] base = Arrays.stream(br.readLine().trim().split(" ")).mapToInt(Integer::parseInt).toArray();
        baseA = base[0];
        baseB = base[1];
        List<Integer> inputNum = Arrays.stream(br.readLine().trim().split("")).map(Integer::parseInt).collect(Collectors.toCollection(ArrayList::new));
        int decimal = 0;
        for (Integer ele : inputNum) {
            decimal = decimal * baseA + ele;
        }
        
        while (true) {
            if (decimal < baseB) {
                baseBNum.add(decimal);
                break;
            }
            baseBNum.add(decimal % baseB);
            decimal /= baseB;
        }

        Collections.reverse(baseBNum);
        baseBNum.stream().forEach(sb::append);
        System.out.println(sb);
        br.close();
    }
}