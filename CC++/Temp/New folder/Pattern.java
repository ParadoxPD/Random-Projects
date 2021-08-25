import java.util.*;
public class Pattern {
    public static void main(String args[]) {
      System.out.print( "Enter the number of rows : ");
      Scanner in = new Scanner(System.in);
      int r = in.nextInt();
      for(int i = 1; i <= (r+1)/2 ; i++)
      {
          for(int j = (r+1)/2-i ; j>0 ; j--)
          System.out.print(" ");
          for(int j = 0; j < i; j++)
          System.out.print("x ");
       	   
          System.out.println();
          
      }
    for(int i = (r+1)/2-1; i >0 ; i--)
      {
          for(int j = (r+1)/2-i ; j>0 ; j--)
          System.out.print(" ");
          for(int j = 0; j < i; j++)
          System.out.print("x ");
       	   
          System.out.println();
          
      }
    }
}