import javax.swing.*;
public class Gui {
    public static void main(String[] args) {
        JButton b= new JButton("Click Hear");
        JFrame f= new JFrame();
        b.setBounds(130,100,100,40);
        f.add(b);
        f.setSize(400, 400);
        f.setVisible(true);
        f.setLayout(null);
    }
}
