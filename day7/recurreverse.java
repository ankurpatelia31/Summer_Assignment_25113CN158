import java.util.*;
public class recurreverse {
     static int reverse(int n,int sum)
    {
        if(n==0) return sum;
        int a= n%10;
        sum =sum*10+a;
        n=n/10;
        return reverse(n,sum);
    
    }
    public static void main(String[] args)
    {
        Scanner sc= new Scanner (System.in);
        System.out.println("enter the number");
        int n=sc.nextInt();
        System.out.print("The reverse is: "+ reverse(n,0));
    }
    
}
