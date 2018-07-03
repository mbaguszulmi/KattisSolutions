import java.util.Scanner;

public class Cetvrta {
    public static void main(String[] args) {
        Scanner userIn = new Scanner(System.in);
        int[][] coordinates = new int[3][2];
        int[] missing = new int[2];

        for (int i = 0; i < 3; i++) {
            String[] xy = userIn.nextLine().split(" ");
            coordinates[i][0] = Integer.parseInt(xy[0]);
            coordinates[i][1] = Integer.parseInt(xy[1]);
        }

        boolean foundX = true, foundY = true;
        for (int i = 0; i < 3; i++) {
            if (foundX) {
                for (int j = 0; j < 3; j++) {
                    if (i != j) {
                        if (coordinates[i][0] == coordinates[j][0]) {
                            foundX = true;
                            break;
                        }
                        else {
                            foundX = false;
                            missing[0] = coordinates[i][0];
                        }
                    }
                }
            }

            if (foundY) {
                for (int j = 0; j < 3; j++) {
                    if (i != j) {
                        if (coordinates[i][1] == coordinates[j][1]) {
                            foundY = true;
                            break;
                        }
                        else {
                            foundY = false;
                            missing[1] = coordinates[i][1];
                        }
                    }
                }
            }

            if (!foundX && !foundY) {
                break;
            }
        }
        
        System.out.println(missing[0]+" "+missing[1]);
        userIn.close();
    }
}