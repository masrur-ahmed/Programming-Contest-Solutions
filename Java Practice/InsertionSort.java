import java.util.ArrayList;
public class InsertionSort{
public int x, y, temp;

  public void insertionSort(ArrayList<Integer> arr) {
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

}
