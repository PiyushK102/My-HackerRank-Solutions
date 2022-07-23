

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int i,j,sum=0;
  j=(gender=='b')?0:1;
  {
      for(i=j;i<number_of_students;i+=2)
      {
         sum+=marks[i];
      }
  }
 
  
  return sum;
}

