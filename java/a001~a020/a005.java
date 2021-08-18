import java.util.Scanner;

public class a005 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int a, b, c, d;
        for (int range = sc.nextInt(); range > 0; range--) {
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            d = sc.nextInt();
            if (d - c == b - a) {
                System.out.printf("%d %d %d %d %d\n", a, b, c, d, (b - a + d));
            } else {
                System.out.printf("%d %d %d %d %d\n", a, b, c, d, (int) (b / a) * d);
            }
        }
        sc.close();
    }
}
