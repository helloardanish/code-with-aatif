import java.text.SimpleDateFormat;
import java.util.Date;
import java.time.*;
import java.util.concurrent.TimeUnit;
import java.lang.Math;

public class MyClass {
    public static void main(String args[]) {
              String date1 = "26-04-2023";
            String date2 = "23-04-2023";
            
            long ans = dateDiff(date1, date2);
            
            System.out.println("Days : "+ans);
            
    }
    
    public static long dateDiff(String str1, String str2){
        long daysDiff=0;
        try {
        // Convert `String` to `Date`
            SimpleDateFormat sdf = new SimpleDateFormat("dd-MM-yyyy");
            
            Date dateBefore = sdf.parse(str1);
            Date dateAfter = sdf.parse(str2);
        
        // Calculate the number of days between dates
            long timeDiff = Math.abs(dateAfter.getTime() - dateBefore.getTime());
            
            //long timeDiff = dateAfter.getTime() - dateBefore.getTime();
            
            //System.out.println("Time in milliseconds"+timeDiff);
            
            
            //System.out.println("\n\n\n Hours : "+timeDiff/1000/60/60);
            
            daysDiff = TimeUnit.DAYS.convert(timeDiff, TimeUnit.MILLISECONDS);
            
            //System.out.println("The number of days between dates: " + daysDiff);
        }catch(Exception e){
            e.printStackTrace();
        }
        
        return daysDiff;
        
    }
}
