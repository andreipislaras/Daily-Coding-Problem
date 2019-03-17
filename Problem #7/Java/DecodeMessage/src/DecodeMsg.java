public class DecodeMsg {
    private final int kMappingMin = 1;
    private final int kMappingMax = 26;
    private int mNumberOfDecodedMsg = 0;

    /**
     * Msg: 1111
     * Decode k1(1: 111) -> DecRec k1(1 : 11) -> DecRec k1(1 : 1) -> DecRec k1(1: ) *
     *                                        -> DecRec k2(11: ) *
     *
     *                   -> DecRec k2(11 : 1) -> DecRec k1(1: ) *
     *
     *                   -> DecRec k3(111 : )
     *
     * Decode k2(11: 11) -> DecRec k1(1 : 1) -> DecRec k1(1 : ) *
     *                   -> DecRec k3(11 : ) *
     *
     * Decode k2(111: 1)
     *
     * Decode k2(1111: )
     *
     * return 5 (see *)
     * */
    public void Decode(String msg) {
        mNumberOfDecodedMsg = 0;
        for (int i = 1; i < msg.length(); ++i) {
            DecodeRec(msg, i);
        }
    }

    private void DecodeRec(String msg, int k) {
        int val = Integer.parseInt(msg.substring(0, k));
        msg = msg.substring(k, msg.length());
        if (val >= kMappingMin && val <= kMappingMax) {
            for (int i = 1; i <= msg.length(); ++i) {
                DecodeRec(msg, i);
            }
            if (msg.length() == 0) {
                mNumberOfDecodedMsg++;
            }
        }
    }

    public int getNumberOfDecodedMsg() {
        return mNumberOfDecodedMsg;
    }
}
