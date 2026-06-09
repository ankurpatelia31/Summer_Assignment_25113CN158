import java.util.*;
import java.lang.*;
public class setbits{
    public static void main(String args[])
    {
        Scanner x= new Scanner(System.in);
        System.out.println("enter the decimal number");
        int a=x.nextInt();
        int ld,bin=0,c=1,count=0;
         while(a>0)
        {
            ld=a%2;
            bin=bin+(ld*c);
            a=a/2;
            c=c*10;

        }
        for(;bin>0;bin=bin/10)
            if(bin%10==1)
                count++;
        System.out.println(count);

    }
}