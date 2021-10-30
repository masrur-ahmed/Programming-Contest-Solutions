import java.util.ArrayList;

class Sort {

    public static void main(String[] args) throws java.io.IOException {
        Charset charset = Charset.forName("ascii");
        BubbleSort bubble = new BubbleSort();
        InsertionSort insertion = new InsertionSort();
        MergeSort merge = new MergeSort();
        QuickSort quick = new QuickSort();
        HeapSort heap = new HeapSort();
        BucketSort bucketSort = new BucketSort();
        ArrayList<Integer> arr = new ArrayList<Integer>();

        FastIO rd = new FastIO(System.in, System.out, charset);
        int lim = rd.readInt();
        do {

            arr.add(rd.readInt());

        } while (lim-- > 1);
        bubble.bubbleSort(arr);
        insertion.insertionSort(arr);
        merge.recursiveMergeSort(arr,0,arr.size()-1);
        quick.recursiveQuickSort(arr,0,arr.size()-1);
        heap.initiateHeapSort(arr);
        bucketSort.initiateBucketSort(arr);
    }
}
