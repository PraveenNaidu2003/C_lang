public class Student {
    String name;
    int roll;
    float cgp;

    Student(String Name,int Roll,float Cgp) {
       name=Name;
       roll=Roll;
       cgp=Cgp;
    }
    void Status() {
        if(cgp>=6){
            System.out.println(name + " Is Passed");
        }
        else{
            System.out.println(name+" is Failed");
        }
    }
}
