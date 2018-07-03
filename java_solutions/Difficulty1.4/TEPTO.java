import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class TEPTO {
    static int sumDigit(String numString) {
        int sum=0;
        for (int i = 0; i < numString.length(); i++) {
            sum+=Character.getNumericValue(numString.charAt(i));
        }
        return sum;
    }

    static int pValue(int num) {
        int p = 11, sumNDigit = sumDigit(Integer.toString(num));
        while (sumDigit(Integer.toString(p*num)) != sumNDigit) {
            p++;
        }
        return p;
    }

    public static void main(String[] args) {
        Scanner userIn = new Scanner(System.in);
        List<Integer> nice = new ArrayList<Integer>();
        List<Integer> p = new ArrayList<Integer>();
        while (true) {
            int num = userIn.nextInt();
            if (num != 0) {
                nice.add(num);
                p.add(pValue(num));
            }
            else {
                break;
            }
        }

        for (int i = 0; i < p.size(); i++) {
            System.out.println(p.get(i));
        }
        userIn.close();
    }
}