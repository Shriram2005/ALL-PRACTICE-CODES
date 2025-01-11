
import java.sql.*;

public class ReadFromDatabase {
    public static void main(String[] args) {

        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/shriram", "root", "root");
            System.out.println("Connected to the database successfully!");

            // Create a statement object/
            Statement statement = con.createStatement();

            String sql = "SELECT id, name, email FROM students";
            ResultSet rs = statement.executeQuery(sql);

            System.out.println("ID\tName\t\tEmail");
            while (rs.next()) {
                int id = rs.getInt("id");
                String name = rs.getString("name");
                String email = rs.getString("email");

                System.out.println(id + " " + name + " " + email);
            }
            rs.close();
            statement.close();
            con.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
