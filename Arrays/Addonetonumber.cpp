Problem Statement:
-------------------------------
Given a non-negative number represented as an array of digits,

add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.

Example:

If the vector has [1, 2, 3]

the returned vector should be [1, 2, 4]

as 123 + 1 = 124.

/*
solution 
*/

vector<int> Solution::plusOne(vector<int> &A) {

    int i;
    i=A.size()-1;
    
    if(A[i]<9){     // Direct addition as number < 9
        A[i]++;
    }
    else
    {
        do{                  // Here carry will generate as number >9 
            A[i]=0;
            if(i == 0){
                A.insert(A.begin(), 1);
            }
            else{
                A[i-1]++;
            }
            i--;
        }while(A[i] >= 10);
        
        /*{
            A[i] = 0;
            if(i == 0){
                A.insert(A.begin(), 1);
                break;
            }
            else{
                A[i-1]++;
            }
            i--;
        }*/
    }
    while(*A.begin() == 0){   // Nullifying zeros before most significant digit / start of vector as per output needed.
        A.erase(A.begin());
    }

    return A;
}
