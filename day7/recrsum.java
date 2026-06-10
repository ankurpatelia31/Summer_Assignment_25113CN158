import java.util.*;
import java.lang.*;


public class recrsum {
    
     static int count(int n)
    {
        
        if(n<=0) return 0;
        int a=n%10;
        n=n/10;
        return a+count(n);

    }
    public static void main(String args[])
    {

        Scanner sc= new Scanner (System.in);
        System.out.println("enter the number");
        int n=sc.nextInt();
        System.out.println("the sum is: " + count(n));
    }


    
}
