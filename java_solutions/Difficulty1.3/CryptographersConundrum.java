import java.util.Scanner;

public class CryptographersConundrum {
    public static void main(String[] args) {
        Scanner userIn = new Scanner(System.in);
        String cipher = userIn.nextLine();
        char[] per = {'P', 'E', 'R'};
        int count = 0;
        int dayNeeded = 0;
        // System.out.println(cipher.charAt(1));
        for (int i = 0; i < cipher.length(); i++) {
            if (cipher.charAt(i) != per[count]) {
                dayNeeded++;
            }

            if (count != 2) {
                count++;
            }
            else {
                count = 0;
            }
        }

        System.out.println(dayNeeded);
        userIn.close();
    }
}