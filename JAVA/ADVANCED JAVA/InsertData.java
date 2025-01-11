
// Write a Java Program for inserting 5 records in database.

import java.sql.*;
import java.util.*;

public class InsertData {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/Person", "root", "root");
			Statement st = conn.createStatement();
			for (int i = 0; i < 5; i++) {
				System.out.println("Enter id:");
				int id = sc.nextInt();
				System.out.println("Enter name:");
				String name = sc.next();
				Boolean b = st.execute("INSERT INTO human VALUES (" + id + ", ' " + name + " ')");
				System.out.println(b);
			}
		} catch (Exception e) {
			System.out.println(e);
		}

		sc.close();
	}
}
