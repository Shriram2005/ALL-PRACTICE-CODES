
// Write a Java Program to print even rows from database.

import java.sql.*;

public class EvenRows {
	
	public static void main(String[] args) {

		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/Person", "root", "root");
			Statement st = conn.createStatement();
			String query = "SELECT * FROM human";
			ResultSet rs = st.executeQuery(query);
			while (rs.next()) {
				rs.next();
				int id = rs.getInt("id");
				String name = rs.getString("name");
				System.out.println("ID: " + id + " Name: " + name);
				
			}
		} catch (Exception ex) {
			ex.printStackTrace();
		}
	}
}
