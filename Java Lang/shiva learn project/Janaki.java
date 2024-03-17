public class Janaki {
    String name = "Ganesh";
    
    Janaki(int num){
        // this();
        
        System.out.println("Ohm Namo Shivaya");        
    }
    Janaki(){
        this(12);
        System.out.println("Jai Jai Sri Ram Jai Sri Ram");
    }
    public static void main(String[] args) {
        Janaki na = new Janaki(52);
        na.name = "Ganga Amma Amma Ganaga Amma";
        na.neww(na);
    }
    void neww(Janaki na){
        System.out.println("Jai Janaki Nayaka Sri Janaki Nayaka");
        System.out.println(na.name);
        System.out.println("");
    }
}
 