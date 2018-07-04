import java.util.Scanner;

public class NumberFun {
    public static void main(String[] args) {
        Scanner userIn = new Scanner(System.in);
        int n = userIn.nextInt();
        userIn.nextLine();
        String[] result = new String[n];
        for (int i = 0; i < n; i++) {
            int a, b, c;
            String[] numbers = userIn.nextLine().split(" ");
            a = Integer.parseInt(numbers[0]);
            b = Integer.parseInt(numbers[1]);
            c = Integer.parseInt(numbers[2]);

            if (a+b == c || a-b == c || b-a == c || a*b == c || (a/b == c && a%b == 0) || (b/a == c && b%a == 0)) {
                result[i] = "Possible";
            }
            else {
                result[i] = "Impossible";
            }
        }

        for (int i = 0; i < n; i++) {
            System.out.println(result[i]);
        }
        userIn.close();
    }
}