// package day6;
import java.util.*;

public class decimaltobin {
    public static void main(String args[])
    {
        int a,ld,bin=0,c=1;
        Scanner x= new Scanner(System.in);
        System.out.println("enter the number");
        a=x.nextInt();
        while(a>0)
        {
            ld=a%2;
            bin=bin+(ld*c);
            a=a/2;
            c=c*10;

        }
        System.out.println(bin);


    }
    
}
