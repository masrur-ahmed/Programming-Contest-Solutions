import java.io.*;
import java.nio.charset.Charset;
import java.util.ArrayList;

class Main {

    public static void main(String[] args) throws java.io.IOException {
        Charset charset = Charset.forName("ascii");
        ArrayList<Integer> arr = new ArrayList<Integer>();

        FastIO rd = new FastIO(System.in, System.out, charset);
        int lim = rd.readInt();
        do {

            arr.add(rd.readInt());

        } while (lim-- > 1);
        Sort.BubbleSort(arr);
        Sort.InsertionSort(arr);
        Sort.recursiveMergeSort(arr,0,arr.size()-1);
        Sort.recursiveQuickSort(arr,0,arr.size()-1);
    }
}

class Sort {
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
        System.out.println("\nBubble sort took " + (endTime - startTime) + " milliseconds");

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
        System.out.println("output of insertion sort:");
        for (int i : arr){

            System.out.print(" " + i);
        }
        System.out.println("\nInsertion sort took " + (endTime - startTime) + " milliseconds");

    }
    public static void recursiveMergeSort(ArrayList<Integer>arr, int low, int high){
        long startTime = System.currentTimeMillis();
        arr = mergeSort(arr,low,high);
        long endTime = System.currentTimeMillis();
        System.out.println("output of quick sort:");
        for (int i : arr){

            System.out.print(" " + i);
        }
        System.out.println("\nMerge sort took " + (endTime - startTime) + " milliseconds");
    }
    public static ArrayList<Integer> mergeSort(ArrayList<Integer>arr, int low, int high){
        ArrayList<Integer> left,right;
        if(low>=high)return arr;
        int mid = (low + high)/2;
        left =  mergeSort(arr, low, mid);
        right = mergeSort(arr, mid+1, high);
        return merge(arr,low,high);
    }
    public static ArrayList<Integer> merge(ArrayList<Integer>arr, int low, int high){
        ArrayList<Integer> res = new ArrayList<Integer>();
        int  start1 = low, mid = (low + high)/2, start2 = mid +1 , i = 0; 
        while(start1 <= mid && start2<=high){
            if(arr.get(start1) >= arr.get(start2)){
                res.add(arr.get(start1++));
            }
            else{
                res.add(arr.get(start2++));
            }
        }
        while(start1<= mid)res.add(arr.get(start1++));
        while(start2<= high)res.add(arr.get(start2++));
        for(int k = 0; k< res.size(); k++)arr.set(low+k,res.get(k));
        return arr;
    }

    public static ArrayList<Integer> quickSort(ArrayList<Integer>arr, int low, int high){
        ArrayList<Integer> left,right;
        if(low>=high)return arr;
        int partitionIndex = partition(arr,low,high);
        left =  quickSort(arr, low, partitionIndex-1);
        right = quickSort(arr, partitionIndex+1, high);
        return arr;

    }
    public static int partition(ArrayList<Integer>arr, int low, int high){
        int pivot = arr.get(high), bigIdx = low - 1;

        for(int i = low ; i < high ; i++){

            if(arr.get(i)>pivot){
                bigIdx++;
                x = arr.get(i);
                y = arr.get(bigIdx);
                x = x ^ y;
                y = x ^ y;
                x = x ^ y;
                arr.set(i, x);
                arr.set(bigIdx, y);
            }
        }

        x = arr.get(bigIdx+1);
        y = arr.get(high);
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
        arr.set(bigIdx+1, x);
        arr.set(high, y);
        return bigIdx + 1; 
    }
    public static void recursiveQuickSort(ArrayList<Integer>arr, int low, int high){
        long startTime = System.currentTimeMillis();
        arr = quickSort(arr,low,high);
        long endTime = System.currentTimeMillis();
        System.out.println("output of quick sort:");
        for (int i : arr){

            System.out.print(" " + i);
        }
        System.out.println("\nQuicksort took " + (endTime - startTime) + " milliseconds");
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
