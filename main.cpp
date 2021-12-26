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



/*
Thing 1) Coffee Corner
5 properties:
    1) amount of customers per day (int)
    2) number of milk and milk substitutes (int)
    3) number of sweeteners (int)
    4) number of mugs (int)
    5) price of coffee per cup (double)
3 things it can do:
    1) make coffee
    2) charge customers
    3) add flavourings to made coffee
 */

struct CoffeeCorner
{
    //amount of customers per day
    int numDailyCustomer = 50;
    //number of milk and milk substitutes
    int totalNumMilkOrSubstitutes = 7;
    //number of sweeteners
    int numSweeteners = 4;
    //price of coffee per cup
    double coffeeCupPrice = 7.45;

    //make coffee
    void makeCoffee(int getMilkOrSubstitute, int getCoffee, bool checkNeedSweetener = false);
    //charge customers
    double charge (double getCupPrice = 7.45);
    //add flavourings to made coffee
    bool addFlavour(bool needsFlavour = true, int getFlavour = 4);
};

/*
Thing 2) Theater
5 properties:
    1) number of ticket booths (int)
    2) variety of snacks and drinks (double)
    3) number of seats (int)
    4) name of theater (std::string)
    5) price of ticket per person (float)
3 things it can do:
    1) sell tickets
    2) show movies
    3) sell snacks and drinks
 */

struct Theater
{
    //number of ticket booths
    int numTicketBooths = 3;
    //variety of snacks and drinks
    double totalNumSnacksAndDrinks = 43;
    //number of seats
    int totalNumSeats = 156;
    //name of theater
    std::string theaterName = "Visionary Pictures";
    //price of ticket per person
    float ticketPrice = 24.99f;

    //sell tickets
    double sellTicket(int numTickets = 3, float ticketPrice = 24.99f);
    //show movies
    void playMovie(int loadMovie, bool lightsOnOrOff, bool trailerOrFeature = true);
    //sell snacks and drinks
    double sellRefreshments(bool sellSnacks, int snackType, bool sellDrinks = true, int drinkType = 3);
};

/*
Thing 3) Gym
5 properties:
    1) number of showers (double)
    2) number of weights (double)
    3) price of monthly subscription (float)
    4) names of personal trainers (std::string)
    5) average number of people per day (float)
3 things it can do:
    1) sell monthly subscriptions
    2) provide personal training sessions
    3) monitor customer frequency
 */

struct Gym
{
    //number of showers
    double numShowers = 40;
    //number of weights
    double numWeights = 120;
    //price of monthly subscription
    float subscriptionPrice = 29.99f;
    //names of personal trainers
    std::string personalTrainerName = "Fred";
    //average number of people per day
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

    //sell monthly subscriptions
    double sellMonthlyPass(Member member, float subscriptionPrice = 29.99f, int numMonths = 6);
    //provide personal training session
    void setPersonalTrainer(std::string personalTrainerName, float sessionLength = 2.5f, double sessionTime = 1000);
    //monitor customer frequency
    double getUserFreq(float numDailyPeople, int numDays = 30);
    
    Member newMember;
    Member oldMember;
};

/*
Thing 4) Piano
5 properties:
    1) number of keys (int)
    2) type of piano (std::string)
    3) size of piano (double)
    4) name of brand (std::string)
    5) number of pedals (int)
3 things it can do:
    1) play notes
    2) mute notes
    3) change volume of notes
 */
 
struct Piano
{
    //number of keys
    int totalNumKeys = 88;
    //type of piano
    std::string pianoType = "Grand Piano";
    //size of piano
    double pianoSize = 20.80;
    //name of brand
    std::string brandName = "Yamaha";
    //number of pedals
    int totalNumPedals = 3;

    //play notes
    int playNote(int numKey, float playTime = 45.0f);
    //mute notes
    int muteNote(bool playOrMute = false, bool stringPadOn = true);
    //change volume of notes
    int volumeDown(bool quietMode = true, int numPedal = 2);
};

 /*
Thing 5) Interface
5 properties:
    1) parameter knobs (position) (float)
    2) parameter sliders (position) (float)
    3) menu buttons (int)
    4) keys (int)
    5) mod wheels (position) (double)
3 things it can do:
    1) Play notes
    2) Change Parameters
    3) Lookup menus
 */

struct Interface
{
    //parameter knob position
    float paramKnobPos = 45.5f;
    //parameter slider position
    float paramSlidePos = 75.8f;
    //menu buttons
    int menuButton = 5;
    //keys
    int totalNumKeys = 88;
    //mod wheel position
    double modWheelPos = 50.75;

    //play notes
    int noteOn(int numKey = 40, bool noteIsOn = true);
    //change parameters
    float changeParamSlidePos(float paramSlidePos, float moveSlideBy = 15.5f);
    //lookup menus
    void lookupMenu(int menuButton, std::string screenName = "Pads");
};

/*
Thing 6) Display
5 properties:
    1) height in cm (float)
    2) width in cm (float)
    3) color (int)
    4) brightness (double)
    5) time of operation (double)
3 things it can do:
    1) show menus
    2) detail parameters
    3) change brightness
 */

struct Display
{
    //height in cm
    float heightCM = 15.2f;
    //width in cm
    float widthCM = 43.2f;
    //color
    int color = 5;
    //brightness
    double brightness = 45.0;
    //time of operation
    double time = 1305;

    //show menus
    void showMenu(int numMenu = 4, int color = 5);
    //detail parameters
    std::string paramDetail(int numParam, bool paramHasTooltip = true);
    //change brightness
    double adjustBrightness(double brightness = 45.0, double addBrightness = 15.0);
};

/*
Thing 7) Wave generator
5 properties:
    1) oscillator (int)
    2) amplifier (float)
    3) modulator (double)
    4) title (std::string)
    5) filter (double)
3 things it can do:
    1) generate a sine wave
    2) modulate the wave
    3) filter the wave
 */

struct WaveGenerator
{
    //oscillator
    int oscillator = 1;
    //amplifier
    float amplifier = 45.0f;
    //modulator
    double modulator = 24.5;
    //title
    std::string title = "Wave Generator 1";
    //filter
    double filter = 35.75;

    //generate a sine wave
    double genSineWave(float sineWaveFreq, int oscillator = 1);
    //modulate the wave
    double waveMod(int waveModType = 4, std::string waveModName = "Ring Mod");
    //filter the wave
    double waveFilter(double filterFreq, int filterType = 3, float filterSlope = 12.0f);
};

/*
Thing 8) CPU
5 properties:
    1) name (std::string)
    2) size in kb (double)
    3) speed in rpm (int)
    4) cpu usage (float)
    5) amount of power used in watt/hour (double)
3 things it can do:
    1) measure usage
    2) run internal applications
    3) store presets
 */

struct CPU
{
    //name
    std::string name = "CPU";
    //size in kb
    double kbSize = 2048.0;
    //speed in rpm
    int rpmSpeed = 150;
    //cpu usage
    float usageCPU = 72.3f;
    //amount of power used in watt/hour
    double wattPerHour = 45.75;

    //measure usage
    double measureUse(int useTime, float usageCPU, bool overclocked = false);
    //run internal applications
    int runApp(int numApp = 5, bool nativeOrExternal = true, float needCPU = 42.7f);
    //store presets
    int storePreset(int numPreset, double needMemory = 45.2, std::string namePreset = "Good Patch");
};

/*
Thing 9) Speakers
5 properties:
    1) cone size in in (float)
    2) driver capacity in ohm (float)
    3) driver capacity in watt (double)
    4) output level in SPL (float)
    5) efficiency (double)
3 things it can do:
    1) play generated sounds
    2) change output level
    3) measure efficiency
 */

struct Speakers
{
    // cone size in in
    float coneSize = 7.5f;
    //driver capacity in ohm
    float ohmCapacity = 4.8f;
    //driver capacity in watt
    double wattCapacity = 24.65;
    //output level in spl
    float splLevel = 78.4f;
    //efficiency
    double efficiency = 62.35;

    //play generated sounds
    int playSound(int numSound, float splLevel, double playTime = 450);
    //change output level
    double setOutputLevel(bool mute = false, float changeVolume = 25.3f);
    //measure efficiency
    double lookupEfficiency(float splLevel, double wattCapacity, float coneSize = 8);
};

/*
Thing 10) Synthesizer
5 properties:
    1) Interface
    2) Display
    3) Wave generator
    4) CPU
    5) Speakers
3 things it can do:
    1) Generate a sound
    2) Play sounds
    3) Store presets
 */

struct Synthesizer
{
    //interface
    Interface userInterface;
    //display
    Display screenDisplay;
    //wave generator
    WaveGenerator oscillatorOne;
    //CPU
    CPU centralProcessingUnit;
    //speakers
    Speakers mainSpeakers;

    //generate a sound
    void genSound(WaveGenerator oscillatorTwo, double genSineWave = 0.7863);
    //play sounds
    void playSound(Speakers mainSpeakers, int playSound, double setOutputLevel = 75.3);
    //store presets
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
