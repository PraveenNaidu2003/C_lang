public class Lalith {
    String Name, Roll;
    int marks;
    float percent;
    static String School = "ZPP High School Tholeru";
    // Lalith(String Name,String Roll, int marks, float percent){
    //     this.marks= marks;
    //     this.Name=Name;
    //     this.Roll= Roll;
    //     this.percent=percent;
    // }
    // Lalith(){}
    // Lalith(Lalith l){
    //     this.marks=l.marks;
    //     this.Name=l.Name;
    //     this.Roll=l.Roll;
    //     this.percent=l.percent;
    //     // Lalith na= new Lalith(l);
    // }
    static void nameChange(String name){
        School= name; 
    }
    public static void main(String[] args) {
        // // Lalith s1=new Lalith("Shiva","21B91A6206",67,78.89f);
        // System.out.println(School);
        // // Lalith stu=new Lalith(s1);
        // System.out.println(s1.School+ " "+ stu.School);
        // School = "jai ram";
        // s1.Name = "rama";
        System.out.println(School);
    }
}
