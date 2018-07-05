// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/parking2
// http://www.mbaguszulmi.com

import java.util.Scanner;

public class Parking {
    public static int[] convertToOrderedIntegerArray(String[] pos) {
        int[] intArray = new int[pos.length];
        for (int i = 0; i < pos.length; i++) {
            intArray[i] = Integer.parseInt(pos[i]);
        }

        for (int i = 0; i < intArray.length-1; i++) {
            int idx = i;
            for (int j = i+1; j < intArray.length; j++) {
                if (intArray[idx] > intArray[j]) {
                    idx = j;
                }
            }
            int temp = intArray[i];
            intArray[i] = intArray[idx];
            intArray[idx] = temp;
        }
        return intArray;
    }

    public static int optimal(int[] intArray) {
        int distance=0;
        for (int i = 1; i < intArray.length; i++) {
            distance+=intArray[i]-intArray[i-1];
        }
        return distance*2;
    }

    public static void main(String[] args) {
        Scanner userIn = new Scanner(System.in);
        int t = userIn.nextInt();
        userIn.nextLine();
        int[] optimalDistance = new int[t];
        for (int i = 0; i < t; i++) {
            userIn.nextInt();
            userIn.nextLine();
            String[] input = userIn.nextLine().split(" ");
            optimalDistance[i] = optimal(convertToOrderedIntegerArray(input));
        }

        for (int i = 0; i < t; i++) {
            System.out.println(optimalDistance[i]);
        }
        userIn.close();
    }
}