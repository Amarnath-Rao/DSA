class Solution:
    def sequentialDigits(self, low, high):
        a = []

        for i in range(1, 10):
            num = i
            next_digit = i + 1

            while num <= high and next_digit <= 9:
                num = num * 10 + next_digit
                if low <= num <= high:
                    a.append(num)
                next_digit += 1

        a.sort()
        return a


"""

class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        long long unsigned int decimalValue(Node *head)
        {
           // Your Code Here
          Node* temp=head;
          long long unsigned int sum=0;
          while(temp){
              sum=(sum*2+temp->data)%MOD; // the modulo 1000000007 ensures that the sum variable
              //remains within a reasonable range and doesn't overflow
              temp=temp->next;
          }
          return sum;
        }
};



"""