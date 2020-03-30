#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 int    //integer
 bool   //boolean
 float  //float
 double //double
 char   //character
 void   //void
 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    //int
    int myAge = 37;
    int numberOfFingers = 10;
    int carTires = 4;

    //bool
    bool hasKids = true;
    bool isTired = true;
    bool wellRested = false;

    //float
    float coffeeDrank = 2.5f;
    float gasBurned = 14.2f;
    float piecesOfCandy = 0.5f;

    //double
    double amountOfGin = 1.75;
    double costOfGum = 0.99;
    double groceryBill = 63.49;

    //char
    char firstInitial = 'D';
    char middleInitial = 'E';
    char lastInitial = 'R';
    
    ignoreUnused(number, myAge, numberOfFingers, carTires, hasKids, isTired, wellRested, coffeeDrank, gasBurned, piecesOfCandy, amountOfGin, costOfGum, groceryBill, firstInitial, middleInitial, lastInitial); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool coffeeReady (float scoopsUsed, int cupsBrewed)
{
    ignoreUnused(scoopsUsed, cupsBrewed);
    return {};
}

/*
 2)
 */

void houseLightingPerRoom (int kitchen, int bedroom, int livingroom)
{
    ignoreUnused(kitchen, bedroom, livingroom);
}

/*
 3)
 */
int trainsRunning (int northbound, int southbound, int eastbound, int westbound = 2)
{
    ignoreUnused(northbound, southbound, eastbound, westbound);
    return {};
}

/*
 4)
 */
bool isRaining (int puddlesOnGround, double waterCollected, bool roadsAreWet)
{
    ignoreUnused(puddlesOnGround, waterCollected, roadsAreWet);
    return {};
}

/*
 5)
 */
void equalizerBands (int lowBand, int midBand, int highBand, bool highShelfEnabled)
{
    ignoreUnused(lowBand, midBand, highBand, highShelfEnabled);
}

/*
 6)
 */
char favoriteDrink (char ingredients, int drinkQauntity, double amountPerServing)
{
    ignoreUnused(ingredients, drinkQauntity, amountPerServing);
    return {};
}

/*
 7)
 */
void guitarRepair (int strings = 6, char stringType = 'n', float timeSpent = 1.5f)
{
    ignoreUnused(strings, stringType, timeSpent);
}

/*
 8)
 */
bool fireIsBurning (float piecesOfWood, double logBurnTime)
{
    ignoreUnused(piecesOfWood, logBurnTime);
    return {};
}

/*
 9)
 */
char dayOfTheWeek (bool quarantineEnabled, int moviesWatched, int drinks, int bagsOfGoldfish)
{
    ignoreUnused(quarantineEnabled, moviesWatched, drinks, bagsOfGoldfish);
    return {};
}

/*
 10)
 */
double milesDriven (float timeDriving, int songsHeard, double averageSpeed)
{
    ignoreUnused(timeDriving, songsHeard, averageSpeed);
    return {};
}

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto getCaffeine = coffeeReady(5.3f, 5);
    //2)
    houseLightingPerRoom(4,4,6);
    //3)
    auto trainsInService = trainsRunning(1, 2, 3, 4);
    //4)
    auto weatherOutside = isRaining(1000, 2.43, true);
    //5)
    equalizerBands(1, 2, 3, true);
    //6)
    auto ginAndTonic = favoriteDrink('I', 2, 2.5);
    //7)
    guitarRepair(6, 'n', 1.5);
    //8)
    auto makeAFire = fireIsBurning(4.2f, 3.22);
    //9)
    auto Sunday = dayOfTheWeek(true, 2, 4, 2);
    //10)
    auto roadTrip = milesDriven(3.4f, 25, 75.22);
    
    ignoreUnused(carRented, getCaffeine, trainsInService, weatherOutside, ginAndTonic, makeAFire, Sunday, roadTrip);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
