import java.util.Scanner;

public class a009 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        char[] ascii = sc.next().toCharArray();
        for (char c : ascii) {
            System.out.print((char) ((int) c - 7));
        }
        sc.close();
    }
}