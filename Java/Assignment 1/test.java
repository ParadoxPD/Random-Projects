
public class test {
    public static void main(String args[]) {

        int x = 1;
        int n = 10;

        System.out.println(series(n, x));

    }

    static int series(int n, int x) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += (power(x, i) / factorial(i));
        }
        return sum;
    }

    static int factorial(int n) {
        int p = 1;
        for (int i = 1; i <= n; i++)
            p *= i;
        return p;
    }

    static int power(int x, int pow) {
        int res = 1;
        for (int i = 0; i < pow; i++)
            res *= x;
        return res;
    }
}