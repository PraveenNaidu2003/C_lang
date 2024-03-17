public class Menashe {
    void meth1(){

    }
    void meth2(){}
    void meth3(){}
    void meth4(){}
    void meth5(){
        meth1();
        meth2();
        meth3();
        meth4();
        meth5();
    }
    public static void main(String[] args) {
        new Menashe().meth5();
    }
}
