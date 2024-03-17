public class cls1 {
    public static void main(String[] args) {
        Student st1= new Student("Shiva", 15, 9.8f);
        st1.Status();
        MthOverLod m1= new MthOverLod();
        System.out.println(m1.add(56, 65));
        System.out.println(m1.add(12.f, 23.f));
        System.out.println(m1.add(56, 12.f));
    }
}
    