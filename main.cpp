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

    CoffeeCorner();

    void makeCoffee(int getMilkOrSubstitute, int getCoffee, bool checkNeedSweetener = false);
    double charge (double getCupPrice = 7.45);
    bool addFlavour(bool needsFlavour = true, int getFlavour = 4);
};

CoffeeCorner::CoffeeCorner()
{
    numDailyCustomer = 0;
    totalNumMilkOrSubstitutes = 20;
    numSweeteners = 20;
    coffeeCupPrice = 5.99;

    std::cout << "CoffeeCorner \n";
}

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

    Theater();

    double sellTicket(int numTickets = 3, double ticketPrice = 24.99);
    void playMovie(int loadMovie, bool lightsOnOrOff, bool trailerOrFeature = true);
    double sellRefreshments(bool sellSnacks, int snackType, bool sellDrinks = true, int drinkType = 3);
};

Theater::Theater()
{
    std::cout << "Theater \n";
}

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
    std::cout << "Movie is starting!\n";
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

        Member();

        void punchPass(int passesLeft);
        bool bringAFriend(bool hasFriendPass = true, int friendPassType = 2);
        int giveReward(int subsctiptionType, std::string rewardName = "10% Discount", int rewardAmount = 10);
    };

    Gym();

    double sellMonthlyPass(Member member, double subscriptionPrice = 29.99, int numMonths = 6);
    void setPersonalTrainer(std::string personalTrainerName, float sessionLength = 2.5f, double sessionTime = 1000);
    double getUserFreq(double numDailyPeople, int numDays = 30);
};

Gym::Gym()
{
    std::cout << "Gym \n";
}

Gym::Member::Member()
{
    std::cout << "Gym::Member \n";
}

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

    std::cout << "You have scheduled a session with: \n" << personalTrainerName << "at: \n" << sessionTime << "for: " << sessionLength << " hours\n";
}

double Gym::getUserFreq(double numDailyPeople, int numDays)
{
    double userFreq = numDailyPeople / numDays;
    return userFreq;
}

void Gym::Member::punchPass(int passesRemaining)
{
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

    Piano();

    double playNote(int numKey, double playTime = 45.0);
    int muteNote(bool playOrMute = false, bool stringPadOn = true);
    void volumeDown(bool quietMode = true, int numPedal = 2);
};

Piano::Piano()
{
    std::cout << "Piano \n";
}

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

void Piano::volumeDown(bool quietMode, int numPedal)
{
    if (quietMode == true)
    {
        if (numPedal == 1)
        {
            std::cout << "volume has changed to 50\n";
        }
        else if (numPedal == 2)
        {
            std::cout << "volume has changed to 25\n";
        }
        else
        {
            std::cout << "volume has changed to 75\n";
        }
    }
    std::cout << "volume has changed to 0\n";
}

struct Interface
{
    float paramKnobPos = 45.5f;
    double mParamSlidePos = 75.8;
    int mMenuButton = 5;
    int totalNumKeys = 88;
    double modWheelPos = 50.75;

    Interface();

    int noteOn(int numKey = 40, bool noteIsOn = true);
    double changeParamSlidePos(double paramSlidePos, double moveSlideBy = 15.5);
    void lookupMenu(int menuButton, std::string screenName = "Pads");
};

Interface::Interface()
{
    std::cout << "Interface \n";
}

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
        screenName = "Menu: Parameters\n";
    }
    else if (menuButton == 2)
    {
        screenName = "Menu: Oscillators\n";
    }
    else
    {
        screenName = "Menu: Main\n";
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

    Display();

    void showMenu(int numMenu = 4, int color = 5);
    std::string paramDetail(int numParam, bool paramHasTooltip = true);
    double adjustBrightness(double brightness = 45.0, double addBrightness = 15.0);
};

Display::Display()
{
    std::cout << "Display \n";
}

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

    WaveGenerator();

    void genSineWave(double sineWaveFreq, int oscillator = 1);
    double waveMod(int waveModType = 4, std::string waveModName = "Ring Mod");
    double waveFilter(double filterFreq, int filterType = 3, double filterSlope = 12.0);
};

WaveGenerator::WaveGenerator()
{
    std::cout << "WaveGenerator \n";
}

void WaveGenerator::genSineWave(double sineWaveFreq, int oscillator)
{
    std::cout << "sine wave frequency is: " << sineWaveFreq * oscillator << "\n";
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

    CPU();

    void measureUse(int useTime, double usageCPU, bool overclocked = false);
    int runApp(int numApp = 5, bool nativeOrExternal = true, float needCPU = 42.7f);
    int storePreset(int numPreset, double needMemory = 45.2, std::string namePreset = "Good Patch");
};

CPU::CPU()
{
    std::cout << "CPU \n";
}

void CPU::measureUse(int useTime, double usageCPU, bool overclocked)
{
    usageCPU = useTime * kbSize;

    if (overclocked == true)
    {
        usageCPU *= 2;
    }

    std::cout << "CPU usage is: " << usageCPU << "!\n";
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

    Speakers();

    void playSound(int numSound, double splLevel, int playTime = 450);
    double setOutputLevel(bool mute = false, double changeVolume = 25.3);
    double lookupEfficiency(double splLevel, double wattCapacity, double coneSize = 8);
};

Speakers::Speakers()
{
    std::cout << "Speakers \n";
}

void Speakers::playSound(int numSound, double splLevel, int playTime)
{
    splLevel = mSplLevel;
    std::cout << "sound played is: " << numSound * playTime << "!\n";
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

    Synthesizer();

    void genSound(WaveGenerator oscillatorTwo, double genSineWave = 0.7863);
    void playSound(Speakers mainSpeakers, int playSound, double setOutputLevel = 75.3);
    double savePreset(CPU mainProcessingUnit, int storePreset, std::string presetName = "New Preset");
};  

Synthesizer::Synthesizer()
{
    std::cout << "Synthesizer \n";
}

void Synthesizer::genSound(WaveGenerator oscillatorTwo, double genSineWave)
{
    oscillatorTwo.mOscillator = 2;
    std::cout << "Sine wave set to: " << genSineWave << "\n";
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
    
    CoffeeCorner streetCafe;
    streetCafe.makeCoffee(4, 1, true);
    
    Theater hallmark;
    hallmark.playMovie(1, false, true);

    Gym crushIt;
    crushIt.setPersonalTrainer("chuck", 2.5f, 1000);
    
    Gym::Member patron;
    patron.punchPass(5);

    Piano grandPiano;
    grandPiano.volumeDown(false, 1);

    Interface mainInt;
    mainInt.lookupMenu(2, "Parameters"); //?

    Display mainHud;
    mainHud.showMenu(3, 7); //?

    WaveGenerator waveGen;
    waveGen.genSineWave(250, 3);

    CPU mainCpu;
    mainCpu.measureUse(4, 250, true);

    Speakers mains;
    mains.playSound(2, 75.25, 300);
    std::cout << "your speaker efficiency is: " << mains.lookupEfficiency(75, 100, 6.5) << " dB/w \n";

    Synthesizer synth;
    synth.genSound(waveGen, 0.462);

    std::cout << "good to go!" << std::endl;
}
