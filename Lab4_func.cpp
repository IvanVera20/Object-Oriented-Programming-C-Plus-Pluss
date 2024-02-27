#include <iostream>
using namespace std;

    /** sumOfThree
     * @brief returns the sum of x, y, and z
     * 
     * @param x : (int)
     * @param y : (int)
     * @param z : (int)
     * @return int
     */
   // WRITE FUNCTION HERE

   /** division
    * @brief returns x/y
    * 
    * @param x : (double)
    * @param y : (double)
    * @return double
    */
   //WRITE FUNCTION HERE

    /** isGreaterThan
     * @brief return wheather x is greater than y 
     * 
     * @param x :(double)
     * @param y : (int)
     * @return true : x is greater than y 
     * @return false : c is less than or equal to y 
     */
   // WRITE FUNCTION HERE

   /** select
    * @brief output the statements based on func_type
    * fun_type          : output
    * "sum"             :"The sum is"
    * "division"        :"The quotient is"
    * "comparison"      :"The first value being greater than the second value is"
    *   All other phrases: "Invalid function type\n"
    * @param func_type : (string)
    * @return string
    */
  //WRITE FUNCTION HERE

  /** myPrint
   * @brief Calls selection () to print out the output with the correct prompt
   * 
   * @tparam T : (int, double, or string) output if sum, division, or isGreater Than
   * @param func_type : (string)
   * @param output
   */
  template <typename T>
  void myPrint(string func_type, T output){
    cout << select(func_type) << output << end1;
  }

  int main()
  {
        //initialize 3 int parameters
        int x1 = 2;
        int x2 = 3;
        int x3 = 5;

        // call someOfThree
        int sum_out = someOfThree(x1, x2, x3);
        // call print
        myPrint("sum", sum_out);

        //initialize 2 double parameters
        double dividend = 12345.1;
        double divisor = 2345.6;

        // call division
        double div_out = division(dividend, divisor);
        myPrint("division", div_out);

        // compare div_out and sum_out
        bool is_greater_out = isGreaterThan(div_out, sum_out);
        myPrint("comparison", is_greater_out);
        return 0;
  }
