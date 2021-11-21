import java.util.*;
public class Project_Euler_2_Even_Fibonacci_numbers{

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0)
        {
            long n=sc.nextLong();
            int a=1,b=2,c=0;
            int sum=2;
            do
            {
                c=a+b;
                a=b;
                b=c;
                if(c%2 == 0 && c<=n)
                {
                    sum+=c;
                   
                 }
            
            }while(c<=n);
            System.out.println(sum);
            --t;
    }
    sc.close();
}
}