// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/ptice
// http://www.mbaguszulmi.com

import java.util.Scanner;

public class Ptice {
    public static void main(String[] args) {
        Scanner userIn = new Scanner(System.in);
        // String adrian = "ABC", bruno = "BABC", goran =  "CCAABB";
        String[][] ans = {
            {"Adrian", "ABC"},
            {"Bruno", "BABC"},
            {"Goran", "CCAABB"}
        };
        int[] score = {0, 0, 0};
        int n = userIn.nextInt(), max = 0;
        userIn.nextLine();
        String correct = userIn.nextLine();
        for (int i = 0; i < 3; i++) {
            int idx = 0;
            for (int j = 0; j < n; j++) {
                if (correct.charAt(j) == ans[i][1].charAt(idx)) {
                    score[i]++;
                }
                if (idx < ans[i][1].length()-1) {
                    idx++;
                }
                else {
                    idx = 0;
                }
            }
            if (max < score[i]) {
                max = score[i];
            }
        }

        System.out.println(max);
        for (int i = 0; i < 3; i++) {
            if (score[i] == max) {
                System.out.println(ans[i][0]);
            }
        }
        userIn.close();
    }
}