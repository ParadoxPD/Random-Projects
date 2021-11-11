import java.util.Scanner;

public class GCDLCM {
    public static void main(String[] args) {
        try {
            Scanner in = new Scanner(System.in);
            System.out.println("Enter Two numbers : ");
            int a = in.nextInt();
            int b = in.nextInt();

            System.out.println("The GCD is :" + gcd(Math.max(a, b), Math.min(a, b)));
            System.out.println("The LCM is :" + lcm(Math.max(a, b), Math.min(a, b)));
            in.close();
        } catch (Exception e) {
            System.out.println("Invalid Input");
        }
    }

    static int gcd(int a, int b) {
        if (b == 1)
            return a;
        return gcd(b, a % b);
    }

    static int lcm(int a, int b) {
        int res = 0;
        for (int i = a; i < a * b; i++) {
            if (a % i == 0 && b % i == 0) {
                res = i;
                break;
            }

        }
        return res;
    }
}
