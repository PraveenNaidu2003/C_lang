// import java.util.stream.Stream;

// import java.sql.*;

// import javax.swing.text.StyleConstants;
public class database {
    public static void main(String[] args) {
        // static final String bd_con="jdbc:mysql://localhost/sriramana";
        // static final String user="root";
        // static final String pass="";
        // static final String quary="select * from catlog";
        Bhavanima bjn = new Bhavanima();
       System.out.println( bjn.getAme());
       bjn.setAme("Jai Jai Sri Raman Janaki Rama");
       System.out.print(bjn.getAme());
    }
}
