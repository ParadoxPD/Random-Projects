import java.util.Scanner;

public class Sort {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("Enter size :");
        int n = in.nextInt();
        System.out.println("Enter 10 numbers :");
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        sort(a);
        System.out.println("The Sorted array :");

        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + "\t");
        }
        in.close();
    }

    static void sort(int[] a) {
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a.length - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    swap(a, j, j + 1);
                }
            }
        }
    }

    static void swap(int[] a, int x, int y) {
        int temp = a[x];
        a[x] = a[y];
        a[y] = temp;
    }
}
