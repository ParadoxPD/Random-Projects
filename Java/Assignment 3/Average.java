import java.util.Scanner;

public class Average {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter some numbers : ");
        String[] s = in.nextLine().split(" ");
        double avg = 0.0;
        for (int i = 0; i < s.length; i++) {
            avg += Double.parseDouble(s[i]);
        }
        avg /= s.length;
        System.out.println("The Average = " + avg);

        in.close();
    }
}
