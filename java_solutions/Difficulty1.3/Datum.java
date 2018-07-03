import java.util.*;
import java.text.*;

public class Datum {
    public static void main(String[] args) {
        Scanner userIn = new Scanner(System.in);
        String dm = userIn.nextLine();
        dm += " 2009";

        SimpleDateFormat form = new SimpleDateFormat("d M yyyy");
        SimpleDateFormat dayOnly = new SimpleDateFormat("EEEEEEEEE");
        Date dateOf2009;

        try {
            dateOf2009 = form.parse(dm);
            System.out.println(dayOnly.format(dateOf2009));
        } catch (ParseException e) {
            System.out.println("Parsing error : "+e);
        }
        userIn.close();
    }
}