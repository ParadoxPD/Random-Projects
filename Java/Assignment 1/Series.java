import java.util.Scanner;

public class Series {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter x : ");
        int x = in.nextInt();

        System.out.println("Enter n : ");
        int n = in.nextInt();

        System.out.println(series(n, x));
        in.close();
    }

    static int series(int n, int x) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += (Math.pow(x, i) / factorial(i));
        }
        return sum;
    }

    static int factorial(int n) {
        int p = 1;
        for (int i = 1; i <= n; i++)
            p *= i;
        return p;
    }
}