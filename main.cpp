/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
    add a std::cout message in the constructor that prints out the name of the class being constructed.  
    When you run your code, you'll see the order that your objects are created in the program output. 
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function.

 4) For each instantiated UDT: 
        call each of that instance's member functions.
        You're doing this to show that your code doesn't produce warnings when you call the functions that take arguments.
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.






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

void CoffeeCorner::makeCoffee(int getMilkOrSubstitute, int getCoffee, bool checkNeedSweetener)
{
    if (checkNeedSweetener == true)
    {
        numSweeteners -= 1;
    }

    getMilkOrSubstitute = totalNumMilkOrSubstitutes;
    getCoffee = 1;
    std::cout << "Coffee Ready!\n" << "Coffee Type: " << totalNumMilkOrSubstitutes << " X" << getCoffee << "\n";
}

double CoffeeCorner::charge(double getCupPrice)
{
    int totalNumCups = 2;
    getCupPrice = coffeeCupPrice;
    double totalCharge = totalNumCups * getCupPrice;
    std::cout << "Your charge is: " << totalCharge;
    return totalCharge;
}

bool CoffeeCorner::addFlavour(bool needsFlavour, int getFlavour)
{
    if (needsFlavour == true)
    {
        getFlavour = 2;
        return true;
    }
    return false;
}

struct Theater
{
    int numTicketBooths = 3;
    double totalNumSnacksAndDrinks = 43;
    int totalNumSeats = 156;
    std::string theaterName = "Visionary Pictures";
    double ticketPrice = 24.99;

    double sellTicket(int numTickets = 3, double ticketPrice = 24.99);
    void playMovie(int loadMovie, bool lightsOnOrOff, bool trailerOrFeature = true);
    double sellRefreshments(bool sellSnacks, int snackType, bool sellDrinks = true, int drinkType = 3);
};

double Theater::sellTicket(int numTickets, double ticketPriceCharge)
{
    return numTickets * ticketPriceCharge;
}

void Theater::playMovie(int loadMovie, bool lightsOn, bool trailerOrFeature)
{
    if (trailerOrFeature == false)
    {
        lightsOn = true;
    }
    else
    {
        lightsOn = false;
    }
    loadMovie +=1;
    std::cout << "Movie is starting!";
}

double Theater::sellRefreshments(bool sellSnacks, int snackType, bool sellDrinks, int drinkType)
{
    int itemsSold = 0;
    if (sellSnacks == true)
    {
        std::cin >> snackType;
        itemsSold += 1;
    }

    if (sellDrinks == true)
    {
        std::cin >> drinkType;
        itemsSold += 1;
    }

    std::cout << "You sold " << itemsSold << "snacks and/or drinks!\n";
    return itemsSold;
}

struct Gym
{
    double numShowers = 40;
    double numWeights = 120;
    double mSubscriptionPrice = 29.99;
    std::string mPersonalTrainerName = "Fred";
    double mNumDailyPeople = 45.5;

    struct Member
    {
        int age = 25;
        std::string memberName = "Ethan";
        float memberBMI = 17.f;
        std::string subscriptionType = "Daily Passes";
        int passesLeft = 34;

        void punchPass(Member member, int passesLeft);
        bool bringAFriend(bool hasFriendPass = true, int friendPassType = 2);
        int giveReward(int subsctiptionType, std::string rewardName = "10% Discount", int rewardAmount = 10);
    };

    double sellMonthlyPass(Member member, double subscriptionPrice = 29.99, int numMonths = 6);
    void setPersonalTrainer(std::string personalTrainerName, float sessionLength = 2.5f, double sessionTime = 1000);
    double getUserFreq(double numDailyPeople, int numDays = 30);
    
    Member newMember;
    Member oldMember;
};

double Gym::sellMonthlyPass(Gym::Member, double subscriptionPrice, int numMonths)
{
    subscriptionPrice = mSubscriptionPrice;
    double totalPrice = subscriptionPrice * numMonths;
    return totalPrice;
}

void Gym::setPersonalTrainer(std::string personalTrainerName, float sessionLength, double sessionTime)
{
    personalTrainerName = "Dave";
    sessionLength = 1.5f;
    sessionTime = 2;

    std::cout << "You have scheduled a session with: " << personalTrainerName << "\n at: " << sessionTime << "\n for: " << sessionLength << " hours\n";
}

double Gym::getUserFreq(double numDailyPeople, int numDays)
{
    double userFreq = numDailyPeople / numDays;
    return userFreq;
}

void Gym::Member::punchPass(Gym::Member, int passesRemaining)
{
    Member existingMember;
    passesLeft -= 1;
    passesRemaining = passesLeft;
    std::cout << "you have " << passesRemaining << " passes left!\n";
}

bool Gym::Member::bringAFriend(bool hasFriendPass, int friendPassType)
{
    if (hasFriendPass == true)
    {
        passesLeft -= 1;
    }

    std::cout << "you used " << friendPassType << " and have " << passesLeft << " passes left\n";
    return hasFriendPass;
}

int Gym::Member::giveReward(int subsctiptionType, std::string rewardName, int rewardAmount)
{
    if (subsctiptionType >= 4; subsctiptionType < 8)
    {
        rewardName = "10% discount";
        rewardAmount = 10;
    }
    else if (subsctiptionType >8)
    {
        rewardName = "20% discount";
        rewardAmount = 20;
    }
    else
    {
        rewardName = "none";
        rewardAmount = 0;
    }
    
    return rewardAmount;
}

struct Piano
{
    int totalNumKeys = 88;
    std::string pianoType = "Grand Piano";
    double pianoSize = 20.80;
    std::string brandName = "Yamaha";
    int totalNumPedals = 3;

    double playNote(int numKey, double playTime = 45.0);
    int muteNote(bool playOrMute = false, bool stringPadOn = true);
    int volumeDown(bool quietMode = true, int numPedal = 2);
};

double Piano::playNote(int numKey, double playTime)
{
    std::cout << "what key would you like to play? (insert key number)\n";
    std::cin >> numKey;
    std::cout << "how long would you like to play the note? (insert time in ms)\n";
    std::cin >> playTime;
    return playTime;
}

int Piano::muteNote(bool playOrMute, bool stringPadOn)
{
    if (playOrMute == false)
    {
        return 0;
    }
    else
    {
        if (stringPadOn == true)
        {
            return 50;
        }
    }    
    return 100;
}

int Piano::volumeDown(bool quietMode, int numPedal)
{
    if (quietMode == true)
    {
        if (numPedal == 1)
        {
            return 50;
        }
        else if (numPedal == 2)
        {
            return 25;
        }
        else
        {
            return 75;
        }
    }
    
    return 100;
}

struct Interface
{
    float paramKnobPos = 45.5f;
    double mParamSlidePos = 75.8;
    int mMenuButton = 5;
    int totalNumKeys = 88;
    double modWheelPos = 50.75;

    int noteOn(int numKey = 40, bool noteIsOn = true);
    double changeParamSlidePos(double paramSlidePos, double moveSlideBy = 15.5);
    void lookupMenu(int menuButton, std::string screenName = "Pads");
};

int Interface::noteOn(int numKey, bool noteIsOn)
{
    if (noteIsOn == true)
    {
        return numKey;
    }
    
    return 0;
}

double Interface::changeParamSlidePos(double paramSlidePos, double moveSlideBy)
{
    std::cin >> moveSlideBy;
    paramSlidePos += moveSlideBy;
    return paramSlidePos;
}

void Interface::lookupMenu(int menuButton, std::string screenName)
{
    if (menuButton == 1)
    {
        screenName = "Parameters";
    }
    else if (menuButton == 2)
    {
        screenName = "Oscillators";
    }
    else
    {
        screenName = "Main";
    }
    std::cout << screenName;
}

struct Display
{
    float heightCM = 15.2f;
    float widthCM = 43.2f;
    int mColor = 5;
    double mBrightness = 45.0;
    double time = 1305;

    void showMenu(int numMenu = 4, int color = 5);
    std::string paramDetail(int numParam, bool paramHasTooltip = true);
    double adjustBrightness(double brightness = 45.0, double addBrightness = 15.0);
};

void Display::showMenu(int numMenu, int color)
{
    color = numMenu;
}

std::string Display::paramDetail(int numParam, bool paramHasTooltip)
{
    std::cout << numParam << "Parameter name\n";

    if (paramHasTooltip == true)
    {
        std::cout << "Tooltip\n";
    }

    return "Details";   //not sure how to implement what I meant to
}

double Display::adjustBrightness(double brightness, double addBrightness)
{
    brightness += addBrightness;
    return brightness;
}

struct WaveGenerator
{
    int mOscillator = 1;
    float amplifier = 45.0f;
    double modulator = 24.5;
    std::string title = "Wave Generator 1";
    double filter = 35.75;

    double genSineWave(double sineWaveFreq, int oscillator = 1);
    double waveMod(int waveModType = 4, std::string waveModName = "Ring Mod");
    double waveFilter(double filterFreq, int filterType = 3, double filterSlope = 12.0);
};

double WaveGenerator::genSineWave(double sineWaveFreq, int oscillator)
{
    std::cin >> oscillator;
    std::cin >> sineWaveFreq;
    return sineWaveFreq;
}

double WaveGenerator::waveMod(int waveModType, std::string waveModName)
{
    waveModType = 1;
    waveModName = "ring";
    return 20;
}

double WaveGenerator::waveFilter(double filterFreq, int filterType, double filterSlope)
{
    if (filterType == 1)
    {
        filterSlope = 12;
    }
    else if (filterType == 2)
    {
        filterSlope = 24;
    }
    else
    {
        filterSlope = 6;
    }

    std::cin >> filterFreq;
    return filterFreq * filterSlope;
}

struct CPU
{
    std::string name = "CPU";
    double kbSize = 2048.0;
    int rpmSpeed = 150;
    float mUsageCPU = 72.3f;
    double wattPerHour = 45.75;

    double measureUse(int useTime, double usageCPU, bool overclocked = false);
    int runApp(int numApp = 5, bool nativeOrExternal = true, float needCPU = 42.7f);
    int storePreset(int numPreset, double needMemory = 45.2, std::string namePreset = "Good Patch");
};

double CPU::measureUse(int useTime, double usageCPU, bool overclocked)
{
    usageCPU = useTime * kbSize;

    if (overclocked == true)
    {
        usageCPU *= 2;
    }

    return usageCPU;
}

int CPU::runApp(int numApp, bool nativeOrExternal, float needCPU)
{
    std::cin >> numApp;
    needCPU = mUsageCPU;
    
    if (nativeOrExternal == false)
    {
        needCPU *= 2;
    }

    return 1;
}

int CPU::storePreset(int numPreset, double needMemory, std::string namePreset)
{
    numPreset += 1;
    needMemory = kbSize / 10;
    namePreset = "newPreset";
    return numPreset;
}

struct Speakers
{
    double mConeSize = 7.5;
    float ohmCapacity = 4.8f;
    double mWattCapacity = 24.65;
    double mSplLevel = 78.4;
    double efficiency = 62.35;

    int playSound(int numSound, double splLevel, int playTime = 450);
    double setOutputLevel(bool mute = false, double changeVolume = 25.3);
    double lookupEfficiency(double splLevel, double wattCapacity, double coneSize = 8);
};

int Speakers::playSound(int numSound, double splLevel, int playTime)
{
    splLevel = mSplLevel;
    return numSound * playTime;
}

double Speakers::setOutputLevel(bool mute, double changeVolume)
{
    if (mute == true)
    {
        return 0;
    }
    
    return changeVolume;
}

double Speakers::lookupEfficiency(double splLevel, double wattCapacity, double coneSize)
{
    splLevel = mSplLevel;
    wattCapacity = mWattCapacity;
    coneSize = mConeSize;
    return (splLevel * (coneSize * wattCapacity)) / efficiency;
}

struct Synthesizer
{
    Interface userInterface;
    Display screenDisplay;
    WaveGenerator oscillatorOne;
    CPU centralProcessingUnit;
    Speakers mySpeakers;

    void genSound(WaveGenerator oscillatorTwo, double genSineWave = 0.7863);
    void playSound(Speakers mainSpeakers, int playSound, double setOutputLevel = 75.3);
    double savePreset(CPU mainProcessingUnit, int storePreset, std::string presetName = "New Preset");
};  

void Synthesizer::genSound(WaveGenerator oscillatorTwo, double genSineWave)
{
    oscillatorTwo.mOscillator = 2;
    std::cin >> genSineWave;
}

void Synthesizer::playSound(Speakers mainSpeakers, int playSound, double setOutputLevel)
{
    std::cout<< mainSpeakers.mConeSize;
    setOutputLevel = mainSpeakers.setOutputLevel();
    std::cin >> playSound;
}

double Synthesizer::savePreset(CPU mainProcessingUnit, int storePreset, std::string presetName)
{
    std::cout << mainProcessingUnit.kbSize;
    storePreset += 1;
    presetName = "New Preset";
    return storePreset;
}

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
    Example::main();
    
    
    std::cout << "good to go!" << std::endl;
}
