import java.util.Scanner;

class input{
    public static void main(String[] args){
        Scanner scan =new Scanner(System.in);
            System.out.printf("Enter a number : ");
            String a = scan.nextLine();
            System.out.printf("You entered : "+a);
            scan.close();
    }
}