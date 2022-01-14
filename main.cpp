/*
 Project 3 - Part 5 / 5
 video: Chapter 2 - Part 10
 Scope and Lifetime tasks
 
Create a branch named Part5

 video covered:
    variable scope and lifetime relative to { }
    while loops
    for loops()
 
 tasks
 
 1) add some new member functions to EACH of your types. 
 
 2) inside these new member functions, use while() and for() loops to do something interesting 
         a) example: have a loop that modifies a member variable of some object created outside the loop.
         b) when that member variable reaches a certain threshold, return it mid-loop.
         c) maybe use function parameters to control the starting value of that member variable or control the threshold
         
 3) call those new member functions in main()
 
 4) use std::cout statements to print out information about what your loops did.
    Your code should produce a lot of console output now.
 
 5) click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

#include <iostream>
namespace Example 
{
struct Bar 
{ 
    int num = 0; 
    Bar(int n) : num(n) { } 
};
struct Foo
{
    Bar scopeLifetimeFunc( int threshold, int startingVal ) //1), 2c) 
    {
        Bar bar(startingVal);                //2a)
        while( bar.num < threshold )         //2a) 
        { 
            bar.num += 1;                    //2a)
            std::cout << "  increasing bar.num: " << bar.num << std::endl; //4)
            if( bar.num >= threshold )       //2b)
                return bar;
        }
        
        return Bar {-1}; //if your startingValue >= threshold, the while loop never runs
    }
};

int main()
{
    Foo foo;
    auto bar = foo.scopeLifetimeFunc(3, 1);        //3) 
    
    std::cout << "bar.num: " << bar.num << std::endl;     //4) 
    return 0;
}
}

//call Example::main() in main()






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
    void heatWater(int waterTemp, int targetTemp);
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
    std::cout << "Your charge is: " << totalCharge  << "\n";
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

void CoffeeCorner::heatWater(int waterTemp, int targetTemp)
{
    for (waterTemp = 32; waterTemp < targetTemp; waterTemp += 10)
    {
        std::cout << "water temperature is currently at: " << waterTemp << " and is heating to target: " << targetTemp << "\n";
    }

    std::cout << "water temperature has reached: " << targetTemp << "\n";
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
    void showtimeReel(int movie, double showtime, int totalNumMovies);
};

Theater::Theater() : 
numTicketBooths(4),
totalNumSnacksAndDrinks(30),
totalNumSeats(120),
theaterName("Cinema"),
ticketPrice(31.99)
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
        itemsSold += snackType;
    }

    if (sellDrinks == true)
    {
        itemsSold += drinkType;
    }

    std::cout << "You sold " << itemsSold << " snacks and/or drinks!\n";
    return itemsSold;
}

void Theater::showtimeReel(int movie, double showtime, int totalNumMovies)
{
    for(movie = 0; movie < totalNumMovies; movie += 1)
    {
        std::cout << "the showtime for movie: " << movie << " is: " << showtime << "\n";
        showtime += 90;
    }
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
        void trackProgress(int goal, int passesRemaining);
    };

    Gym();

    double sellMonthlyPass(Member member, double subscriptionPrice = 29.99, int numMonths = 6);
    void setPersonalTrainer(std::string personalTrainerName, float sessionLength = 2.5f, double sessionTime = 1000);
    double getUserFreq(double numDailyPeople, int numDays = 30);
    void checkIncome(double numDailyPeople, int numDays, double subscriptionPrice);
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

    std::cout << "You have scheduled a session with: " << personalTrainerName << "\n" << "at: " << sessionTime << "\n" << "for: " << sessionLength << " hours\n";
}

double Gym::getUserFreq(double numDailyPeople, int numDays)
{
    double userFreq = numDailyPeople / numDays;
    return userFreq;
}

void Gym::checkIncome(double numDailyPeople, int numDays, double subscriptionPrice)
{
    int i;
    for(i = numDays; i <= 90; i += numDays)
    {
        std::cout << "the average income for " << i << " days is: " << (numDailyPeople * subscriptionPrice) / i << "\n";
    }
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

void Gym::Member::trackProgress(int goal, int passesRemaining)
{
    int i;
    for(i = 0; i < goal; i +=1)
    {
        std::cout << "you are " << goal - i << " (insert parameter here) away from your goal of: " << goal << "\n";
        passesRemaining -= 1;
        std::cout << "you have " << passesRemaining << " passes left \n";
    }
    std::cout << "you have reached your goal!!! \n";
    passesRemaining -= 1;
    std::cout << "you also have " << passesRemaining << " passes left \n";
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
    void arpeggio(int keyNum, int range, int interval);
};

Piano::Piano()
{
    std::cout << "Piano \n";
}

double Piano::playNote(int numKey, double playTime)
{
    /*
    std::cout << "what key would you like to play? (insert key number)\n";
    std::cin >> numKey;
    std::cout << "how long would you like to play the note? (insert time in ms)\n";
    std::cin >> playTime;
    */
    return playTime * numKey;
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

void Piano::arpeggio(int keyNum, int range, int interval)
{
    range = keyNum + range;
    std::cout << "your arpeggio would consist of the following notes: ";
    for( ; keyNum <= range; keyNum += interval)
    {
        std::cout << keyNum << ", ";
    }
    std::cout << "try it out! \n";
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
    double modWheelAuto(double initPos, double finPos, double increment, bool moveUp);
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
    
    return numKey;
}

double Interface::changeParamSlidePos(double paramSlidePos, double moveSlideBy)
{
    // std::cin >> moveSlideBy;
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

double Interface::modWheelAuto(double initPos, double finPos, double increment, bool moveUp)
{
    std::cout << "mod wheel automated to move from: " << initPos << "\n";
    double position;
    if(moveUp == true)
    {
        for(position = initPos; position <= finPos; position += increment)
        {
            std::cout << position << "\n";
        }
    }
    for(position = initPos; position >= finPos; position -= increment)
        {
            std::cout << position << "\n";
        }
    std::cout << "to: " << finPos << "\n";
    return position;
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
    double fastForward(double speed, double targetTime, double currentTime);
};

Display::Display()
{
    std::cout << "Display \n";
}

void Display::showMenu(int numMenu, int color)
{
    color = numMenu;
    std::cout << "enjoy this menu! \n";
}

std::string Display::paramDetail(int numParam, bool paramHasTooltip)
{
    std::cout << numParam << ": Parameter name\n";

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

double Display::fastForward(double speed, double targetTime, double currentTime)
{
    for(time = currentTime; time <= targetTime; time += speed)
    {
        std::cout << time << ", ";
    }
    return time;
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
    void distort(int sineWaveFreq, int distortion, int scale);
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

    // std::cin >> filterFreq;
    return filterFreq * filterSlope;
}

void WaveGenerator::distort(int sineWaveFreq, int distortion, int scale)
{
    for( ; sineWaveFreq <= distortion; sineWaveFreq *= scale)
    {
        std::cout << "applying distortion at: " << sineWaveFreq << "hz \n";
    }
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
    float runApp(int numApp = 5, bool nativeOrExternal = true, float needCPU = 42.7f);
    int storePreset(int numPreset, double needMemory = 45.2, std::string namePreset = "Good Patch");
    void memoryScan(double kbSize, int rpmSpeed);
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

float CPU::runApp(int numApp, bool nativeOrExternal, float needCPU)
{
    // std::cin >> numApp;
    needCPU = mUsageCPU;
    
    if (nativeOrExternal == false)
    {
        needCPU *= 2;
    }

    return numApp * needCPU;
}

int CPU::storePreset(int numPreset, double needMemory, std::string namePreset)
{
    numPreset += 1;
    needMemory = kbSize / 10;
    namePreset = "newPreset";
    return numPreset;
}

void CPU::memoryScan(double totalSize, int internalSpeed)
{
    int i;
    for (i = 2; i <= totalSize; i *= (2 * internalSpeed))
    {
        std::cout << i << "kb of memory scanned, at: " << 2 * internalSpeed << "kb/s \n";
    }
}

struct Speakers
{
    double mConeSize = 7.5;
    float ohmCapacity = 4.8f;
    double mWattCapacity = 24.65;
    double mSplLevel = 78.4;
    double mEfficiency = 62.35;

    Speakers();

    void playSound(int numSound, double splLevel, int playTime = 450);
    double setOutputLevel(bool mute = false, double changeVolume = 25.3);
    double lookupEfficiency(double splLevel, double wattCapacity, double coneSize = 8);
    void heatOutput(double efficiency, double wattCapacity, double splLevel);
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
    return (splLevel * (coneSize * wattCapacity)) / mEfficiency;
}

void Speakers::heatOutput(double efficiency, double wattCapacity, double splLevel)
{
    for( ; splLevel < 90; splLevel += 0.5)
    {
        std::cout << "for SPL: " << splLevel << "\n";
      for(auto i = wattCapacity; i < efficiency; i += 1)
        {
            std::cout << " current efficiency is: " << i / efficiency << "\n";
        }
    }
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
    void maxCpu(CPU mainProcessingUnit, double memoryNeed);
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
    std::cout<< mainSpeakers.mConeSize << "\n";
    setOutputLevel = mainSpeakers.setOutputLevel();
    std::cout << playSound << "\n";
}

double Synthesizer::savePreset(CPU mainProcessingUnit, int storePreset, std::string presetName)
{
    std::cout << mainProcessingUnit.kbSize << "\n";
    storePreset += 1;
    presetName = "New Preset";
    return storePreset;
}

void Synthesizer::maxCpu(CPU mainProcessingUnit, double memoryNeed)
{
    for(auto i = mainProcessingUnit.kbSize; i > memoryNeed; i /= 2)
    {
        std::cout << "reduced memory size is: " << i - memoryNeed << "\n";
    }
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
    streetCafe.charge(5.99);
    streetCafe.addFlavour(true, 3);
    streetCafe.heatWater(42, 212);
    
    Theater hallmark;
    hallmark.playMovie(1, false, true);
    hallmark.sellTicket();
    hallmark.sellRefreshments(true, 2, true, 4);
    hallmark.showtimeReel(1, 1250, 5);
    
    Gym crushIt;
    crushIt.setPersonalTrainer("chuck", 2.5f, 1000);
    Gym::Member example;
    crushIt.sellMonthlyPass(example, 29.99, 6);
    std::cout << "average user number is: " << crushIt.getUserFreq(45, 30) << "\n";
    crushIt.checkIncome(34, 30, 24.99);
    
    Gym::Member patron;
    patron.punchPass(5);
    patron.bringAFriend(true, 4);
    patron.giveReward(1, "10% Discount", 10);
    patron.trackProgress(5, 10);
    
    Piano grandPiano;
    grandPiano.volumeDown(false, 1);
    grandPiano.playNote(40, 42.25);
    grandPiano.muteNote(false, false);
    grandPiano.arpeggio(40, 24, 3);
    
    Interface mainInt;
    mainInt.lookupMenu(2, "Parameters");
    std::cout << mainInt.noteOn(44, true) << "\n";
    mainInt.changeParamSlidePos(45, 15.5);
    mainInt.modWheelAuto(45.5, 75.6, 0.3, true);
    
    Display mainHud;
    mainHud.showMenu(3, 7);
    mainHud.paramDetail(4, true);
    mainHud.adjustBrightness(41, 11);
    std::cout << "fast forwarding time: " << mainHud.fastForward(50, 1900, 1300) << "\n";
    
    WaveGenerator waveGen;
    waveGen.genSineWave(250, 3);
    waveGen.waveMod(4, "Ring");
    waveGen.waveFilter(500, 2, 18.0);
    waveGen.distort(500, 20000, 3);
   
    CPU mainCpu;
    mainCpu.measureUse(4, 250, true);
    mainCpu.runApp(5, true, 37.6f);
    mainCpu.storePreset(1, 67.9, "new patch");
    mainCpu.memoryScan(2056 * 16, 3);
   
    Speakers mains;
    mains.playSound(2, 75.25, 300);
    std::cout << "your speaker efficiency is: " << mains.lookupEfficiency(75, 100, 6.5) << " dB/w \n";
    mains.setOutputLevel(false, 24.76);
    mains.heatOutput(95, 65, 75);
    
    Synthesizer synth;
    synth.genSound(waveGen, 0.462);
    synth.playSound(mains, 4, 82.53);
    synth.savePreset(mainCpu, 1, "new preset");
    synth.maxCpu(mainCpu, 48);
    
    std::cout << "good to go!" << std::endl;
}
