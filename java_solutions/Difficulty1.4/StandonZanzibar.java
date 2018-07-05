// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/zanzibar
// http://www.mbaguszulmi.com

import java.util.Scanner;

public class StandonZanzibar {
    public static void main(String[] args) {
        Scanner userIn = new Scanner(System.in);
        int t = userIn.nextInt();
        userIn.nextLine();
        int[] lower = new int[t];
        for (int i = 0; i < t; i++) {
            String[] input = userIn.nextLine().split(" ");
            for (int j = 1; j < input.length-1; j++) {
                int before = Integer.parseInt(input[j-1]), after = Integer.parseInt(input[j]);
                if (after > before) {
                    int substract = after - (before*2);
                    if (substract > 0) {
                        lower[i]+=substract;
                    }
                }
            }
        }

        for (int i = 0; i < t; i++) {
            System.out.println(lower[i]);
        }
        userIn.close();
    }
}