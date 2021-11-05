public class CountPrimes {

    public static void main(String[] args) {
        int c = 0;
        for (int i = 37; i <= 129; i++)
            if (prime(i))
                c++;
        System.out.println(c);
    }

    static boolean prime(int n) {
        int c = 0;

        for (int i = 1; i <= n; i++)
            if (n % i == 0)
                c++;

        return (c == 2);
    }
}