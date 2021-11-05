import java.util.Scanner;

public class Search {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter 10 numbers :");
        int[] a = new int[10];
        for (int i = 0; i < 10; i++) {
            a[i] = in.nextInt();
        }
        System.out.print("Enter a number to be searched : ");
        int key = in.nextInt();
        boolean found = false;
        for (int i = 0; i < 9; i++) {
            if (key == a[i]) {
                System.out.println("Location on element : " + (i + 1));
                found = true;
                break;
            }
        }
        if (!found) {
            System.out.println("Element Not Found");
        }
        in.close();
    }
}
