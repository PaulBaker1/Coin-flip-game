#include <iostream>
# include <ctime>

using namespace std;

int coin()
{
    int flip;
    flip=  rand() % 2 + 1;
    if (flip == 1)
        cout << "You got heads.\t\n ";
    else
        cout << "You got tails.\t\n ";

    return (flip);
}
int main()
{

    int flips;
    int count, side, heads, tails;
    heads = 0;
    tails = 0;

    cout<< "How many tosses do you want to calculate: ";
    cin >> flips;


        srand(static_cast<int>(time(0)));

    for (count = 1; count <= flips; count++)
    {
        side = coin();
        if (side == 1)
            heads++;
        else
            tails++;
    }
    cout<< "The number of flips: "<< flips <<"\n";
    cout<< "The number of heads: "<< heads <<"\n";
    cout<< "The number of tails: "<< tails <<"\n";
}
