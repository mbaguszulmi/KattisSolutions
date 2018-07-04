// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/cups
// http://www.mbaguszulmi.com

import java.util.Scanner;

public class StackingCups {
    public static void main(String[] args) {
        Scanner userIn = new Scanner(System.in);
        int n = userIn.nextInt();
        userIn.nextLine();
        String[] colors = new String[n];
        int[] radius = new int[n];
        for (int i = 0; i < n; i++) {
            String[] cup = userIn.nextLine().split(" ");
            try {
                radius[i] = Integer.parseInt(cup[1]);
                colors[i] = cup[0];
            } catch (Exception e) {
                radius[i] = Integer.parseInt(cup[0])/2;
                colors[i] = cup[1];
            }
        }

        for (int i = 0; i < n; i++) {
            int idx = i, temp;
            String tempString;
            for (int j = i+1; j < n; j++) {
                if (radius[idx] > radius[j]) {
                    idx = j;
                }
            }

            if (i < n-1) {
                temp = radius[i];
                radius[i] = radius[idx];
                radius[idx] = temp;
    
                tempString = colors[i];
                colors[i] = colors[idx];
                colors[idx] = tempString;
            }
            System.out.println(colors[i]);
        }
        userIn.close();
    }
}