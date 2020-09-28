  // Program to count no of div factor between 2 number
  // complexcity : O(1)
 
  int soltion(int A, int B, int K)
  {
    if(A%K != 0)
          A = (A/K + 1)*K;

        if(B < A)
          return 0

      return ((B - A)/K + 1);
      
   }
