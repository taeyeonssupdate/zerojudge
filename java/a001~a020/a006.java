import java.util.Scanner;

public class a006 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        Double a, b, c;
        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();
        if (b * b - 4 * a * c < 0) {
            System.out.println("No real root");
        }
        if (b * b - 4 * a * c == 0) {
            System.out.printf("Two same roots x=%d", (int) (-b / (2 * a)));
        }
        if (b * b - 4 * a * c > 0) {
            Double temp = (b * b - 4 * a * c);
            System.out.printf("Two different roots x1=%d , x2=%d", (int) ((-b + temp) / (2 * a)),
                    (int) ((-b - temp) / (2 * a)));
        }
        sc.close();
    }
}
