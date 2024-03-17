public class Constractor {
    int x = 78;

    Constractor(int a) {
        x = a;
    }

    public static void main() {
        Constractor na = new Constractor(21);
        System.out.println(na.x);
    }
}
 