import java.util.*;
import java.io.*;
 
public class Main {
    static int[] dx = {0,1,0,-1};   // 북동남서 (시계 방향)
    static int[] dy = {1,0,-1,0};
 
    static int N, T, total = 0;
    static int[][] map;
 
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine()," ");
        
        // 입력 받기
        N = Integer.parseInt(st.nextToken());
        T = Integer.parseInt(st.nextToken());
        
        char[] arr = br.readLine().toCharArray();
 
        map = new int[N][N];
        for(int i = 0 ; i < N ; i++) {
            st = new StringTokenizer(br.readLine()," ");
            for(int j = 0 ; j < N ; j++) {
                map[i][j] = Integer.parseInt(st.nextToken());
            }
        }
 
        int[] now = new int[]{N/2, N/2};
        total = map[now[0]][now[1]];    // 시작점도 더해야 하니까
        int dir = 3;  // 북쪽에서 시작
 
        // 이동하기
        for(int i = 0 ; i < arr.length ; i++) {
            if(arr[i] == 'L') { // 왼쪽으로 회전
                dir = (dir - 1 + 4) % 4;
            }
            else if(arr[i] == 'R') {    // 오른쪽으로 회전
                dir = (dir + 1) % 4;
            }
            else { // 앞으로 전진
                if(inRange(now[0] + dx[dir], now[1] + dy[dir])) {
                    now[0] += dx[dir];
                    now[1] += dy[dir];
                    total += map[now[0]][now[1]];
                }
            }
        }
 
        // 결과 출력하기
        System.out.println(total);
    }
 
    // 범위 확인 메소드
    private static boolean inRange(int x, int y) {
        if(x < 0 || x >= N || y < 0 || y >= N)
            return false;
        return true;
    }
}