import java.util.*;
public class Triangle {
    public static void main(String args[]) {
        
        Scanner in = new Scanner(System.in);
        System.out.print("Enter Three Numbers : ");
        double a = in.nextDouble();
        double b = in.nextDouble();
        double c = in.nextDouble();
        
        if(a == b && b==c)
            System.out.println("Equilateral Triange");
        else if(a==b || b==c || c==a)
            System.out.println("Isosceles Triangle");
        else 
            System.out.println("Scalene Triangle");
        
        if(a*a + b*b == c*c || c*c + b*b == a*a || a*a + c*c == b*b)
            System.out.println("Right Angle Triangle");
        

    }
}