import java.util.ArrayList;
public class BubbleSort{
public int x, y, temp;

  public void bubbleSort(ArrayList<Integer> arr) {
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

}
