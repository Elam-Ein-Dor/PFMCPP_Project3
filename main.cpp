 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different from the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */





struct CoffeeCorner
{
    int numDailyCustomer = 50;
    int totalNumMilkOrSubstitutes = 7;
    int numSweeteners = 4;
    double coffeeCupPrice = 7.45;

    void makeCoffee(int getMilkOrSubstitute, int getCoffee, bool checkNeedSweetener = false);
    double charge (double getCupPrice = 7.45);
    bool addFlavour(bool needsFlavour = true, int getFlavour = 4);
};


struct Theater
{
    int numTicketBooths = 3;
    double totalNumSnacksAndDrinks = 43;
    int totalNumSeats = 156;
    std::string theaterName = "Visionary Pictures";
    float ticketPrice = 24.99f;

    double sellTicket(int numTickets = 3, float ticketPrice = 24.99f);
    void playMovie(int loadMovie, bool lightsOnOrOff, bool trailerOrFeature = true);
    double sellRefreshments(bool sellSnacks, int snackType, bool sellDrinks = true, int drinkType = 3);
};

struct Gym
{
    double numShowers = 40;
    double numWeights = 120;
    float subscriptionPrice = 29.99f;
    std::string personalTrainerName = "Fred";
    float numDailyPeople = 45.5f;

    struct Member
    {
        int age = 25;
        std::string memberName = "Ethan";
        float memberBMI = 17.f;
        std::string subscriptionType = "Daily Passes";
        int passesLeft = 34;

        void punchPass(Member member, int passesLeft);
        bool bringAFriend(bool hasFriendPass = true, int friendPassType = 2);
        int giveReward(int subsctiptionType, std::string rewardName = "10% Discount", double rewardAmount = 10);
    };

    double sellMonthlyPass(Member member, float subscriptionPrice = 29.99f, int numMonths = 6);
    void setPersonalTrainer(std::string personalTrainerName, float sessionLength = 2.5f, double sessionTime = 1000);
    double getUserFreq(float numDailyPeople, int numDays = 30);
    
    Member newMember;
    Member oldMember;
};

struct Piano
{
    int totalNumKeys = 88;
    std::string pianoType = "Grand Piano";
    double pianoSize = 20.80;
    std::string brandName = "Yamaha";
    int totalNumPedals = 3;

    int playNote(int numKey, float playTime = 45.0f);
    int muteNote(bool playOrMute = false, bool stringPadOn = true);
    int volumeDown(bool quietMode = true, int numPedal = 2);
};

struct Interface
{
    float paramKnobPos = 45.5f;
    float paramSlidePos = 75.8f;
    int menuButton = 5;
    int totalNumKeys = 88;
    double modWheelPos = 50.75;

    int noteOn(int numKey = 40, bool noteIsOn = true);
    float changeParamSlidePos(float paramSlidePos, float moveSlideBy = 15.5f);
    void lookupMenu(int menuButton, std::string screenName = "Pads");
};

struct Display
{
    float heightCM = 15.2f;
    float widthCM = 43.2f;
    int color = 5;
    double brightness = 45.0;
    double time = 1305;

    void showMenu(int numMenu = 4, int color = 5);
    std::string paramDetail(int numParam, bool paramHasTooltip = true);
    double adjustBrightness(double brightness = 45.0, double addBrightness = 15.0);
};

struct WaveGenerator
{
    int oscillator = 1;
    float amplifier = 45.0f;
    double modulator = 24.5;
    std::string title = "Wave Generator 1";
    double filter = 35.75;

    double genSineWave(float sineWaveFreq, int oscillator = 1);
    double waveMod(int waveModType = 4, std::string waveModName = "Ring Mod");
    double waveFilter(double filterFreq, int filterType = 3, float filterSlope = 12.0f);
};

struct CPU
{
    std::string name = "CPU";
    double kbSize = 2048.0;
    int rpmSpeed = 150;
    float usageCPU = 72.3f;
    double wattPerHour = 45.75;

    double measureUse(int useTime, float usageCPU, bool overclocked = false);
    int runApp(int numApp = 5, bool nativeOrExternal = true, float needCPU = 42.7f);
    int storePreset(int numPreset, double needMemory = 45.2, std::string namePreset = "Good Patch");
};

struct Speakers
{
    float coneSize = 7.5f;
    float ohmCapacity = 4.8f;
    double wattCapacity = 24.65;
    float splLevel = 78.4f;
    double efficiency = 62.35;

    int playSound(int numSound, float splLevel, double playTime = 450);
    double setOutputLevel(bool mute = false, float changeVolume = 25.3f);
    double lookupEfficiency(float splLevel, double wattCapacity, float coneSize = 8);
};

struct Synthesizer
{
    Interface userInterface;
    Display screenDisplay;
    WaveGenerator oscillatorOne;
    CPU centralProcessingUnit;
    Speakers mainSpeakers;

    void genSound(WaveGenerator oscillatorTwo, double genSineWave = 0.7863);
    void playSound(Speakers mainSpeakers, int playSound, double setOutputLevel = 75.3);
    double savePreset(CPU mainProcessingUnit, int storePreset, std::string presetName = "New Preset");
};  

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
