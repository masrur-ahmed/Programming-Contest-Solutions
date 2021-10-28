import java.io.*;
import java.nio.charset.Charset;
import java.util.ArrayList;
//change the filename to Main 
class Main {

    public static void main(String[] args) throws java.io.IOException {
        Charset charset = Charset.forName("ascii");
        ArrayList<Integer> arr = new ArrayList<Integer>();

        FastIO rd = new FastIO(System.in, System.out, charset);
        int lim = rd.readInt();
        do {

            arr.add(rd.readInt());

        } while (lim-- > 1);
        sort.InsertionSort(arr);
    }
}

class sort {
    public static int x, y, temp;

    public static void BubbleSort(ArrayList<Integer> arr) {
        long startTime = System.currentTimeMillis();
        int size = arr.size();
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                x = arr.get(j);
                y = arr.get(i);
                if (x > y) {
                    x = x ^ y;
                    y = x ^ y;
                    x = x ^ y;
                    arr.set(j, x);
                    arr.set(i, y);
                }

            }
        }

        long endTime = System.currentTimeMillis();
        System.out.println("output of bubble sort:");
        for (int i : arr) {

            System.out.print(" " + i);
        }
        System.out.println("Bubble sort took " + (endTime - startTime) + " milliseconds");

    }
    public static void InsertionSort(ArrayList<Integer> arr) {
        long startTime = System.currentTimeMillis();
        int size = arr.size();
        for (int i = 1; i < size-1; i++) {
            int j = i-1; 
            int val = arr.get(i);
            while(j>=0 && val>arr.get(j)){
                x = arr.set(j+1,arr.get(j));
                j--;
                
            }
              arr.set(j+1,val);  
            }
        

        long endTime = System.currentTimeMillis();
        System.out.println("output of bubble sort:");
        for (int i : arr){

            System.out.print(" " + i);
        }
        System.out.println("Bubble sort took " + (endTime - startTime) + " milliseconds");

    }

}

class FastIO {
    public final StringBuilder cache = new StringBuilder(1 << 20);
    private final InputStream is;
    private final OutputStream os;
    private final Charset charset;
    private StringBuilder defaultStringBuf = new StringBuilder(1 << 8);
    private byte[] buf = new byte[1 << 13];
    private int bufLen;
    private int bufOffset;
    private int next;

    public FastIO(InputStream is, OutputStream os, Charset charset) {
        this.is = is;
        this.os = os;
        this.charset = charset;
    }

    public FastIO(InputStream is, OutputStream os) {
        this(is, os, Charset.forName("ascii"));
    }

    private int read() {
        while (bufLen == bufOffset) {
            bufOffset = 0;
            try {
                bufLen = is.read(buf);
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
            if (bufLen == -1) {
                return -1;
            }
        }
        return buf[bufOffset++];
    }

    public void skipBlank() {
        while (next >= 0 && next <= 32) {
            next = read();
        }
    }

    public int readInt() {
        int sign = 1;

        skipBlank();
        if (next == '+' || next == '-') {
            sign = next == '+' ? 1 : -1;
            next = read();
        }

        int val = 0;
        if (sign == 1) {
            while (next >= '0' && next <= '9') {
                val = val * 10 + next - '0';
                next = read();
            }
        } else {
            while (next >= '0' && next <= '9') {
                val = val * 10 - next + '0';
                next = read();
            }
        }

        return val;
    }

    public long readLong() {
        int sign = 1;

        skipBlank();
        if (next == '+' || next == '-') {
            sign = next == '+' ? 1 : -1;
            next = read();
        }

        long val = 0;
        if (sign == 1) {
            while (next >= '0' && next <= '9') {
                val = val * 10 + next - '0';
                next = read();
            }
        } else {
            while (next >= '0' && next <= '9') {
                val = val * 10 - next + '0';
                next = read();
            }
        }

        return val;
    }

    public double readDouble() {
        boolean sign = true;
        skipBlank();
        if (next == '+' || next == '-') {
            sign = next == '+';
            next = read();
        }

        long val = 0;
        while (next >= '0' && next <= '9') {
            val = val * 10 + next - '0';
            next = read();
        }
        if (next != '.') {
            return sign ? val : -val;
        }
        next = read();
        long radix = 1;
        long point = 0;
        while (next >= '0' && next <= '9') {
            point = point * 10 + next - '0';
            radix = radix * 10;
            next = read();
        }
        double result = val + (double) point / radix;
        return sign ? result : -result;
    }

    public String readString(StringBuilder builder) {
        skipBlank();

        while (next > 32) {
            builder.append((char) next);
            next = read();
        }

        return builder.toString();
    }

    public String readString() {
        defaultStringBuf.setLength(0);
        return readString(defaultStringBuf);
    }

    public int readLine(char[] data, int offset) {
        int originalOffset = offset;
        while (next != -1 && next != '\n') {
            data[offset++] = (char) next;
            next = read();
        }
        return offset - originalOffset;
    }

    public int readString(char[] data, int offset) {
        skipBlank();

        int originalOffset = offset;
        while (next > 32) {
            data[offset++] = (char) next;
            next = read();
        }

        return offset - originalOffset;
    }

    public int readString(byte[] data, int offset) {
        skipBlank();

        int originalOffset = offset;
        while (next > 32) {
            data[offset++] = (byte) next;
            next = read();
        }

        return offset - originalOffset;
    }

    public char readChar() {
        skipBlank();
        char c = (char) next;
        next = read();
        return c;
    }

    public void flush() {
        try {
            os.write(cache.toString().getBytes(charset));
            os.flush();
            cache.setLength(0);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }

    public boolean hasMore() {
        skipBlank();
        return next != -1;
    }
}
