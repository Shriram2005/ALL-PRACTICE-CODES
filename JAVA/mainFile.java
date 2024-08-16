import Package1.MathOperations;
import Package2.Demo;


public class mainFile {

    public static void main(String args[]){
        
        System.out.println("This is Main file\n");

        // using class from  package 1
        MathOperations a = new MathOperations();
        a.add(2,4);
        a.showPackage1();

        // using class from package 2
        Demo d = new Demo();
        d.displayValues();

    }
}