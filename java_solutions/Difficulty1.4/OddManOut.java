// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/oddmanout
// http://www.mbaguszulmi.com

import java.util.Scanner;

public class OddManOut {
    public static String findOdd(String[] c) {
        String oddCode = "";
        for (int i = 0; i < c.length; i++) {
            int num = 0;
            for (int j = 0; j < c.length; j++) {
                if (j != i) {
                    if (Integer.parseInt(c[i]) == Integer.parseInt(c[j])) {
                        num++;
                        break;
                    }
                }
            }
            if (num == 0) {
                oddCode = c[i];
                break;
            }
        }
        return oddCode;
    }

    public static void main(String[] args) {
        Scanner userIn = new Scanner(System.in);
        int n = userIn.nextInt();
        userIn.nextLine();
        String[] odd = new String[n];
        for (int i = 0; i < n; i++) {
            userIn.nextLine();
            String[] c = userIn.nextLine().split(" ");
            odd[i] = findOdd(c);
        }

        for (int i = 0; i < n; i++) {
            System.out.println("Case #"+(i+1)+": "+odd[i]);
        }
        userIn.close();
    }
}