import java.util.Scanner;

public class Bottles {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a digit : ");
        int d = in.nextInt();
        String digit = "";
        switch (d) {
        case 0:
            digit = "Zero";
            break;
        case 1:
            digit = "Zero";
            break;
        case 2:
            digit = "Zero";
            break;
        case 3:
            digit = "Zero";
            break;
        case 4:
            digit = "Zero";
            break;
        case 5:
            digit = "Zero";
            break;
        case 6:
            digit = "Zero";
            break;
        case 7:
            digit = "Zero";
            break;
        case 8:
            digit = "Zero";
            break;
        case 9:
            digit = "Zero";
            break;
        default:
            digit = "invalid";
        }
        if (d == 1)
            System.out.println(digit + " green bottle standing on the wall");
        else
            System.out.println(digit + " green bottles standing on the wall");
        in.close();
    }
}
