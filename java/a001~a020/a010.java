import java.util.Scanner;
import java.util.ArrayList;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        String ans = "";
        ArrayList<Integer> eratosthenes = Eratosthenes.eratosthenes(num);

        for (int prime : eratosthenes) {
            int times = 0;
            while (num % prime == 0) {
                times += 1;
                num = (int) (num / prime);
            }
            if (times != 0) {
                if (ans != "") {
                    ans += " * ";
                }
                if (times > 1) {
                    ans += prime + "^" + times;
                } else {
                    ans += prime;
                }
            }
            if (prime > num) {
                break;
            }
        }
        System.out.println(ans);
        sc.close();
    }
}

class Eratosthenes {
    // 埃拉托斯特尼篩法
    static ArrayList<Integer> eratosthenes(int num) {
        boolean prime_boolean[] = new boolean[num + 1];
        ArrayList<Integer> prime = new ArrayList<Integer>();
        for (int i = 0; i <= num; i++) {
            prime_boolean[i] = true;
        }

        for (int p = 2; p * p <= num; p++) {
            if (prime_boolean[p] == true) {
                for (int i = p * p; i <= num; i += p) {
                    prime_boolean[i] = false;
                }
            }
        }
        for (int i = 2; i <= num; i++) {
            if (prime_boolean[i] == true) {
                prime.add(i);
            }
        }
        return prime;
    }
}