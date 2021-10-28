import java.util.ArrayList;
public class MergeSort{

  public void recursiveMergeSort(ArrayList<Integer>arr, int low, int high){
      long startTime = System.currentTimeMillis();
      arr = mergeSort(arr,low,high);
      long endTime = System.currentTimeMillis();
      System.out.println("output of quick sort:");
      for (int i : arr){

          System.out.print(" " + i);
      }
      System.out.println("\nMerge sort took " + (endTime - startTime) + " milliseconds");
  }


  public ArrayList<Integer> mergeSort(ArrayList<Integer>arr, int low, int high){
      ArrayList<Integer> left,right;
      if(low>=high)return arr;
      int mid = (low + high)/2;
      left =  mergeSort(arr, low, mid);
      right = mergeSort(arr, mid+1, high);
      return merge(arr,low,high);
  }


  public ArrayList<Integer> merge(ArrayList<Integer>arr, int low, int high){
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

}
