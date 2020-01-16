using namespace std;


int main()
{
    int UPC[10]; // Our 11 digit UPC
    int EvenSum = 0; // Sum of our even indexes
    int OddSum = 0; // Sum of our odd indexes
    int TotalSum; // Sum of our total indexes
    int LastDigit; // What the last digit will be, as determined by the forumla
    
    //Ask user for input
    cout << "Enter the first 11 digits of the UPC (with spaces between the digits): "; 
    // For loop to take in each of their single inputs, delimit on a space so that they can enter as we specified.
    for( int i = 0; i < 11; i++)
    {
        cin >> UPC\[i\];
    }
    int EvenSum = 0; // Sum of our even indexes
    //For loop to sum thsoe even indexes, incrementor value i scales by two to hit only the even indices
    for( int i = 0; i <11; i += 2)
    {
        EvenSum += UPC\[i\];
    }
    //
    EvenSum = EvenSum \* 3; 
    
    for (int i = 1; i < 10; i +=2)
    {
        OddSum += UPC\[i\];
    }
    
    TotalSum = EvenSum + OddSum;
    LastDigit = TotalSum % 10; //
    
    if(LastDigit == 0)
    {
        cout << "The 12th digit is " << LastDigit;
    }
    else
    {
        cout << "The 12th is " << (10 - LastDigit);
    }
    
    // End the program
    return 0;
}