import java.util.Scanner;

public class a065 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            String string = sc.nextLine();
            char ch[] = string.toCharArray();
            for (int i = 0; i < ch.length - 1; i++) {
                System.out.printf("%d", Math.abs(ch[i] - ch[i + 1]));
            }
            System.out.println();
        }
        sc.close();
    }
}