
// Write A Java Program to write XML file using StAX

import java.io.FileWriter;
import javax.xml.stream.*;

public class XMLWriterExample {
    public static void main(String[] args) {
        try {
            // Create an XMLStreamWriter
            XMLOutputFactory outputFactory = XMLOutputFactory.newInstance();
            XMLStreamWriter writer;

            writer = outputFactory.createXMLStreamWriter(new FileWriter("output.xml"));

            // Write the XML declaration
            writer.writeStartDocument();

            // Write the root element <students>
            writer.writeStartElement("students");

            // Write the first student element
            writer.writeStartElement("student");
            writer.writeStartElement("name");
            writer.writeCharacters("Shriram");
            writer.writeEndElement(); // End name element
            writer.writeStartElement("prn");
            writer.writeCharacters("28");
            writer.writeEndElement(); // End prn element
            writer.writeEndElement(); // End student element

            // Write the second student element
            writer.writeStartElement("student");
            writer.writeStartElement("name");
            writer.writeCharacters("Manasi");
            writer.writeEndElement(); // End name element
            writer.writeStartElement("prn");
            writer.writeCharacters("24");
            writer.writeEndElement(); // End prn element
            writer.writeEndElement(); // End student element

            // End the root element </students>
            writer.writeEndElement(); // End students element

            // End the document
            writer.writeEndDocument();

            // Close the writer
            writer.close();

            System.out.println("XML file created successfully.");
        } catch (Exception e) {
            System.out.print(e.getMessage());
        }
    }
}
