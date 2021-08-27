import java.util.Scanner;
import java.util.Arrays;

public class d141 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i = sc.nextInt();
        sc.nextLine();
        for (; i != 0; i--) {
            String str[] = sc.nextLine().replace(",", " ").split(" ");
            int[] array = Arrays.asList(str).stream().mapToInt(Integer::parseInt).toArray();
            array[2] -= array[0]; // x2 -= x1
            array[4] -= array[0]; // x3 -= x1
            array[3] -= array[1]; // y2 -= y1
            array[5] -= array[1]; // y3 -= y1

            if (array[2] * array[5] - array[4] * array[3] != 0) { // x2*y3-x3*y2
                System.out.println("not collinear");
            } else {
                System.out.println("collinear");
            }
        }
        sc.close();
    }
}