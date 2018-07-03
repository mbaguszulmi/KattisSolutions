import java.util.Scanner;

public class Apaxiaaaaaaaaaaaans {
    public static void main(String[] args) {
        Scanner userIn = new Scanner(System.in);
        String name = userIn.nextLine(), compact = "";
        compact+=name.charAt(0);
        int lastIdx = 0;
        for (int i = 1; i < name.length(); i++) {
            if (name.charAt(i) != compact.charAt(lastIdx)) {
                compact+=name.charAt(i);
                lastIdx++;
            }
        }
        System.out.println(compact);
        userIn.close();
    }
}