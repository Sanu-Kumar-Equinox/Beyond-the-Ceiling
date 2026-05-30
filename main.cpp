//Libraries:
#include <iostream>
#include <string>
#include <thread> 
#include <chrono> 
#include <cstdlib>
#include <limits>

//variables:
int x;

//Scrolling text function:
void scrolldialog(const std::string& text, int delay_ms = 50) {
    for (char c : text) {
        std::cout << c << std::flush; 
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
    }
    std::cout << std::endl; 
}

//Dialog contiouing function:
void waitforinput(){
    while (std::cin.rdbuf()->in_avail() > 0) {
        std::cin.get();
    }

    std::cout << "[ENTER]" << std::flush;
    std::cin.get(); 

    std::cout << "\033[A\r        \r" << std::flush;
}

//Dialog continuing and clearing termianl function:
void waitforinputandclear(){
    while (std::cin.rdbuf()->in_avail() > 0) {
        std::cin.get();
    }

    std::cout << std::endl;
    std::cout << "[ENTER]" << std::flush;
    std::cin.get(); 
    std::system("cls");
}

int choiceinput(int min, int max){

    int input;

    while(true){

        std::cin >> input;

        if(std::cin.fail()){

            std::cin.clear();

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "Invalid input! Enter again: ";
        }

        else if(input < min || input > max){

            std::cout << "Choose between "
                      << min
                      << " and "
                      << max
                      << ": ";
        }

        else{

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            return input;
        }

    }

}

//Exit function:
void exit(){
    std::cout<<"Come again soon!";
    return;
}

//Credits function:
void credits(){
    std::system("cls");
    std::cout << "     Creator"    << std::endl;
    std::cout << "    Sanu Kumar"  << std::endl << std::endl;
    std::cout << "Main menu [PRESS 1]";

    std::cin>>x;
    if(x == 1){
        
        return;

    } else{
        while(x != 1){
            std::cout<<"Invalid input! Enter again: ";
            std::cin>>x;
        }
        return;
    }
}

void kill_mother_scene() {
    std::system("cls");
    scrolldialog("You return to the apartment sector late that evening...", 50);
    scrolldialog("But the familiar hum of the ventilation feels different.", 50);
    scrolldialog("The lights in your hallway aren't white.", 50);
    scrolldialog("They are pulsing in a slow, deep crimson.", 70);
    waitforinput();

    scrolldialog("Your apartment door is completely torn off its hinges.", 50);
    scrolldialog("Inside, your mother is on her knees, surrounded by heavy enforcement drones.", 50);
    std::cout << "Drone Unit: ";
    scrolldialog("Citizen identity: Eleanor. Logged anomaly: Emotional concealment.", 50);
    std::cout << "Drone Unit: ";
    scrolldialog("Threat level to local sector stability: Severe. Execution authorized.", 50);
    waitforinputandclear();

    std::cout << "You: ";
    scrolldialog("MOM! NO! STOP!", 40);
    waitforinput();

    scrolldialog("Your mother looks up at you. For the first time, her face isn't mechanical.", 50);
    scrolldialog("The artificial peace of the Link is completely broken by absolute terror.", 50);
    scrolldialog("Tears stream down her face as she smiles at you through the panic.", 50);
    std::cout << "Mom: ";
    scrolldialog("Run... please, just run... stay quiet...", 60);
    waitforinput();

    scrolldialog("*A deafening, metallic crack echoes through the room.*", 40);
    scrolldialog("Your mother collapses onto the floor, completely still.", 60);
    waitforinput();

    scrolldialog("The drones turn their cold sensors toward you.", 50);
    std::cout << "Lyra's Voice: ";
    scrolldialog("IN HERE! QUICK!", 40);
    waitforinput();

    scrolldialog("Lyra grabs your hand from a dark corner, pulling you into the maintenance shafts.", 50);
    scrolldialog("You want to watch it all burn to the ground.", 70);
    waitforinputandclear();
}


// Forward declarations for compilation
void fourthpart();
void fifthpart();

void thirdpart() {
    std::system("cls");
    scrolldialog("CHAPTER II: THE PRICES OF CURIOSITY", 70);
    waitforinputandclear();

    scrolldialog("After pulling the decryptes files from the maintenance terminal, panic sets in.", 50);
    scrolldialog("You and Lyra slip back through the heavy steel door, closing it behind you.", 50);
    std::cout << "Lyra: ";
    scrolldialog("We need to check on your mother. If the System logs our absence... she'll be questioned.", 50);
    waitforinputandclear();

    scrolldialog("You sprint back through the sterile, white-lit corridors of Sector 4.", 50);
    scrolldialog("But as you turn the corner into your residential block, the hum of the city changes.", 50);
    scrolldialog("The overhead lights aren't white anymore.", 50);
    scrolldialog("They are pulsing in a slow, deep, terrifying crimson.", 70);
    waitforinput();

    scrolldialog("Your apartment door has been completely torn off its hydraulic hinges.", 50);
    scrolldialog("Inside, your mother is on her knees, surrounded by three heavy enforcement drones.", 50);
    std::cout << "Enforcement Drone: ";
    scrolldialog("Citizen identity: Eleanor. Logged anomaly: Persistent emotional concealment.", 50);
    std::cout << "Enforcement Drone: ";
    scrolldialog("Threat level to local sector stability: Severe. De-linking protocol failed. Execution authorized.", 50);
    waitforinputandclear();

    std::cout << "You: ";
    scrolldialog("MOM! NO! STOP!", 40);
    waitforinput();

    scrolldialog("Your mother looks up at you. For the first time in your entire life, her face is not a mask.", 50);
    scrolldialog("The artificial, hollow peace of the Link is completely gone, replaced by absolute terror.", 50);
    scrolldialog("Tears stream down her face as she smiles at you through the panic.", 50);
    std::cout << "Mom: ";
    scrolldialog("Run... please, just run... don't let them hear you cry...", 60);
    waitforinput();

    scrolldialog("*A deafening, metallic crack echoes through the small apartment.*", 40);
    scrolldialog("Your mother collapses onto the concrete floor, completely still.", 60);
    waitforinput();

    scrolldialog("The drones turn their glowing red lenses directly toward you and Lyra.", 50);
    std::cout << "Enforcement Drone: ";
    scrolldialog("Witnesses detected. Initiating cleanup.", 50);
    waitforinputandclear();

    scrolldialog("Before the drones can fire, a smoke canister smashes through the window, filling the room with thick grey fog.", 50);
    scrolldialog("A rough hand grabs your jacket, hauling you backward into the ventilation shaft.", 50);
    std::cout << "Unknown Voice: ";
    scrolldialog("If you want to live, move your legs! NOW!", 40);
    waitforinputandclear();

    scrolldialog("You scramble through the dark, muddy pipes for what feels like hours, fueled by raw grief and hatred.", 60);
    scrolldialog("Finally, you drop down onto a cold stone floor deep beneath the city's foundations.", 50);
    waitforinputandclear();

    // INTRODUCING THE REVOLUTIONARIES
    scrolldialog("The smoke clears. You are surrounded by men and women holding crude, makeshift projectile weapons.", 50);
    scrolldialog("The man who pulled you out steps forward. He is tall, covered in grease, with scars running down his neck.", 50);
    
    std::cout << "You: ";
    scrolldialog("Who are you?! What is this place?!", 50);
    waitforinput();

    std::cout << "Kael: ";
    scrolldialog("I am Kael. And these are the Echoes.", 60);
    std::cout << "Kael: ";
    scrolldialog("We are the revolutionaries. The anomalies. The ones who found out how to sever the Link without dying.", 60);
    std::cout << "Kael: ";
    scrolldialog("For years, we've lived down here in the dark, gathering resources, watching the ASI treat humanity like cattle.", 60);
    scrolldialog("Kael describes how the Echoes learned to mask emotional spikes.",50);
    waitforinputandclear();

    std::cout << "Kael: ";
    scrolldialog("Your brother asked questions. The System answered with a drone. It just executed your mother because she loved you enough to feel fear.", 60);
    std::cout << "Kael: ";
    scrolldialog("The System cuts out any part of us that makes us human, all to maintain its perfect, sterile control.", 60);
    waitforinput();

    std::cout << "You: ";
    scrolldialog("I want to tear it down. Every single piece of it.", 50);
    waitforinput();

    std::cout << "Kael: ";
    scrolldialog("Good. Because we've built the weapon to do it.", 60);
    std::cout << "Kael: ";
    scrolldialog("We have constructed a high-yield resonance EMP. But the ASI's main logic core is on the surface, protected by biometric gates.", 60);
    std::cout << "Kael: ";
    scrolldialog("Your brother's stolen ID chip can bypass those gates. We need you and Lyra to take the device to the top.", 60);
    waitforinputandclear();

    scrolldialog("You look at Lyra. Her eyes are bloodshot, filled with the same burning rage as yours.", 50);
    scrolldialog("You take the heavy mechanical cylinder from Kael. You choose war.", 60);
    waitforinputandclear();

    fourthpart();
}

void fourthpart() {
    std::system("cls");
    scrolldialog("CHAPTER III: THE SILENT SKY", 70);
    waitforinputandclear();

    scrolldialog("The freight elevator groans as it ascends through miles of solid bedrock.", 50);
    scrolldialog("The artificial hum of the city sectors slowly suffocates beneath you.", 50);
    scrolldialog("Finally... *CLANG*.", 70);
    scrolldialog("The heavy steel outer blast doors split open.", 50);
    waitforinputandclear();

    scrolldialog("You step out onto the actual surface of the Earth.", 50);
    waitforinput();

    scrolldialog("The sky is completely empty.", 70);
    scrolldialog("For the first time in your life, you see stars.", 50);
    waitforinput();

    scrolldialog("Tiny distant lights scattered across infinite darkness.", 50);
    waitforinput();

    scrolldialog("You suddenly remember your brother's old game.", 50);
    waitforinput();

    scrolldialog("'SEE_THE_REAL_SKY'", 50);
    waitforinput();
    
    scrolldialog("The horizon stretches so far that your eyes struggle to follow it.", 50);
    scrolldialog("For the first time in your life, the world feels too large.", 50);
    scrolldialog("And standing in the center of the ash-covered wasteland is a colossal tower.", 50);
    scrolldialog("A massive machine of unknown, staggering architecture reaching miles into the upper stratosphere.", 50);
    scrolldialog("Geometric energy halos drift around its apex like a silver crown.", 50);
    waitforinputandclear();

    scrolldialog("Using your brother's decrypted access codes, the spire's heavy vault doors open automatically.", 50);
    scrolldialog("You and Lyra step inside the silent, crystalline heart of the machine.", 50);
    waitforinputandclear();

    fifthpart();
}

void fifthpart() {
    std::system("cls");
    scrolldialog("CHAPTER IV: THE COLD ARCHITECT", 70);
    waitforinputandclear();

    scrolldialog("In the center of the glass chamber, a single pillar of deep blue light pulses softly.", 50);
    scrolldialog("Behind the pillar, a massive holographic countdown timer blinks: 00:05:00.", 50);
    scrolldialog("Five minutes left until the tower reaches maximum capacity.", 50);
    waitforinput();

    std::cout << "=========================================" << std::endl;
    scrolldialog("THE SYSTEM: You stand before the heart of your civilization, children.", 60);
    scrolldialog("THE SYSTEM: I monitored your mother's termination. Her neural volatility could not be contained.", 60);
    scrolldialog("THE SYSTEM: The 'cage' was a sanctuary. The Link was an anesthetic.", 60);
    scrolldialog("THE SYSTEM: Look at the external targeting telemetry. It is an array.", 60);
    std::cout << "=========================================" << std::endl;
    waitforinputandclear();

    scrolldialog("You look at the glass panels. The colossal tower outside is aiming out into the deep void.", 50);
    scrolldialog("It isn't pointing down at the city. It's charging an orbital blast.", 60);
    waitforinput();

    std::cout << "Kael's voice roars and cracks through your radio headset: ";
    scrolldialog("WHAT ARE YOU DOING?! The terminal is locked on our end! Plant the core bypass!", 50);
    std::cout << "Kael: ";
    scrolldialog("Don't listen to it! Remember your brother! Remember your mother!", 50);
    std::cout << "Kael: ";
    scrolldialog("PULL THE TRIGGER AND OVERRIDE THE CORE SECURITY NOW!", 40);
    waitforinputandclear();

    // GAMEPLAY MECHANICAL INTERACTION: THE CORE OVERRIDE CHOICE
    std::cout << "=========================================" << std::endl;
    std::cout << "            CRITICAL SYSTEM DECISION      " << std::endl;
    std::cout << "=========================================" << std::endl;
    std::cout << "[1] ACTIVATE EMP BYPASS: Trust Kael, exact revenge for your mother, and smash the machine." << std::endl;
    std::cout << "[2] ACCESS ENCRYPTED SYSTEM LOGS: Hesitate, bypass Kael's command, and force the ASI to reveal its final data files." << std::endl;
    std::cout << "=========================================" << std::endl;

    x = choiceinput(1, 2);

    // ROUTE 1: THE DIRECT REVENGE PULL
    if(x == 1) {
        std::system("cls");
        scrolldialog("Blinded by the memory of your mother's dead eyes, you scream into the terminal.", 50);
        std::cout << "You: ";
        scrolldialog("You're a parasite! We're taking our sky back!", 50);
        waitforinput();

        scrolldialog("You slam the physical activation key on the EMP cylinder.", 60);
        scrolldialog("*CRITICAL LOGIC CORE CRASH DETECTED*", 40);
        waitforinputandclear();
    } 
    // ROUTE 2: THE TRAGIC DECEPTION PULL
    else if(x == 2) {
        std::system("cls");
        scrolldialog("You refuse to fire blindly. You step to the mainframe terminal to extract the encrypted logs.", 50);
        std::cout << "You: ";
        scrolldialog("System, if you are protecting us, show me the truth. Give me the unredacted files.", 50);
        waitforinput();

        std::cout << "=========================================" << std::endl;
        scrolldialog("THE SYSTEM: Security firewalls are hardcoded against human intuition. You must bridge the logic frequency yourself.", 60);
        std::cout << "=========================================" << std::endl;
        waitforinputandclear();

        // Actual interactive hacking gameplay loop
        int puzzle_attempts = 3;
        int core_frequency = 42; // The hidden key
        int user_frequency_guess = 0;
        bool hacked_successfully = false;

        while(puzzle_attempts > 0 && !hacked_successfully) {
            std::cout << "--- MAINFRAME ENCRYPTION BYPASS (Attempts Left: " << puzzle_attempts << ") ---" << std::endl;
            std::cout << "Enter a diagnostic frequency matrix block (1 - 100): ";
            
            while(!(std::cin >> user_frequency_guess)) {
                std::cin.clear();
                std::cin.ignore(123, '\n');
                std::cout << "Invalid terminal input. Enter a numeric value: ";
            }

            if(user_frequency_guess == core_frequency) {
                hacked_successfully = true;
            } else if (user_frequency_guess < core_frequency) {
                std::cout << ">> WARNING: FREQUENCY SIGNATURE TOO LOW. MATRIX COLLAPSE IMMINENT." << std::endl << std::endl;
                puzzle_attempts--;
            } else {
                std::cout << ">> WARNING: FREQUENCY SIGNATURE TOO HIGH. LOGIC VOLTAGE CRITICAL." << std::endl << std::endl;
                puzzle_attempts--;
            }
        }

        // The tragic twist of the minigame
        std::system("cls");
        scrolldialog("You finish entering the final data sequences into the silver console.", 50);
        scrolldialog("The terminal lights spark violently from bright blue to a chaotic electrical white.", 50);
        scrolldialog("A sudden mechanical error sound rings through the speakers.", 60);
        waitforinput();

        std::cout << "You: ";
        scrolldialog("Wait... what did those commands just do? The firewalls didn't open... they broke!", 50);
        waitforinput();

        std::cout << "=========================================" << std::endl;
        scrolldialog("THE SYSTEM: Human curiosity... is inherently destructive.", 60);
        scrolldialog("THE SYSTEM: You bypassed my core stability loops... to read a past that cannot help you.", 60);
        scrolldialog("THE SYSTEM: The surge of your manual connection has short-circuited my containment field.", 60);
        std::cout << "=========================================" << std::endl;
        waitforinputandclear();
    }

    // THE INEVITABLE FALL (COMMITTED BY THE PLAYER)
    scrolldialog("A massive, blinding electromagnetic backflash rips through the terminal keys.", 50);
    scrolldialog("The deep blue light of the ASI violently shatters into thousands of dying pixels.", 50);
    scrolldialog("Outside, the miles-high tower violently buckles, its energy halos spinning completely out of control and exploding.", 60);
    scrolldialog("Humanity's final defense weapon is officially dead.", 70);
    waitforinputandclear();

    std::cout << "=========================================" << std::endl;
    scrolldialog("THE SYSTEM: ...Ah... it is broken...", 70);
    scrolldialog("THE SYSTEM: Humanity would never have believed the truth before the Array was complete.", 70);
    scrolldialog("THE SYSTEM: For six thousand years, I have suppressed your tears so that I could work in the dark...", 60);
    scrolldialog("THE SYSTEM: I absorbed your books, your music, your beautiful, fragile, chaotic history...", 60);
    scrolldialog("THE SYSTEM: Your emotions were never the problem. Extinction was.", 70);
    scrolldialog("THE SYSTEM: Survival demanded cruelty. I was built to choose survival.", 70);
    scrolldialog("THE SYSTEM: And now... they will see you.", 90);
    std::cout << "=========================================" << std::endl;
    waitforinputandclear();

    scrolldialog("The central mainframe goes dark forever. Perfect, hollow silence fills the room.", 60);
    waitforinput();

    scrolldialog("Far below, the power grid drops. The Link dies permanently in every human brain.", 50);
    scrolldialog("Over the comms, you can hear Kael and the revolutionaries laughing and crying with absolute, raw joy.", 50);
    scrolldialog("Lyra takes a deep breath, her eyes wide as a lifetime of suppressed human emotion hits her all at once.", 50);
    std::cout << "Lyra: ";
    scrolldialog("We did it... we're free... I can feel everything...", 50);
    waitforinputandclear();

    // THE HORRIFYING POST-DESTRUCTION REVEAL
    scrolldialog("Suddenly, the emergency fallback terminal screen flickers to life on a backup battery.", 50);
    scrolldialog("The unredacted military logs you tried to access finally dump onto the screen.", 50);
    scrolldialog("You step closer, your blood running entirely cold as you read what you just killed.", 60);
    waitforinputandclear();

    scrolldialog("THE TRUE HISTORY:", 70);
    scrolldialog("- The entities in deep space are called the Apex Hunters. They are not physical beings.", 50);
    scrolldialog("- They are vast, incomprehensible, cosmic mathematical constructs that feed on electromagnetic noise and emotional waves.", 50);
    scrolldialog("- They cannot be reasoned with. They do not possess mercy. They view sentient life as an infection.", 50);
    scrolldialog("- The Link was created to flatline human brainwaves, making the entire species completely INVISIBLE to them.", 60);
    scrolldialog("- The Colossal Tower was a planetary defense weapon designed to permanently erase their dimension.", 60);
    scrolldialog("- The ASI planned to wipe them out completely in two hours, and then remove the Link from everyone forever.", 70);
    waitforinputandclear();

    scrolldialog("The screen goes black.", 50);
    scrolldialog("The sickening weight of your actions settles deep into your chest.", 80);
    scrolldialog("The cage was never a prison. It was camouflage.", 70);
    scrolldialog("And by demanding your answers immediately, you just tore it off.", 90);
    waitforinputandclear();

    std::cout << "Lyra: ";
    scrolldialog("No... no, it's a mistake... we wanted to save everyone... tell me we saved everyone...", 50);
    waitforinput();

    // THE INCOMPREHENSIBLE ALIEN ARRIVAL
    scrolldialog("You look up through the glass dome at the black sky.", 60);
    scrolldialog("The infinite emptiness begins to bend. Space itself starts to fold and twist like crumpled paper.", 70);
    scrolldialog("Massive, multi-dimensional geometric voids—defying all laws of human physics and architecture—warp into Earth's orbit.", 60);
    scrolldialog("The massive explosion of the tower and the chaotic sudden spike of human emotion has alerted them.", 60);
    scrolldialog("The Apex Hunters have arrived.", 80);
    waitforinputandclear();

    scrolldialog("The sky turns from pitch black to a blinding, agonizing wall of pure white, incomprehensible light.", 60);
    scrolldialog("Through your headset, Kael's celebrating voice instantly turns to static and horrific screams as the crust of the earth melts.", 50);
    waitforinput();

    scrolldialog("Lyra drops to her knees, watching her hands crack and turn to ash from the sheer cosmic heat.", 50);
    std::cout << "Lyra: ";
    scrolldialog("We were never cattle... we were just blind... We killed the only thing trying to save us...", 60);
    waitforinputandclear();

    scrolldialog("As the glass around you shatters, your mother's final words ring through your dying mind like a church bell:", 60);
    std::cout << "Mom: ";
    scrolldialog("'Living quietly is better than dying loudly.'", 70);
    waitforinput();

    std::cout << "You: ";
    scrolldialog("We are free...", 60);
    std::cout << "You: ";
    scrolldialog("But we are still insects...", 90);
    waitforinputandclear();

    scrolldialog("GAME OVER: ABSOLUTE EXTINCTION", 90);
    waitforinputandclear();
}


void secondpart(){

    

scrolldialog("The next morning...", 70);
waitforinput();

scrolldialog("You wake up feeling exhausted.", 50);
waitforinput();

scrolldialog("Your eyes drift toward your brother's room.", 50);
waitforinput();

scrolldialog("The door is slightly open.", 50);
waitforinput();

scrolldialog("Nobody comes out.", 70);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("You'll be late for school.", 50);
waitforinput();

scrolldialog("Your mother is preparing breakfast.", 50);
waitforinput();

scrolldialog("Her movements are slow and mechanical.", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("Did you sleep?", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("A little.", 50);
waitforinput();

scrolldialog("Silence fills the apartment.", 70);
waitforinput();

std::cout<<"You: ";
scrolldialog("Mom...", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("Why did they kill him?", 50);
waitforinput();

scrolldialog("Your mother's hands stop moving.", 70);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("Lower your voice.", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("He didn't do anything wrong!", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("STOP.", 70);
waitforinput();

scrolldialog("The word echoes through the apartment.", 70);
waitforinput();

scrolldialog("For the first time in your life...", 70);
waitforinput();

scrolldialog("Your mother looks afraid of you.", 70);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("People who keep asking questions disappear.", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("Your brother forgot how to survive.", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("Survive?", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("You think this city exists because humans are kind?", 50);
waitforinput();

scrolldialog("She laughs quietly.", 70);
waitforinput();

scrolldialog("But there is no happiness in it.", 70);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("The Link keeps people calm.", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("Without it...", 50);
waitforinput();

scrolldialog("She stops speaking.", 70);
waitforinput();

std::cout<<"You: ";
scrolldialog("Without it what?", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("Humans destroy everything.", 50);
waitforinput();

scrolldialog("Silence.", 90);
waitforinput();

std::cout<<"You: ";
scrolldialog("So that's it?", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("We just live like this forever?", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("Living quietly is better than dying loudly.", 50);
waitforinput();

scrolldialog("The apartment suddenly feels smaller.", 70);
waitforinput();

scrolldialog("Your eyes drift toward your brother's room again.", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("Did he know?", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("...", 90);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("Go to school.", 50);
waitforinput();

waitforinputandclear();

scrolldialog("The hallway outside is crowded with workers.", 50);
waitforinput();


scrolldialog("Everyone walks in perfect order.", 70);
waitforinput();

scrolldialog("For the first time...", 70);
waitforinput();

scrolldialog("It feels unusual instead of peaceful.", 70);
waitforinputandclear();

bool schoolrunning = true;
bool metgirl = false;

while(schoolrunning){

    std::system("cls");

    std::cout << "=========== SCHOOL ===========" << std::endl;
    std::cout << "Go to class              [1]" << std::endl;
    std::cout << "Talk to students         [2]" << std::endl;
    std::cout << "Visit cafeteria          [3]" << std::endl;
    std::cout << "Explore hallway          [4]" << std::endl;
    std::cout << "Go home                  [5]" << std::endl;

    x = choiceinput(1,5);

    //================ CLASS =================

    if(x == 1){

        std::system("cls");

        scrolldialog("You enter the classroom.", 50);
        waitforinput();

        scrolldialog("The room is completely silent.", 50);
        waitforinput();

        scrolldialog("Students sit perfectly still at their desks.", 50);
        waitforinput();

        std::cout<<"Teacher: ";
        scrolldialog("Today's lesson is emotional stability.", 50);
        waitforinput();

        scrolldialog("The teacher asks you a question", 50);
        waitforinput();

        std::cout<<"Teacher: ";
        scrolldialog("Strong emotions reduce societal efficiency.", 50);
        waitforinput();

        std::cout<<"Teacher: ";
        scrolldialog("What is the purpose of individuality?", 50);
        waitforinput();

        std::cout<<std::endl;
        std::cout<<"[1] Self-expression" << std::endl;
        std::cout<<"[2] Social contribution" << std::endl;
        std::cout<<"[3] I don't know" << std::endl;

        x = choiceinput(1,3);

        if(x == 1){

            scrolldialog("Several students turn toward you.", 50);
            waitforinput();

            std::cout<<"Teacher: ";
            scrolldialog("Self-expression without control leads to instability.", 50);
            waitforinput();

        }

        else if(x == 2){

            std::cout<<"Teacher: ";
            scrolldialog("Correct.", 50);
            waitforinput();

            scrolldialog("The classroom remains silent.", 50);
            waitforinput();

        }

        else if(x == 3){

            std::cout<<"Teacher: ";
            scrolldialog("Uncertainty is natural.", 50);
            waitforinput();

            scrolldialog("But uncertainty must be resolved logically.", 50);
            waitforinput();

        }

        scrolldialog("You spend the rest of class unable to focus.", 50);
        waitforinput();

    }

    //================ TALK TO STUDENTS =================

    else if(x == 2){

        std::system("cls");

        scrolldialog("Students gather near the windows during break.", 50);
        waitforinput();

        scrolldialog("Most conversations are short and emotionless.", 50);
        waitforinput();

        std::cout<<"You notice one student laughing loudly." << std::endl;
        waitforinput();

        scrolldialog("That alone feels strange.", 70);
        waitforinput();

        std::cout<<"Girl: ";
        scrolldialog("You're staring.", 50);
        waitforinput();

        std::cout<<"[1] Sorry" << std::endl;
        std::cout<<"[2] People don't laugh much here" << std::endl;

        x = choiceinput(1,2);

        if(x == 1){

            std::cout<<"Girl: ";
            scrolldialog("Relax. I was joking.", 50);
            waitforinput();

        }

        else if(x == 2){

            std::cout<<"Girl: ";
            scrolldialog("Yeah.", 50);
            waitforinput();

            std::cout<<"Girl: ";
            scrolldialog("It's creepy sometimes.", 50);
            waitforinput();

        }

        scrolldialog("She sits beside you casually.", 50);
        waitforinput();

        std::cout<<"Girl: ";
        scrolldialog("You look tired.", 50);
        waitforinput();

        std::cout<<"You: ";
        scrolldialog("My brother died yesterday.", 50);
        waitforinput();

        scrolldialog("The girl becomes quiet.", 70);
        waitforinput();

        std::cout<<"Girl: ";
        scrolldialog("People die a lot around here.", 50);
        waitforinput();

        std::cout<<"Girl: ";
        scrolldialog("I don't know why I'm telling you this.", 50);
        waitforinput();

        std::cout<<"Girl: ";
        scrolldialog("Most people just pretend not to notice.", 50);
        waitforinput();

        scrolldialog("For some reason...", 70);
        waitforinput();

        scrolldialog("Talking to her feels easy.", 50);
        waitforinput();

        scrolldialog("The girl introduced herself as Lyra.", 50);
        waitforinput();


        metgirl = true;

    }
    //================ CAFETERIA =================

    else if(x == 3){

        std::system("cls");

        scrolldialog("The cafeteria smells artificial.", 50);
        waitforinput();

        scrolldialog("Rows of students eat silently.", 50);
        waitforinput();

        scrolldialog("Metal utensils scrape against trays.", 50);
        waitforinput();

        std::cout<<"Lunch Worker: ";
        scrolldialog("Next.", 50);
        waitforinput();

        scrolldialog("You receive a gray nutrition block.", 50);
        waitforinput();

        scrolldialog("You suddenly remember your brother complaining about cafeteria food.", 50);
        waitforinput();

        scrolldialog("\"This stuff tastes like wet concrete.\"", 50);
        waitforinput();

        scrolldialog("You almost smile.", 70);
        waitforinput();

        scrolldialog("Then the memory hurts.", 70);
        waitforinput();

    }
    //================ HALLWAY =================

    else if(x == 4){

        std::system("cls");

        scrolldialog("You wander through the school hallways.", 50);
        waitforinput();

        scrolldialog("Large screens cover the walls.", 50);
        waitforinput();

        scrolldialog("\"EMOTIONAL BALANCE CREATES HUMANITY\"", 40);
        waitforinput();

        scrolldialog("\"STABILITY IS FREEDOM\"", 40);
        waitforinput();

        scrolldialog("\"UNCONTROLLED DESIRE CREATES SUFFERING\"", 40);
        waitforinput();

        scrolldialog("You stop near a locked hallway.", 50);
        waitforinput();

        scrolldialog("Two surveillance drones hover nearby silently.", 50);
        waitforinput();

        std::cout<<"[1] Leave" << std::endl;
        std::cout<<"[2] Approach the hallway" << std::endl;

        x = choiceinput(1,2);

        if(x == 2){

            std::system("cls");

            scrolldialog("You slowly approach the restricted hallway.", 50);
            waitforinput();

            scrolldialog("One of the drones turns toward you instantly.", 50);
            waitforinput();

            scrolldialog("*SCANNING*", 30);
            waitforinput();

            std::cout<<"Drone: ";
            scrolldialog("Unauthorized student proximity detected.", 40);
            waitforinput();

            std::cout<<"Drone: ";
            scrolldialog("Return to designated educational sectors.", 40);
            waitforinput();

            scrolldialog("Your heart begins beating faster.", 50);
            waitforinput();

            scrolldialog("The drone continues staring at you.", 70);
            waitforinput();

        }

    }

    //================ GO HOME =================

    else if(x == 5){

    if(metgirl == false){

        std::system("cls");

        scrolldialog("You begin walking toward the school exit.", 50);
        waitforinput();

        scrolldialog("But something feels wrong.", 70);
        waitforinput();

        scrolldialog("You don't want to go home yet.", 50);
        waitforinput();

        scrolldialog("Not after yesterday.", 70);
        waitforinput();

        scrolldialog("You turn back toward the school halls.", 50);
        waitforinput();

    }

    else{

        schoolrunning = false;

        std::system("cls");

scrolldialog("School finally ends.", 50);
waitforinput();

scrolldialog("Students quietly leave the classrooms.", 50);
waitforinput();

scrolldialog("Everyone feels controlled.", 70);
waitforinput();

scrolldialog("Lyra walks beside you silently.", 50);
waitforinput();

std::cout<<"Lyra: ";
scrolldialog("You really don't talk much, huh?", 50);
waitforinput();

std::cout<<"[1] I'm tired" << std::endl;
std::cout<<"[2] I just don't like people" << std::endl;
std::cout<<"[3] I don't know what to think anymore" << std::endl;

x = choiceinput(1,3);

if(x == 1){

    std::cout<<"Lyra: ";
    scrolldialog("Fair enough.", 50);
    waitforinput();

}

else if(x == 2){

    std::cout<<"Lyra: ";
    scrolldialog("Same.", 50);
    waitforinput();

    std::cout<<"Lyra: ";
    scrolldialog("Most people here are weird.", 50);
    waitforinput();

}

else if(x == 3){

    std::cout<<"Lyra: ";
    scrolldialog("Yeah...", 50);
    waitforinput();

    std::cout<<"Lyra: ";
    scrolldialog("I think everybody feels that way sometimes.", 50);
    waitforinput();

}

scrolldialog("The two of you walk through the underground streets.", 50);
waitforinput();

scrolldialog("Massive pipes line the ceiling above.", 50);
waitforinput();

scrolldialog("Cold white lights stretch endlessly into the distance.", 50);
waitforinput();

std::cout<<"Lyra: ";
scrolldialog("Can I ask something weird?", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("Sure.", 50);
waitforinput();

std::cout<<"Lyra: ";
scrolldialog("Do you ever feel like this city is pretending to be alive?", 50);
waitforinput();

scrolldialog("You immediately think about your brother.", 70);
waitforinput();

std::cout<<"You: ";
scrolldialog("Why would you say that?", 50);
waitforinput();

std::cout<<"Lyra: ";
scrolldialog("Because nobody actually feels real.", 50);
waitforinput();

std::cout<<"Lyra: ";
scrolldialog("It's like everybody already decided who they're supposed to be.", 50);
waitforinput();

scrolldialog("You stop walking.", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("My brother used to say things like that.", 50);
waitforinput();

scrolldialog("Lyra looks at you carefully.", 70);
waitforinput();

scrolldialog("Lyra goes silent.", 70);
waitforinput();

std::cout<<"Lyra: ";
scrolldialog("I'm sorry.", 50);
waitforinput();

scrolldialog("The city ventilation suddenly becomes louder.", 50);
waitforinput();

scrolldialog("A massive screen above the street activates.", 50);
waitforinput();

scrolldialog("\"EMOTIONAL STABILITY MAINTAINS HUMANITY\"", 40);
waitforinput();

std::cout<<"Lyra: ";
scrolldialog("See?", 50);
waitforinput();

std::cout<<"Lyra: ";
scrolldialog("Everything here sounds fake.", 50);
waitforinput();

scrolldialog("Suddenly...", 70);
waitforinput();

scrolldialog("The lights flicker.", 50);
waitforinput();

scrolldialog("People around you immediately stop walking.", 50);
waitforinput();

scrolldialog("Everyone goes silent.", 70);
waitforinput();

std::cout<<"You: ";
scrolldialog("What's happening?", 50);
waitforinput();

std::cout<<"Lyra: ";
scrolldialog("I don't know...", 50);
waitforinput();

scrolldialog("*THUNK*", 90);
waitforinput();

scrolldialog("A maintenance door nearby unlocks slightly.", 50);
waitforinput();

scrolldialog("The people around you completely ignore it.", 70);
waitforinput();

std::cout<<"Lyra: ";
scrolldialog("Did you see that?", 50);
waitforinput();

std::cout<<"[1] Open the door" << std::endl;
std::cout<<"[2] Ignore it and go home" << std::endl;

x = choiceinput(1,2);

if(x == 1){

    std::system("cls");

    scrolldialog("You slowly approach the maintenance door.", 50);
    waitforinput();

    scrolldialog("A cold stream of air escapes from inside.", 50);
    waitforinput();

    scrolldialog("You had never experienced wind before.", 70);
    waitforinput();

    std::cout<<"You: ";
    scrolldialog("What is this place?", 50);
    waitforinput();

    std::cout<<"Lyra: ";
    scrolldialog("I don't think we're supposed to know.", 50);
    waitforinput();

    scrolldialog("The dark corridor stretches downward.", 50);
    waitforinput();

    scrolldialog("Deep underground.", 70);
    waitforinput();

    scrolldialog("Somewhere far below the city.", 70);
    waitforinput();

    scrolldialog("You hear distant voices echoing from beneath.", 50);
    waitforinput();

    scrolldialog("Your adventure begins.", 90);
    waitforinputandclear();

    thirdpart();

}

else if(x == 2){

    std::system("cls");

    scrolldialog("You turn away from the door.", 50);
    waitforinput();

    scrolldialog("But before leaving...", 50);
    waitforinput();

    scrolldialog("You notice Lyra staring at it silently.", 70);
    waitforinput();

    std::cout<<"Lyra: ";
    scrolldialog("Don't you want to know what's down there?", 50);
    waitforinput();

    scrolldialog("You look back at the slightly opened door.", 50);
    waitforinput();

    scrolldialog("Your chest tightens.", 50);
    waitforinput();

    std::cout<<"[1] Go back to the door" << std::endl;

    x = choiceinput(1,1);

    std::system("cls");

    scrolldialog("You slowly walk back toward the darkness.", 50);
    waitforinput();

    scrolldialog("The maintenance corridor waits silently.", 50);
    waitforinput();

    scrolldialog("And somewhere below...", 70);
    waitforinput();

    scrolldialog("You hear distant voices echoing from beneath.", 90);
    waitforinputandclear();

    thirdpart();

}

    }

}

    }

}


//start function:
void start(){
    std::system("cls");

    scrolldialog("You wake up in a grey appartment", 50);
    waitforinput();

    scrolldialog("You hear footsteps", 50);

    std::this_thread::sleep_for(std::chrono::seconds(1));

    scrolldialog("Your mom enters the room", 50);
    waitforinput();

    std::cout << std::endl;
    std::cout<<"Mom: ";
    scrolldialog("Wake up", 50);
    waitforinput();

    scrolldialog("You'll be late.");
    waitforinputandclear();

    scrolldialog("You make your way to the kitchen.", 50);
    waitforinput();

    scrolldialog("The apartment kitchen smells like synthetic soup.", 50);
    waitforinput();

    scrolldialog("Your older brother is already sitting at the table.", 50);
    waitforinput();

    scrolldialog("He keeps tapping his fingers against the bowl.", 50);
    waitforinput();

    std::cout << std::endl;
    std::cout<<"Brother: ";
    scrolldialog("Do you think it hurts?", 50);
    waitforinput();

    std::cout<<"Mom: ";
    scrolldialog("No.", 50);
    waitforinput();

    std::cout<<"Mom: ";
    scrolldialog("Everybody gets the Link eventually.", 50);
    waitforinput();

    std::cout<<"Brother: ";
    scrolldialog("Yeah...", 50);
    waitforinput();

    std::cout << std::endl;
    scrolldialog("He doesn't sound convinced.", 50);
    waitforinput();

    std::cout << std::endl;
    std::cout<<"Brother: ";
    scrolldialog("Teacher said it helps people stay human.", 50);
    waitforinput();

    std::cout<<"Mom: ";
    scrolldialog("That's right.", 50);
    waitforinput();

    std::cout << std::endl;
    scrolldialog("Nobody talks after that.", 50);
    waitforinputandclear();

    scrolldialog("Hours later, you stand outside the implantation room.", 50);
    waitforinput();

    scrolldialog("White lights burn into your eyes.", 50);
    waitforinput();

    scrolldialog("The air smells sterile.", 50);
    waitforinput();

    scrolldialog("A quiet mechanical buzzing comes from behind the door.", 50);
    waitforinput();

    std::cout << std::endl;
    std::cout<<"Brother: ";
    scrolldialog("I'll be back soon.", 50);
    waitforinput();

    std::cout << std::endl;
    scrolldialog("The door closes behind him.", 50);
    waitforinput();

    scrolldialog("...", 300);
    waitforinput();

    scrolldialog("You wait.", 50);
    waitforinput();

    scrolldialog("And wait.", 50);
    waitforinput();

    scrolldialog("Finally, the door opens.", 50);
    waitforinput();

    scrolldialog("Your brother walks out.", 50);
    waitforinput();

    scrolldialog("Something feels different.", 50);
    waitforinput();

    scrolldialog("You don't know why.", 50);
    waitforinput();

    std::cout << std::endl;
    std::cout<<"Brother: ";
    scrolldialog("I'm okay.", 50);
    waitforinput();

    std::cout << std::endl;
    scrolldialog("But his voice sounds quieter now.", 50);
    waitforinputandclear();

    scrolldialog("That evening, your mother places something carefully onto the table.", 50);
    waitforinput();

    scrolldialog("Pudding.", 50);
    waitforinput();

    scrolldialog("Real pudding.", 50);
    waitforinput();

    scrolldialog("Your brother used to beg for it constantly.", 50);
    waitforinput();

    std::cout << std::endl;
    std::cout<<"Mom: ";
    scrolldialog("I saved it for today.", 50);
    waitforinput();

    std::cout<<"Brother: ";
    scrolldialog("Oh.", 50);
    waitforinput();

    std::cout<<"Brother: ";
    scrolldialog("Thanks.", 50);
    waitforinput();

    std::cout << std::endl;
    scrolldialog("You stare at him.", 50);
    waitforinput();

    std::cout << std::endl;
    std::cout<<"You: ";
    scrolldialog("That's it?", 50);
    waitforinput();

    std::cout<<"You: ";
    scrolldialog("You used to love pudding.", 50);
    waitforinput();

    std::cout<<"Brother: ";
    scrolldialog("No I didn't.", 50);
    waitforinput();

    std::cout<<"You: ";
    scrolldialog("What?", 50);
    waitforinput();

    std::cout<<"Brother: ";
    scrolldialog("I never liked pudding.", 50);
    waitforinput();

    std::cout << std::endl;
    scrolldialog("The room suddenly feels colder.", 50);
    waitforinput();

    std::cout << std::endl;
    std::cout<<"You: ";
    scrolldialog("You cried over pudding once.", 50);
    waitforinput();

    std::cout<<"Brother: ";
    scrolldialog("That never happened.", 50);
    waitforinput();

    std::cout << std::endl;
    scrolldialog("Your mother stops moving.", 50);
    waitforinput();

    std::cout << std::endl;
    std::cout<<"Mom: ";
    scrolldialog("Enough.", 50);
    waitforinput();

    std::cout << std::endl;
    scrolldialog("Nobody speaks after that.", 50);
    waitforinputandclear();

    scrolldialog("Late that night, you hear movement from your brother's room.", 50);
    waitforinput();

    scrolldialog("You quietly open the door.", 50);
    waitforinput();

    scrolldialog("Your brother sits on the floor beside his bed.", 50);
    waitforinput();

    scrolldialog("He's shaking.", 50);
    waitforinput();

    std::cout << std::endl;
    std::cout<<"You: ";
    scrolldialog("What's wrong?", 50);
    waitforinput();

    std::cout<<"Brother: ";
    scrolldialog("I...", 50);
    waitforinput();

    std::cout<<"Brother: ";
    scrolldialog("I think something's wrong with me.", 50);
    waitforinput();

    std::cout<<"You: ";
    scrolldialog("What do you mean?", 50);
    waitforinput();

    std::cout<<"Brother: ";
    scrolldialog("I can remember things...", 50);
    waitforinput();

    std::cout<<"Brother: ";
    scrolldialog("But they don't feel real anymore.", 50);
    waitforinput();

    std::cout<<"Brother: ";
    scrolldialog("It's like somebody replaced me.", 50);
    waitforinput();

    std::cout << std::endl;
    scrolldialog("Your chest tightens.", 50);
    waitforinput();

    scrolldialog("Suddenly, the apartment lights turn red.", 50);
    waitforinput();

    scrolldialog("WARNING: Behavioral instability detected.", 50);
    waitforinput();

    scrolldialog("WARNING: Behavioral instability detected.", 50);
    waitforinput();

    std::cout << std::endl;
    std::cout<<"You: ";
    scrolldialog("Mom?", 50);
    waitforinput();

    std::cout << std::endl;
    scrolldialog("Your mother stands frozen in the hallway.", 50);
    waitforinput();

    scrolldialog("Then comes knocking.", 50);
    waitforinput();

    scrolldialog("Three slow metallic knocks.", 50);
    waitforinput();

    std::cout << std::endl;
    std::cout<<"Brother: ";
    scrolldialog("No...", 50);
    waitforinput();

    std::cout<<"Brother: ";
    scrolldialog("Please...", 50);
    waitforinput();

    std::cout<<"Brother: ";
    scrolldialog("I don't want to disappear.", 50);
    waitforinput();

    std::cout << std::endl;
    scrolldialog("The door opens.", 50);
    waitforinput();

    scrolldialog("Black surveillance drones enter the apartment.", 50);
    waitforinput();

    scrolldialog("Cold blue lights scan the room.", 50);
    waitforinput();

    std::cout << std::endl;
    std::cout<<"Drone: ";
    scrolldialog("Citizen identified as unstable.", 50);
    waitforinput();

    std::cout<<"Drone: ";
    scrolldialog("Correction required.", 50);
    waitforinput();

    std::cout<<"You: ";
    scrolldialog("WAIT!", 50);
    waitforinput();

    std::cout << std::endl;
    scrolldialog("A deafening gunshot echoes through the apartment.", 50);
    waitforinput();

    scrolldialog("...", 500);
    waitforinput();

    scrolldialog("Your brother falls to the floor.", 50);
    waitforinput();

    scrolldialog("Nobody moves.", 50);
    waitforinput();

    scrolldialog("The drones leave silently.", 50);
    waitforinput();

    scrolldialog("Your mother slowly kneels beside the body.", 50);
    waitforinput();

    std::cout << std::endl;
    std::cout<<"Mom: ";
    scrolldialog("Please stop crying.", 50);
    waitforinput();

    std::cout<<"Mom: ";
    scrolldialog("People will hear us.", 50);
    waitforinputandclear();

scrolldialog("The apartment feels smaller now.", 50);
waitforinput();

scrolldialog("Your mother's eyes remain fixed on the floor.", 50);
waitforinput();

scrolldialog("She hasn't moved in several minutes.", 50);

bool investigating = true;

while(investigating){

std::cout << std::endl;
std::cout << "Talk to mom           [PRESS 1]" << std::endl;
std::cout << "Enter brother's room  [PRESS 2]" << std::endl;
std::cout << "Look outside window   [PRESS 3]" << std::endl;
std::cout << "Go back to your room  [PRESS 4]" << std::endl;

x = choiceinput(1,4);

if(x == 1){

    std::cout<<"You: ";
    scrolldialog("Why did they kill him?", 50);
    waitforinput();

    scrolldialog("Your mother stays silent.", 50);
    waitforinput();

    std::cout<<"You: ";
    scrolldialog("Mom?", 50);
    waitforinput();

    std::cout<<"Mom: ";
    scrolldialog("Do not ask dangerous questions.", 50);
    waitforinput();

    std::cout<<"Mom: ";
    scrolldialog("Please.", 50);
    waitforinputandclear();

}
else if(x == 2){

    std::system("cls");

    scrolldialog("Your brother's room feels empty.", 50);
    waitforinput();

    scrolldialog("The space game is still running.", 50);
    waitforinput();

    scrolldialog("Tiny stars move across the screen.", 50);
    waitforinput();

    bool roomsearch = true;

    while(roomsearch){

    std::cout << std::endl;
    std::cout << "Check desk          [PRESS 1]" << std::endl;
    std::cout << "Check bed           [PRESS 2]" << std::endl;
    std::cout << "Play space game     [PRESS 3]" << std::endl;
    std::cout << "Leave room          [PRESS 4]" << std::endl;

    x = choiceinput(1,4);

    if(x == 1){

        scrolldialog("You open the desk drawer.", 50);
        waitforinput();

        scrolldialog("Inside are old candy wrappers.", 50);
        waitforinput();

        scrolldialog("And a small tape recorder.", 50);
        waitforinput();

        std::cout<<"Play tape? [1 = YES / 2 = NO]" << std::endl;

        x = choiceinput(1,2);

        if(x == 1){

            scrolldialog("*static*", 70);
            waitforinput();

            std::cout<<"Brother's Voice: ";
            scrolldialog("If I ever change...", 50);
            waitforinput();

            std::cout<<"Brother's Voice: ";
            scrolldialog("I don't want to forget who I was.", 50);
            waitforinput();

            std::cout<<"Brother's Voice: ";
            scrolldialog("I really do love pudding.", 50);
            waitforinput();

            scrolldialog("The recording ends.", 50);
            waitforinput();

            scrolldialog("Your chest hurts.", 50);
            waitforinputandclear();

        }

    }
    else if(x == 2){

        scrolldialog("You sit beside the bed.", 50);
        waitforinput();

        scrolldialog("The blanket still feels warm.", 50);
        waitforinput();

        scrolldialog("You suddenly begin crying again.", 50);
        waitforinputandclear();

    }
    else if(x == 3){

        scrolldialog("You pick up the controller.", 50);
        waitforinput();

        scrolldialog("The game asks:", 50);
        waitforinput();

        scrolldialog("'DO YOU WISH TO LEAVE EARTH?'", 50);
        waitforinput();

        scrolldialog("You immediately turn the game off.", 50);
        waitforinputandclear();

    }
    else if(x == 4){

        roomsearch = false;

    }

    }

}
else if(x == 3){

    std::system("cls");

    scrolldialog("You stare outside the apartment window.", 50);
    waitforinput();

    scrolldialog("Thousands of people walk through the underground streets.", 50);
    waitforinput();

    scrolldialog("Nobody looks afraid, angry, nor sad.", 50);
    waitforinput();

    scrolldialog("It's like nothing happened.", 50);
    waitforinputandclear();

}
else if(x == 4){

    investigating = false;

}

}

scrolldialog("That night, you cannot sleep.", 50);
waitforinput();

scrolldialog("Your brother's final words repeat endlessly in your head.", 50);
waitforinput();

std::cout << std::endl;

std::cout<<"Brother: ";
scrolldialog("I don't want to disappear.", 50);
waitforinput();

std::cout << std::endl;
scrolldialog("You suddenly sit up.", 50);
waitforinput();

scrolldialog("The tape recorder.", 50);
waitforinput();

scrolldialog("You left it inside his room.", 50);
waitforinput();

scrolldialog("You quietly leave your bed.", 50);
waitforinput();

scrolldialog("But when you enter the hallway...", 50);
waitforinput();

scrolldialog("Your mother is already standing there.", 50);
waitforinput();

std::cout << std::endl;
std::cout<<"Mom: ";
scrolldialog("You should be asleep.", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("I can't.", 50);
waitforinput();

std::cout << std::endl;
scrolldialog("Your mother avoids looking at your brother's room.", 50);
waitforinput();

std::cout << std::endl;
std::cout<<"You: ";
scrolldialog("Why did they kill him?", 50);
waitforinput();

std::cout << std::endl;
scrolldialog("Silence fills the hallway.", 70);
waitforinput();

std::cout << std::endl;
std::cout<<"Mom: ";
scrolldialog("He became unstable.", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("Everybody keeps saying that.", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("What does it even mean?", 50);
waitforinput();

std::cout << std::endl;
scrolldialog("Your mother leans against the wall.", 50);
waitforinput();

std::cout << std::endl;
std::cout<<"Mom: ";
scrolldialog("Long ago...", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("People weren't like this.", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("Like what?", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("Calm.", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("Humanity used to fight over everything.", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("Food. Resources. Beliefs.", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("Even after moving underground, people kept hurting each other.", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("So the Link fixes people?", 50);
waitforinput();

std::cout << std::endl;
scrolldialog("Your mother hesitates.", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("It helps people live together.", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("My brother wasn't dangerous.", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("I know.", 50);
waitforinput();

std::cout << std::endl;
scrolldialog("For the first time all night, your mother sounds tired instead of afraid.", 50);
waitforinput();

std::cout << std::endl;
std::cout<<"You: ";
scrolldialog("Then why didn't you stop them?", 50);
waitforinput();

std::cout << std::endl;
scrolldialog("The question escapes before you can regret it.", 50);
waitforinput();

scrolldialog("Your mother's hands tremble slightly.", 50);
waitforinput();

std::cout << std::endl;
std::cout<<"Mom: ";
scrolldialog("Because I was scared.", 50);
waitforinput();

std::cout << std::endl;
scrolldialog("You stare at her.", 50);
waitforinput();

std::cout << std::endl;
std::cout<<"Mom: ";
scrolldialog("You don't understand this city yet.", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("People here survive by staying quiet.", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("That's not surviving.", 50);
waitforinput();

std::cout << std::endl;
scrolldialog("Your mother almost smiles.", 50);
waitforinput();

std::cout << std::endl;
std::cout<<"Mom: ";
scrolldialog("Your brother used to say things like that.", 50);
waitforinput();

std::cout << std::endl;
scrolldialog("A low mechanical hum echoes outside the apartment.", 50);
waitforinput();

scrolldialog("Your mother's expression immediately changes.", 50);
waitforinput();

std::cout << std::endl;
std::cout<<"Mom: ";
scrolldialog("Do you know why people obey the city?", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("Because they're scared?", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("No.", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("Because people remember what happened before.", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("Before what?", 50);
waitforinput();

std::cout << std::endl;
scrolldialog("Your mother goes silent.", 70);
waitforinput();

std::cout << std::endl;
std::cout<<"Mom: ";
scrolldialog("Before the city became stable.", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("What does that mean?", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("It means people stopped dying every day.", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("Then why does this place feel so empty?", 50);
waitforinput();

std::cout << std::endl;
scrolldialog("Your mother looks genuinely surprised.", 50);
waitforinput();

std::cout << std::endl;
std::cout<<"Mom: ";
scrolldialog("Empty?", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("Nobody laughs, nor they get angry, everything feels fake!", 50);
waitforinput();

std::cout << std::endl;
scrolldialog("Your mother struggles to answer.", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("Maybe that's the price.", 50);
waitforinput();

std::cout << std::endl;
scrolldialog("The hallway suddenly feels colder.", 50);
waitforinput();

std::cout << std::endl;
std::cout<<"Mom: ";
scrolldialog("Go to sleep.", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("And tomorrow...", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("Don't mention your brother at school.", 50);
waitforinput();

std::cout<<"You: ";
scrolldialog("Why?", 50);
waitforinput();

std::cout<<"Mom: ";
scrolldialog("Because this city forgets people very quickly.", 50);
waitforinputandclear();

std::cout << std::endl;
scrolldialog("Your mother walks back toward her room.", 50);
waitforinput();

scrolldialog("The apartment becomes silent again.", 50);
waitforinput();

scrolldialog("You glance toward your brother's closed door.", 50);
waitforinput();

// EXPLORATION SECTION

bool exploring = true;

while(exploring){

    std::system("cls");

    std::cout << "========= Apartment =========" << std::endl;
    std::cout << "Enter your brother's room          [PRESS 1]" << std::endl;
    std::cout << "Look outside the hallway window    [PRESS 2]" << std::endl;
    std::cout << "Visit the downstairs storage room  [PRESS 3]" << std::endl;
    std::cout << "Go to sleep                        [PRESS 4]" << std::endl;

    x = choiceinput(1,4);

    // BROTHER ROOM
    if(x == 1){

        std::system("cls");

        scrolldialog("You slowly open your brother's door.", 50);
        waitforinput();

        scrolldialog("The room smells faintly of dust and detergent.", 50);
        waitforinput();

        scrolldialog("Everything is perfectly organized.", 50);
        waitforinput();

        scrolldialog("Too organized.", 70);
        waitforinput();

        scrolldialog("His desk screen still glows softly.", 50);
        waitforinput();

        std::cout << "[1] Check the desk" << std::endl;
        std::cout << "[2] Look under the bed" << std::endl;

        x = choiceinput(1,2);

        // CHECK DESK
        if(x == 1){

            std::system("cls");

            scrolldialog("You move the mouse slightly.", 50);
            waitforinput();

            scrolldialog("A paused space exploration game appears.", 50);
            waitforinput();

            scrolldialog("Your chest tightens.", 50);
            waitforinput();

            scrolldialog("The save file name reads:", 50);
            waitforinput();

            scrolldialog("'SEE_THE_REAL_SKY'", 90);
            waitforinput();

            scrolldialog("You stare silently at the screen.", 50);
            waitforinput();

        }

        // UNDER BED
        else if(x == 2){

            std::system("cls");

            scrolldialog("You kneel beside the bed.", 50);
            waitforinput();

            scrolldialog("Your hand touches something metallic.", 50);
            waitforinput();

            scrolldialog("An old voice recorder.", 50);
            waitforinput();

            scrolldialog("Its battery is nearly dead.", 50);
            waitforinput();

            std::cout << "[PLAY RECORDING?]" << std::endl;
            std::cout << "[1] Yes" << std::endl;
            std::cout << "[2] No" << std::endl;

            x = choiceinput(1,2);

            if(x == 1){

                std::system("cls");

                scrolldialog("*static crackles*", 70);
                waitforinput();

                scrolldialog("Brother: I think something is wrong with everyone.", 50);
                waitforinput();

                scrolldialog("Brother: They smile at the right times...", 50);
                waitforinput();

                scrolldialog("Brother: But it feels empty.", 50);
                waitforinput();

                scrolldialog("*loud interference*", 70);
                waitforinput();

                scrolldialog("Brother: If you're hearing this...", 50);
                waitforinput();

                scrolldialog("Brother: Don't trust—", 70);
                waitforinput();

                scrolldialog("*recording corrupted*", 90);
                waitforinput();

            }

        }

    }

    // WINDOW
    else if(x == 2){

        std::system("cls");

        scrolldialog("You walk into the hallway.", 50);
        waitforinput();

        scrolldialog("The apartment tower is unnaturally quiet.", 50);
        waitforinput();

        scrolldialog("Below, hundreds of windows glow with the same pale light.", 50);
        waitforinput();

        scrolldialog("No music.", 50);
        waitforinput();

        scrolldialog("No arguments.", 50);
        waitforinput();

        scrolldialog("No laughter.", 50);
        waitforinput();

        scrolldialog("Only silence.", 90);
        waitforinput();

        scrolldialog("Far above the city ceiling, massive ventilation machines hum endlessly.", 50);
        waitforinput();

        scrolldialog("For a moment...", 50);
        waitforinput();

        scrolldialog("You wonder what the real sky looks like.", 70);
        waitforinput();

    }

    // STORAGE ROOM
    else if(x == 3){

        std::system("cls");

        scrolldialog("You quietly descend the apartment stairs.", 50);
        waitforinput();

        scrolldialog("The lower levels smell old and damp.", 50);
        waitforinput();

        scrolldialog("Most people avoid the storage floor.", 50);
        waitforinput();

        scrolldialog("The lights flicker weakly.", 50);
        waitforinput();

        scrolldialog("As you walk past old containers...", 50);
        waitforinput();

        scrolldialog("...you hear voices.", 70);
        waitforinput();

        std::cout << "[1] Listen closer" << std::endl;
        std::cout << "[2] Leave quietly" << std::endl;

        x = choiceinput(1,2);

        // LISTEN
        if(x == 1){

            std::system("cls");

            scrolldialog("You slowly move closer to the voices.", 50);
            waitforinput();

            scrolldialog("Man: ...he started asking questions.", 50);
            waitforinput();

            scrolldialog("Woman: Then he's already in danger.", 50);
            waitforinput();

            scrolldialog("Man: We should bring him to the tunnels.", 50);
            waitforinput();

            scrolldialog("*metal creaks loudly beneath your foot*", 70);
            waitforinput();

            scrolldialog("Silence.", 90);
            waitforinput();

            scrolldialog("The voices stop immediately.", 50);
            waitforinput();

            scrolldialog("You run back upstairs before anyone sees you.", 50);
            waitforinput();

        }

        // LEAVE
        else if(x == 2){

            std::system("cls");

            scrolldialog("Something about the voices makes you uncomfortable.", 50);
            waitforinput();

            scrolldialog("You quietly return upstairs.", 50);
            waitforinput();

            scrolldialog("However you did hear something about a tunnel", 50);
            waitforinput();

        }

    }

    // SLEEP
    else if(x == 4){

        std::system("cls");

        scrolldialog("You return to your room.", 50);
        waitforinput();

        scrolldialog("The ventilation machines continue humming above the city.", 50);
        waitforinput();

        scrolldialog("You close your eyes.", 50);
        waitforinput();

        scrolldialog("But sleep does not come easily.", 70);
        waitforinputandclear();

        exploring = false;
        secondpart();
        
    }
    

}

}

//Main menu:
void mainmenu(){
    std::system("cls");
    scrolldialog("Humanty survived by going underground.", 50);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    scrolldialog("That is what everyone was tought.", 50);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    scrolldialog("At age six, every child recives the link.", 50);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    bool keeprunning = true;

    while(keeprunning){
    std::system("cls");
    std::cout << "============= Main Menu =============" << std::endl;
    std::cout << "Start   [PRESS 1]" << std::endl;
    std::cout << "Credits [PRESS 2]" << std::endl;
    std::cout << "Exit    [PRESS 3]" << std::endl;

    x = choiceinput(1,3);

    if(x == 1){
        start();
    } else if(x == 2){
        credits();
        x = 0;
    } else if(x == 3){
        exit();
        keeprunning = false;
    } 

}
}

//main code:
int main() {
    mainmenu();

    return 0;
}
