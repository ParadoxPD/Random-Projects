import java.util.*;


public class Buyer{
    public class AC_Accessories{
    
    String partName;
    String partModel;
    double price;
    
    AC_Accessories(){
        this.partName = "";
        this.partModel = "";
        this.price = 0.0;
    }
    
     
     
     public void input(){
         Scanner in = new Scanner(System.in);
         System.out.print("Enter a part name : ");
         this.partName = in.nextLine();
         System.out.print("Enter a part Model : " );
         this.partModel = in.nextLine();
         System.out.print("Enter a price : ");
         this.price = in.nextDouble();
     }
     
     
     public void display(){
         System.out.println("Part name : "+this.partName);
         System.out.println("Part model : "+this.partModel);
         System.out.println("Price : "+this.price);
     }
}

    AC_Accessories[] data;
    String buyerName;
    String purchaseDate;
    double totalAmount;
    
    Buyer(){
        this.buyerName = "";
        this.purchaseDate = "";
        this.totalAmount = 0.0;
    }
    
    
    void purchase(){
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the Buyer Name : ");
        this.buyerName = in.nextLine();
        System.out.print("Enter the Purchase Date : ");
        this.purchaseDate = in.nextLine();
        System.out.print("Enter the number of accessories : ");
        int n = in.nextInt();
        
        this.data = new AC_Accessories[n];
        
        for(int i=0;i<n;i++){
            this.data[i] = new AC_Accessories();
            System.out.println("Item Number "+(i+1)+": "); 
            this.data[i].input();
            totalAmount += this.data[i].price;
        }
        
        
        
    }
    
    
     public void display(){
         System.out.println("Buyer Name : "+this.buyerName);
         System.out.println("Purchase Date : "+this.purchaseDate);
         System.out.println("Number of accessories : "+this.data.length);
         
         for(int i =0;i< this.data.length;i++){
            System.out.println("Item Number "+(i+1)+": "); 
            this.data[i].display();
}
         System.out.println("Total Amount : "+this.totalAmount);
     }
    
     public static void main(String []args){
        Buyer buyer = new Buyer();
        
        buyer.purchase();
        buyer.display();
     }
}