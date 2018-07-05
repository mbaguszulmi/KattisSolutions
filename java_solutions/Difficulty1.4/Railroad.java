// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/railroad2
// http://www.mbaguszulmi.com

import java.util.Scanner;

public class Railroad {
    public static void main(String[] args) {
        Scanner userIn = new Scanner(System.in);
        String[] input = userIn.nextLine().split(" ");
        if (Integer.parseInt(input[1])%2 == 0) {
            System.out.println("possible");
        }
        else {
            System.out.println("impossible");
        }
        userIn.close();
    }
}