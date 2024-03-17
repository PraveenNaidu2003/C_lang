class DanduGangala{
    String Color = "Blue";
    int pages = 200;
    float price = 25.50f;
    char ind = 'C';
    String Author;
    float Margin;
    int SP;
    static int num1;
    int num2;
    static void book(){
        num1=2;
        // num2=3;
    }
    void books(){
        num1=2;
        num2 = 89;
    }
    DanduGangala (String Auth, float Mar, int Sell){
        Author = Auth;
        System.out.print(Auth);
        System.out.print("String Auth, float Mar, int Sell");
    }

    DanduGangala (String Auth,  int Sell){
        Author = Auth;
        System.out.print(Auth);
        System.out.print("String Auth,  int Sell");
    }
    void namu(ganga g){
/*
 * Static Variable --->  Static Method  yes
 * Static Variable --->  Method   yes
 * Variable        --->  Static Method  No
 * Variable        --->  Method yes
 */
    }
    DanduGangala (String Auth){
        Author = Auth;
        System.out.print(Auth);
        System.out.print("String Auth");
    }

    DanduGangala (float sell,String Auth){
        Author = Auth;
        System.out.print(Auth);
        System.out.print("float sell,String Auth");
    }

    DanduGangala (String Auth,float sell){
        Author = Auth;
        System.out.print(Auth);
        System.out.println("float sell,String Auth");
    }

    DanduGangala(int sell , float fl){
        System.out.println("int sell , float fl");
    }


    DanduGangala(){
        System.out.println("Empty");
    }


    DanduGangala(String Buat,int Sell , float blo, double gh){
        System.out.println("String Buat,int Sell , float blo, double gh");   
    }
}
class PothurajuGaru {

}