
import java.io.*;

public class fileReader {

    public static void main(String[] args) {
        int i = 0;
        try {
            File FILE = new File("C://Users//Shrira//OneDrive//Desktop//Advanced Java//demo.txt");
            FileReader fr = new FileReader(FILE);
            while ((i = fr.read()) != -1) {
                System.out.print((char) i);
            }   
            fr.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
