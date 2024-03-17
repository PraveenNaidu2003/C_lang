class ShankaraBank {
    int princ = 1000;
    int time = 2;
    float rate = 8.5f;
    float total;
    void genearl(){}
    float Intrest(){
        return princ*time*rate/100;
    }
    static void Nam3(){System.out.print("sri Ram");}
    float Amount( ){
        return princ+this.Intrest();
    }
    public static void main(String[] args) {
        
    }
}
class SBI extends ShankaraBank{
   void genearl(){}
   public static void main(String[] args) {
    
   }
   static void Nam3(){
        System.out.println("jai jai Sri rama Rama");
    }
    float Amount( ){
        return princ+this.Intrest()+52;
    }
}
public class Shankara{
    
    public static void main(String[] args) {
        SBI na=new SBI();
        System.out.println(new ShankaraBank().Amount()); 
        System.out.println(na.Amount());
        na.Nam3();
       
        System.out.println(new ShankaraBank());
    }
}