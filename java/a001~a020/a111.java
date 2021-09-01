import java.util.Scanner;

public class a111 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNextInt()) {
            int x = sc.nextInt();
            if (x != 0) {
                System.out.println((int) (x * (x + 1) * (2 * x + 1) / 6));
            }
        }
        sc.close();
    }
}
