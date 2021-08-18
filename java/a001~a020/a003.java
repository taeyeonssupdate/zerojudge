import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int M, D;
        M = sc.nextInt();
        D = sc.nextInt();
        switch ((M * 2 + D) % 3) {
            case 0:
                System.out.println("普通");
                break;
            case 1:
                System.out.println("吉");
                break;
            case 2:
                System.out.println("大吉");
                break;
        }
        sc.close();
    }
}
