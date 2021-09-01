import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class a011 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNextLine()) {
            String str = sc.nextLine();
            Matcher findall = Pattern.compile("[a-zA-z]+").matcher(str);
            int count = 0;
            while (findall.find()) {
                count++;
            }
            System.out.println(count);
        }
        sc.close();
    }
}
