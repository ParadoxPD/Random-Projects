import java.util.Scanner;

//Write a Java program to test the number is prime or composite.
public class PrimeComposite {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a number :");
        int n = in.nextInt();
        if (isPrime(n)) {
            System.out.println("The number is prime");
        } else {
            System.out.print("The number is composite");
        }
        in.close();
    }

    static boolean isPrime(int n) {
        int c = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                c++;
        }
        return c == 2;
    }
}
