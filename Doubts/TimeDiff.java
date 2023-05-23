import java.text.SimpleDateFormat;
import java.util.Date;
import java.time.*;
import java.util.concurrent.TimeUnit;
import java.lang.Math;

public class MyClass {
    public static void main(String args[]) {
              try {
        // Convert `String` to `Date`
            SimpleDateFormat sdf = new SimpleDateFormat("dd-MM-yyyy");
            String date1 = "26-04-2023";
            String date2 = "23-04-2023";
            
            Date dateBefore = sdf.parse(date1);
            Date dateAfter = sdf.parse(date2);
        
        // Calculate the number of days between dates
            long timeDiff = Math.abs(dateAfter.getTime() - dateBefore.getTime());
            
            //long timeDiff = dateAfter.getTime() - dateBefore.getTime();
            
            System.out.println("Time in milliseconds"+timeDiff);
            
            
            System.out.println("\n\n\n Hours : "+timeDiff/1000/60/60);
            
            long daysDiff = TimeUnit.DAYS.convert(timeDiff, TimeUnit.MILLISECONDS);
            
            System.out.println("The number of days between dates: " + daysDiff);
        }catch(Exception e){
            e.printStackTrace();
        }
    }
}
