import java.util.ArrayList;

class Sort {

    public static void main(String[] args) throws java.io.IOException {
        Charset charset = Charset.forName("ascii");
        BubbleSort bb = new BubbleSort();
        InsertionSort ii = new InsertionSort();
        MergeSort mm = new MergeSort();
        QuickSort qq = new QuickSort();
        ArrayList<Integer> arr = new ArrayList<Integer>();

        FastIO rd = new FastIO(System.in, System.out, charset);
        int lim = rd.readInt();
        do {

            arr.add(rd.readInt());

        } while (lim-- > 1);
        bb.bubbleSort(arr);
        ii.insertionSort(arr);
        mm.recursiveMergeSort(arr,0,arr.size()-1);
        qq.recursiveQuickSort(arr,0,arr.size()-1);
    }
}
