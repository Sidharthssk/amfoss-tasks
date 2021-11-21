import java.util.*;
public class Project_Euler_1_Multiples_of_3_and_5{

    

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0)
        {
            long n=sc.nextLong();
            long sum=0;
            for(int i=1;i<n;i++)
            {
                
                if(i%3 == 0 || i%5  ==0)sum+=i;
            }
            System.out.println(sum);
            --t;
        }
    }
}