import java.util.Scanner;

public class a004 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int year;
        while (sc.hasNextInt()) {
            year = sc.nextInt();
            if (year % 400 == 0) {
                System.out.println("閏年");
            } else if (year % 100 == 0) {
                System.out.println("平年");
            } else if (year % 4 == 0) {
                System.out.println("閏年");
            } else {
                System.out.println("平年");
            }
        }
        sc.close();
    }
}
