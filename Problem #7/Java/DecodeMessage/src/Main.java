public class Main {
    public static void main(String[] args) {
        DecodeMsg dec = new DecodeMsg();

        dec.Decode("111");
        System.out.println("'111' can be decoded in " + dec.getNumberOfDecodedMsg() + " ways");

        dec.Decode("1111");
        System.out.println("'1111' can be decoded in " + dec.getNumberOfDecodedMsg() + " ways");

        dec.Decode("321");
        System.out.println("'321' can be decoded in " + dec.getNumberOfDecodedMsg() + " ways");
    }
}
