// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/quickestimate
// http://www.mbaguszulmi.com

import java.util.Scanner;

public class QuickEstimates {
    public static void main(String[] args) {
        Scanner userIn = new Scanner(System.in);
        int n = userIn.nextInt();
        userIn.nextLine();
        int[] digit = new int[n];
        for (int i = 0; i < n; i++) {
            String a = userIn.nextLine();
            digit[i] = a.length();
        }

        for (int i = 0; i < n; i++) {
            System.out.println(digit[i]);
        }
        userIn.close();
    }
}