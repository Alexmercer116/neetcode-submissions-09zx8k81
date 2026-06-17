/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int my_guess = n;
       while(true){
        if(guess(my_guess)==0) return my_guess;
        else if(guess(my_guess)==-1) my_guess = (my_guess-1)/2+1;
        else my_guess = (my_guess-1)/2-1;
       }
       return 0;
    }
};