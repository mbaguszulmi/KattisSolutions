// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/skener
// http://www.mbaguszulmi.com

import java.util.Scanner;

public class Skener {
    public static void main(String[] args) {
        Scanner userIn = new Scanner(System.in);
        int r, c, zr, zc;
        String[] input = userIn.nextLine().split(" ");
        r = Integer.parseInt(input[0]);
        c = Integer.parseInt(input[1]);
        zr = Integer.parseInt(input[2]);
        zc = Integer.parseInt(input[3]);
        String[] chars = new String[r];
        for (int i = 0; i < r; i++) {
            chars[i] = userIn.nextLine();
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < zr; j++) {
                for (int k = 0; k < c; k++) {
                    for (int l = 0; l < zc; l++) {
                        System.out.printf("%c", chars[i].charAt(k));
                    }
                }
                System.out.println();
            }
            
        }
        userIn.close();
    }
}