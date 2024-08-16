import java.awt.*;
import java.awt.event.*;

public class LoginFrame extends Frame {
    private Label lblUsername, lblPassword;
    private TextField txtUsername, txtPassword;
    private Button btnLogin;

    LoginFrame() {
        setTitle("Login Page");
        setSize(300, 200);
        setLayout(new FlowLayout());

        lblUsername = new Label("Username:");
        add(lblUsername);

        txtUsername = new TextField(20);
        add(txtUsername);

        lblPassword = new Label("Password:");
        add(lblPassword);

        txtPassword = new TextField(20);
        txtPassword.setEchoChar('*');
        add(txtPassword);

        btnLogin = new Button("Login");
        btnLogin.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String username = txtUsername.getText();
                String password = txtPassword.getText();

                // Add your login logic here

                if (username.equals("admin") && password.equals("password")) {
                    System.out.println("Login successful");
                } else {
                    System.out.println("Login failed");
                }
            }
        });
        add(btnLogin);

        setVisible(true);
    }

    public static void main(String[] args) {
        new LoginFrame();
    }
}