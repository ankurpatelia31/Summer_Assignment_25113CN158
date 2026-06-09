import java.util.*;
import java.lang.*;
public class power {
    public static void main(String[] args)
    {
        int a, n,pow=1;
        Scanner x= new Scanner (System.in);
        System.out.println("enter the number");
        a=x.nextInt();
        System.out.println("enter the power");
        n=x.nextInt();
        for(int i=1;i<=n;i++)
        {
            pow*=a;
        }
        System.out.println(pow);
        

    }
    
}
