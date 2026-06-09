import java.util.*;
import java.lang.Math;
public class binarytodecimal 
{
   public static void main(String[] args)
   {
    Scanner sc = new Scanner(System.in);
    int a=0;
    double sum=0;
    System.out.println("enter the number");
    int n=sc.nextInt();
    int c=n;
    for(;n>0;n=n/10)
    a++;
    for(int i=0, j=c; i<a+1;i++,j=j/10)
    {
        int b=j%10;
        if(b==1)
        sum=sum+ Math.pow(2,i);
    }
    System.out.println(sum);
   }
    
}