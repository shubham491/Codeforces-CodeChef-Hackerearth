import java.util.*;
import java.io.*;

public class mohit_sharma {
    public static void main(String[] args) {
     Scanner input = new Scanner(System.in);
     long n;
     n = input.nextLong();
     
     long count =0;
     for(int i =5;i>0;i--){
     	 count += n/i;
     	 n = n%i;
     }
     System.out.print(count);
    
    }
}