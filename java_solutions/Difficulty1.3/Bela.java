import java.util.Scanner;

public class Bela {
    static int value(String pair, char b) {
        int score = 0;
        if (pair.charAt(0) == 'A') {
            score = 11;
        }
        else if (pair.charAt(0) == 'K') {
            score = 4;
        }
        else if (pair.charAt(0) == 'Q') {
            score = 3;
        }
        else if (pair.charAt(0) == 'J') {
            if (pair.charAt(1) == b) {
                score = 20;
            } else {
                score = 2;
            }
        }
        else if (pair.charAt(0) == 'T') {
            score = 10;
        }
        else if (pair.charAt(0) == '9') {
            if (pair.charAt(1) == b) {
                score = 14;
            }
        }
        return score;
    }

    public static void main(String[] args) {
        Scanner userIn = new Scanner(System.in);
        String[] str = userIn.nextLine().split(" ");
        int n = Integer.parseInt(str[0]), score = 0;
        char b = str[1].charAt(0);
        
        String[] pairs = new String[4*n];
        for (int i = 0; i < 4*n; i++) {
            pairs[i] = userIn.nextLine();
            score+=value(pairs[i], b);
        }

        System.out.println(score);
        userIn.close();
    }
}