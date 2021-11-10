import java.util.Scanner;

public class Encryption {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("Enter Message : ");
        String s = in.nextLine();
        s = s.replace(' ', '*');
        int size = (int) Math.ceil(Math.sqrt(s.length()));
        int dots = size * size - s.length();
        for (int i = 0; i < dots; i++)
            s += '.';
        char[][] cypher = new char[size][size];
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cypher[i][j] = s.charAt(i * size + j);
            }
        }
        String cypherText = transposeCypher(cypher, size);
        System.out.println("The Encrypted Message : " + cypherText);
        in.close();
    }

    static String transposeCypher(char[][] cypher, int size) {
        String cypherMessage = "";
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cypherMessage += cypher[j][i];
            }
        }
        return cypherMessage;
    }
}
