class BucketSort {
    //private ArrayList<Integer>[] buckets;
    //private int maxValue; 
    private int findHash(int num) {
        //System.out.println(num);
        return Integer.parseInt(Integer.toString(num).substring(0, 1));
    }
    
    private ArrayList<Integer> bucketSort(ArrayList<Integer> numbers, int size) {
        ArrayList<Integer> buckets [] = new ArrayList[11];
        for(int i = 0 ; i <= 10 ; i++)buckets[i] = new ArrayList<Integer>();
        for (int i : numbers)
            buckets[findHash(i)].add(i);
        for (ArrayList<Integer> i : buckets)
            Collections.sort(i);
        numbers.clear();
        for (ArrayList<Integer> i : buckets) {
            for (int num : i) {
                numbers.add(num);
            }
        }
        return numbers;
    }

    public void initiateBucketSort(ArrayList<Integer> nums, int size) {
        long startTime = System.currentTimeMillis();
        nums = bucketSort(nums,size);
        long endTime = System.currentTimeMillis();
        System.out.println("output of bucket sort:");
        for (int i : nums) {

            System.out.print(" " + i);
        }
        System.out.println("\nbucket sort took " + (endTime - startTime) + " milliseconds");
    }
}

