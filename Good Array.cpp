//from Editorial
/*
  Calculate sum of whole array: sum.
  maintain array cnt[i]= number of elements in given array that equals i.
  
  for(int i=0;i<cnt.size();i++) 
  {
    sum[i]=sum-arr[i];
    cnt[arr[i]]--;
    if sum is even && cnt[sum/2] >0 i is nice
  }
*/
