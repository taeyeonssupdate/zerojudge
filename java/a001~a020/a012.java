import java.util.Scanner;

public class a012 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNextLong()) {
            Long a = sc.nextLong();
            Long b = sc.nextLong();
            System.out.println(Math.abs(a - b));
        }
        sc.close();
    }
}
