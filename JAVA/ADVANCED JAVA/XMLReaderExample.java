
// Write a java program to read XML file using StAX api.

import javax.xml.stream.*;
import java.io.FileInputStream;

public class XMLReaderExample {
    public static void main(String[] args) {
        try {
            XMLInputFactory factory = XMLInputFactory.newInstance();
            XMLStreamReader reader = factory.createXMLStreamReader(
                new FileInputStream("output.xml"));
            
            while(reader.hasNext()) {
                reader.next();
                if(reader.isStartElement()) {
                    if(reader.getLocalName().equals("name")) {
                        System.out.println("Name: " + reader.getElementText());
                    }
                    if(reader.getLocalName().equals("prn")) {
                        System.out.println("PRN: " + reader.getElementText());
                        System.out.println("---------------");
                    }
                }
            }
            reader.close();
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}