import java.util.Scanner;

public class GCD {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter Two numbers : ");
        int a = in.nextInt();
        int b = in.nextInt();

        System.out.println("The GCD is :" + gcd(Math.max(a, b), Math.min(a, b)));
        in.close();
    }

    static int gcd(int a, int b) {
        if (b == 1)
            return a;
        return gcd(b, a % b);
    }
}
