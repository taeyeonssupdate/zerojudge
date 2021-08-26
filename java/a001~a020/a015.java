import java.util.Scanner;

public class a015 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            int row = sc.nextInt();
            int col = sc.nextInt();
            int arr[][] = new int[col][row];
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    // arr1[i][j] = sc.nextInt();
                    // arr2[j][i] = arr1[i][j];
                    arr[j][i] = sc.nextInt();
                }
            }
            for (int a[] : arr) {
                for (int b : a) {
                    System.out.printf("%s ", b);
                }
                System.out.println();
            }
        }
        sc.close();
    }
}