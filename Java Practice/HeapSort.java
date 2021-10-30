import java.util.ArrayList;
class HeapSort {
    private ArrayList<Integer> num;

    public int parentIdx(int i) {
        return (i - 1) / 2;
    }

    public int leftIdx(int i) {
        return 2 * i + 1;
    }

    public int rightIdx(int i) {
        return 2 * i + 2;
    }

    public void swap(int idx1, int idx2) {

        int x = num.get(idx2);
        int y = num.get(idx1);
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
        num.set(idx2, x);
        num.set(idx1, y);

    }

    public void heapSort() {

        createHeap();
        int size = num.size() - 1;

        for (int i = size; i > 0; i--) {
            swap(i, 0);
            maxHeap(0, --size);
        }

    }

    public void createHeap() {
        int size = num.size() - 1;
        for (int i = size / 2; i >= 0; i--) {
            maxHeap(i, size);
        }

    }

    public void initiateHeapSort(ArrayList<Integer> arr) {
        this.num = arr;
        long startTime = System.currentTimeMillis();
        heapSort();
        long endTime = System.currentTimeMillis();
        System.out.println("output of heap sort:");
        for (int i : arr) {

            System.out.print(" " + i);
        }
        System.out.println("\nHeap sort took " + (endTime - startTime) + " milliseconds");
    }

    public void maxHeap(int i, int size) {
        int left = leftIdx(i), right = rightIdx(i);
        int max = i;
        if (left <= size && num.get(left) < num.get(i)) {
            max = left;
        }
        if (right <= size && num.get(right) < num.get(size)) {
            max = right;
        }
        if (max != i) {
            swap(i, max);
            maxHeap(max, size);
        }

    }

}

