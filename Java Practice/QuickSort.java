import java.util.ArrayList;
public class QuickSort{

  public int x, y, temp;


  public ArrayList<Integer> quickSort(ArrayList<Integer>arr, int low, int high){
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
