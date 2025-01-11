
// Write a java program to create XML file with user interaction

import java.io.FileWriter;
import java.util.Scanner;
import javax.xml.stream.*;

public class UserInteraction {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        try {
            // Create XML writer
            XMLOutputFactory factory = XMLOutputFactory.newInstance();
            XMLStreamWriter writer = factory.createXMLStreamWriter(new FileWriter("students.xml"));
            
            // Start document
            writer.writeStartDocument();
            writer.writeStartElement("students");
            
            // Get user input for one student
            System.out.print("Enter student name: ");
            String name = scanner.nextLine();
            System.out.print("Enter student PRN: ");
            String prn = scanner.nextLine();
            
            // Write student element
            writer.writeStartElement("student");
            
            writer.writeStartElement("name");
            writer.writeCharacters(name);
            writer.writeEndElement();
            
            writer.writeStartElement("prn");
            writer.writeCharacters(prn);
            writer.writeEndElement();
            
            writer.writeEndElement(); // end student
            writer.writeEndElement(); // end students
            
            writer.writeEndDocument();
            writer.close();
            
            System.out.println("XML file created successfully!");
            
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        } finally {
            scanner.close();
        }
    }
}