
import java.io.*;

public class bufferedReader {

    public static void main(String[] args) {
        File FILE = new File("C://Users//Shriram//OneDrive//Desktop//Advanced Java//demo.txt");

        try {
            String str;
            BufferedReader br = new BufferedReader(new FileReader(FILE));
            while ((str = br.readLine()) != null) {
                System.out.println(str);
            }
            br.close();
        } catch (Exception e) {
            System.out.println(e);
        }
        

    }
    
}