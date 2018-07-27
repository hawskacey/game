// Kacey Haws -- Final Project
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
using namespace std;
void myMenu();
int scoreTime();
int randomm();

string yourName, Kvothe, Auri, Denna, pAgain;
int choice, direction1Kvo, dec1Kvo, dec2Kvo, dec3Kvo, fKvo1, direction1Aur, direction2Aur, dec1Aur;

int msleep(unsigned long milisec)
{
    struct timespec req={0};
    time_t sec=(int)(milisec/1000);
    milisec=milisec-(sec*1000);
    req.tv_sec=sec;
    req.tv_nsec=milisec*1000000L;
    while(nanosleep(&req,&req)==-1)
        continue;
    return 1;
}

int main ()
{
owo:
    myMenu(); // runs the menu
    if(choice == 1)
    {
        goto kvothe;
    }
    else if(choice == 2)
    {
        goto auri;
    }
    else if(choice == 3)
    {
        goto denna;
    }

kvothe:
    while (choice == 1) {
        if(choice == 1){ // runs kvothe's main code
        cout << " Welcome to the University. "<< endl;
        msleep(2500);
        cout << " " << yourName << " is now known as KVOTHE. " << endl << endl;
        msleep(3000);
        cout << " You walk into the University's courtyard. " << endl << endl;
        msleep(3000);
        owu:
        cout << " Which direction do you look? " << endl << endl;
        msleep(3000);
        cout << " 1. Left " << endl;
         msleep(1000);
        cout << " 2. Right " << endl;
        cin >> direction1Kvo;
        msleep(1000);
        
        if (direction1Kvo == 1) // runs what would happen if you chose the first direction
        {
            cout << " You see the Archives looming before you. " << endl << endl;
            msleep(3500);
            cout << " You enter the Archives. What do you do?" << endl << endl;
            msleep(3000);
            cout << " 1. Venture into the Stacks. " << endl;
             msleep(1000);
            cout << " 2. Walk away. " << endl << endl;
            cin >> dec1Kvo;
            msleep(1000);
            
            if (dec1Kvo == 1) // runs the outcome of choosing the first decision
            {
                cout << " You wander into the Stacks. " << endl << endl;
                msleep(2000);
                cout << " You see the four-plated door. Would you like to go through it? " << endl << endl;
                msleep(3000);
                cout << " 1. Yes " << endl;
                msleep(1000);
                cout << " 2. No " << endl;
                cin >> dec3Kvo;
                msleep(1000);
                
                if (dec3Kvo == 1) // runs the outcome of choosing the first decision
                {
                    cout << " It is locked. In frustration, you walk back into the courtyard." << endl;
                    msleep(3000);
                }
                if (dec3Kvo == 2) // runs the outcome of choosing the second decision
                {
                    cout << " You are tired of being in the Stacks. It is time to leave. " << endl;
                    msleep(2000);
                }
            }
            else // runs the outcome of choosing the second decision
            {
                cout << " You walk back into the courtyard. " << endl << endl;
                msleep(4000);
            }
        }
        if (direction1Kvo == 2) // runs the outcome of the second direction
        {
            cout << " You see Ambrose attempting to impress a random girl. You would rather not walk towards him. " << endl << endl;
            msleep(2500);
            goto owu;
        }
        
        cout << " You turn and see Simmon, your best friend, walking towards you. " << endl << endl;
        msleep(3000);
        cout << " Simmon: 'Hey, Kvothe, where are you headed?' " << endl << endl;
        msleep(3000);
            cout << " Choose your response:" << endl << endl;
            cout << " You: " << endl;
        msleep(2000);
            cout << " 1. 'I was just planning to go to the Fishery and get a few supplies.' " << endl;;
        msleep(2000);
        cout << " 2. 'Nowhere in particular, why?' " << endl << endl;
        msleep(3000);
        cin >> dec2Kvo;
        msleep(2000);
        if (dec2Kvo == 1)
        {
            cout << " Simmon: 'Nah, Kvothe, you can do that later.' " << endl;
            msleep(3000);
        }
            cout << " Simmon : 'The boys and I were planning to go to the Eolian later tonight. I was thinking you could bring your lute for us.' " << endl << endl;
            msleep(5000);
        }
        cout << " You: 'Sure, Simmon, I'd love to. It would take my mind off of studying. I hope my tuition is low this year.' " << endl;
        msleep(3500);
        cout << " You check your money purse. You only have 1 talent and 3 jots. " <<endl << endl;
        msleep(3500);
        cout << "-------------- THREE HOURS LATER --------------" << endl << endl;
        msleep(4000);
        cout << " After playing Tinker Tanner a few times, it's time to leave the Eolian. You are a little disappointed that Denna was nowhere to be seen. However, your mind is preoccupied with your balance. You have earned 5 more jots at the Eolian, and you are up to 1 talent and 8 jots." << endl << endl;
        msleep(7500);
        cout << " It is time to visit a good friend. " << endl << endl;
        msleep(4000);
        cout << " You walk to Devi's place. " << endl << endl;
        msleep(2000);
        cout << " The door to her shop is uncharacteristically open, and you carefully step in. You see books spread out onto the floor, and finally, you spot Devi crouched in the corner. " << endl;
        msleep(5000);
        cout << " She looks up at you maniacally. You back away slowly, stepping onto volumes and striking tables with your back. " << endl << endl;
        msleep(4000);
        cout << " Devi stands up, and with a flick of her wrist, the entrance to her shop closes. " << endl;
        msleep(3000);
        cout << " Devi: 'Kvothe. I must know how to get into the Archives. I know that there is a secret way. Tell me.'" << endl;
        msleep(2500);
        cout << " You: 'I can't. I've already told you, I can't.' " << endl << endl;
        msleep(2000);
        cout << " Devi considers you with a deranged smile on her face." << endl;
        msleep(1500);
        cout << " Devi: 'And I told you I'm getting in one way or another. I suppose it's time to find out.' " << endl;
        msleep(2000);
        cout << " Devi pulls out a dagger. You expertly pull Caesura from your side. " << endl << endl;
        msleep(3000);
        cout << " Within seconds, the two blades strike each other with great force, throwing off your balance. " << endl << endl;
        msleep(3000);
        cout << " Devi laughs at you and readys her dagger to strike you. You parry her blade deftly. " << endl;
        msleep(3000);
        cout << " You push yourself off the floor and back away. You see a broken piece of the table lying next to your foot. " << endl;
        msleep(3000);
        cout << " You quickly bind the wood and the burning fire together, burning Devi's hand, which was rested on the table. " << endl;
        msleep(3000);
        cout << " Her dagger clatters to the floor, and you pick it up and throw it to the side in one swift motion, leaving her defenseless.  " << endl << endl;
        msleep(3000);
        cout << " You: 'I don't want to fight you, Devi. You already know I can't give you the entrance to the Archives.' " << endl << endl;
        msleep(3000);
        cout << " Devi takes a deep breath and looks up at you. " << endl;
        msleep(2000);
        cout << " Devi: 'If not through you, I'll find someone else to pry it out of.' " << endl << endl;
        msleep(3000);
        cout << " You know full well that you and Auri are the only ones who know of the secret access to the library. You say nothing and leave the gaelet's shop without the payment. You head to Anker's to hopefully get a little coin out of the patrons. " << endl;
        msleep(5000);
        cout << " With Cendling coming upon you, and with it the tuition process, you can't help but feel a little stressed out. However, the day's events proves you'll have to earn your money somewhere else. " << endl << endl;;
        msleep(5000);
        cout << "-------------- FOUR HOURS LATER --------------" << endl << endl;
        msleep(3000);
        cout << " After earning 9 jots playing at Anker's, you feel happier knowing the weight of your coin purse is only growing heavier. " << endl << endl;
        msleep(4000);
        cout << " However, across town, at a shop filled with books and bottles of customer's blood, Devi grins at the person sitting across from her." << endl;
        msleep(3000);
        cout << " Devi: 'Let's get started then. You say you know of a private entry into these... what did you call it again?' " << endl;
        msleep(5000);
        cout << " Ambrose: 'I believe I called it the Archives.'" << endl << endl;
        msleep(6000);
        cout << " Would you like to play again? If you say yes, your score for this playthrough will not be displayed. [Y or N] "<< endl;
        cin >> pAgain;
        if (pAgain == "Y" || pAgain == "y")
        {
            goto owo;
        }
        else
        {
            scoreTime();
            return 0;
        }}
    return 0;
auri:
    while (choice == 2){
        if(choice == 2) { // runs auri's main code
            cout << " Welcome to the Underthing. " << endl;
            msleep(2500);
            cout << " " << yourName << " is now known as AURI. " << endl << endl;
            msleep(3000);
            cout << " You wake up on a mattress in a familiar location. You are in Mantle." << endl;
            msleep(3000);
            cout << " You get up, brush your hair, and grab your light. His name is Foxen. " << endl << endl;
            msleep(3500);
            cout << " Today is a white day. A finding day. " << endl << endl;
            msleep(3000);
            cout << " You run through the tunnels, passing locked doors and shadowy corners. " << endl;
            msleep(3500);
        uwu:
            cout << " You come across a split in the hallways. Which way would you like to go? " << endl << endl;
            msleep(2000);
            cout << " 1. Left" << endl;
            msleep(1000);
            cout << " 2. Right" << endl;
            cin >> direction1Aur;
            if(direction1Aur == 1)
            {
                cout << " You come across a door. He does not look very inviting. You turn back the way you came. " << endl;
                msleep(2000);
                goto uwu;
            }
            else if(direction1Aur == 2)
            {
                cout << " You turn the corner into another hallway. You trace the path of the pipes with your fingers until they stop. " << endl;
                msleep(3000);
                cout << " You have reached another split. Which way would you like to go? " << endl << endl;
                msleep(2000);
                cout << " 1. Left" << endl;
                msleep(1000);
                cout << " 2. Right" << endl;
                cin >> direction2Aur;
                if(direction2Aur == 1)
                {
                    cout << " You exit into Twelve. You dive into the waters and discover an Amyr figure and a shiny piece of metal. " << endl << endl;;
                    msleep(3000);
                }
                if(direction2Aur == 2)
                {
                    cout << " You exit into Rubric. Along the shelves, you discover an Amyr figure and a shiny piece of metal. " << endl << endl;;
                    msleep(3000);
                }
                cout << " Movement catches your eye. Nothing ever comes through the Underthing other than you." << endl << endl;;
                msleep(3000);
                cout << " You race towards the shadow. Your feet take you through Billows and the Woods and Vaults. " << endl;
                msleep(3500);
                cout << " Finally you spot the source of the silhouette. It looks to be a pale young woman. " << endl << endl;
                msleep(3500);
                cout << " She turns around. She appears to be very confused. " << endl;
                msleep(2000);
                cout << " Mola: 'Oh, thank God! I haven't been able to find my way out of here! Can you help me?'" << endl << endl;
                msleep(3500);
                cout << " Kvothe introduced Mola to you. You know you can trust her. " << endl;
                msleep(3000);
                cout << " You: 'I can help you.' " << endl << endl;
                msleep(2000);
                cout << " The two of you navigate to Throughbottom's entrance. " << endl;
                msleep(3000);
                cout << " You lead her through Annulet, Port, Wains, and Tree." << endl << endl;
                msleep(3000);
                cout << " Whilst walking into Cricklet, her eyes drift from the trickling water on the wall to Foxen. " << endl;
                msleep(3500);
                cout << " She notices the crack in his dish. " << endl;
                msleep(2000);
                cout << " Mola: 'I can fix that crack in your light, if you'd like.'" << endl << endl;
                msleep(3000);
                cout << " You: 'Okay.' " << endl << endl;
                msleep(3000);
                cout << " The two of you stop under a grate in the street above, causing light to pour down into the secluded tunnels." << endl << endl;
                msleep(3000);
                cout << " You and Mola crouch down. You slowly pass Foxen to her. " << endl;
                msleep(2500);
                cout << " She handles his dish with care, avoiding the large fissure threatening to let him fall to the concrete below." << endl;
                msleep(3000);
                cout << " She takes a deep breath. " << endl << endl;
                msleep(2000);
                cout << " Mola: 'I've healed people before, and repaired objects. But this? Whatever this is, I've never dealt with anything like this.'" << endl;
                msleep(6000);
                cout << " Mola: 'Here goes.'" << endl << endl;
                msleep(2500);
                cout << " Her brow furrows in frustration." << endl;
                msleep(2000);
                cout << " Mola: 'I need metal. A small sheet, anything.'" << endl;
                msleep(3000);
                cout << " You think back to the piece of metal you acquired earlier. Would you like to give it to her? " << endl << endl;
                msleep(3000);
                cout << " 1. Yes " << endl;
                msleep(1000);
                cout << " 2. No " << endl << endl;
                cin >> dec1Aur;
                msleep(2000);
                if(dec1Aur == 1)
                {
                    cout << " You pass her the sheet wordlessly. " << endl;
                    msleep(2500);
                    cout << " Mola: 'Thank you, Auri.'" << endl << endl;
                    msleep(2000);
                }
                else if (dec1Aur == 2)
                {
                    cout << " She stands up, searching the room for any kind of metal. She discovers a small pipe." << endl;
                    msleep(3000);
                    cout << " Mola: 'This'll do.'" << endl;
                    msleep(1500);
                }
                cout << " She sets to work creating runes and whispering bindings." << endl << endl;
                msleep(3000);
                cout << " Within minutes, Foxen's dish was good as new, any trace of the crack completely gone. " << endl;
                msleep(3000);
                cout << " She smiles and hands you back your trusty light." << endl;
                msleep(2500);
                cout << " Mola: 'Well, I suppose we should get going. I have a meeting with Master Arwyl soon.' " << endl << endl;
                msleep(3000);
                cout << " The two of you travel through Bakery, Clinks, and Taps until you finally reach a ladder leading up to a grate." << endl;
                msleep(4000);
                cout << " You: 'This should get us right next to the Medica.'" << endl;
                msleep(3000);
                cout << " Mola: 'Thank you, Auri. I'd probably be stuck here if not for you.'" << endl;
                msleep(2500);
                cout << " You smile as she turns to climb the ladder. You put your hands in your pockets and find the Amyr figure you discovered earlier." << endl << endl;
                msleep(4000);
                cout << " You: 'Wait!'" << endl;
                msleep(1500);
                cout << " Mola: 'What?'" << endl << endl;
                msleep(1500);
                cout << " You hold out the Amyr toy to her. She has a confused look on her face." << endl;
                msleep(2500);
                cout << " You: 'Can you give this to him? I don't know the next time I'm going to see him.'" << endl << endl;
                msleep(3500);
                cout << " She smiles knowingly." << endl;
                msleep(2000);
                cout << " Mola: 'Kvothe will appreciate this, Auri. And I'm sure he'll come visit you soon. As will I.'" << endl << endl;
                msleep(3000);
                cout << " You smile softly as she disappears past the grate." << endl;
                msleep(2500);
                cout << " Today was a finding day. You expected to find things. Instead, you found a friend. You suppose that is more valuable." << endl << endl;
                msleep(3500);
                cout << " Would you like to play again? If you say yes, your score for this playthrough will not be displayed. [Y or N] "<< endl;
                cin >> pAgain;
                if (pAgain == "Y" || pAgain == "y")
                {
                    goto owo;
                }
                else
                {
                    scoreTime();
                    return 0;
                }
            }
        }}
denna:
    while (choice == 3 ) {
        if(choice == 3) { // runs denna's main code
        cout << " You've chosen the secret option, Denna! " << endl;
        msleep(2500);
        cout << " Sadly, Denna is currently unavailable to play. Try again later. " << endl << endl;
        msleep(3000);
        }
    if (choice != 3)
    {
        return 0;
    }
    }}
    
void myMenu() // a function for the menu because it's pretty long ig
{
    cout << " What is your name? ";
    cin >> yourName;
    if(yourName == "Kvothe" || yourName == "Auri" || yourName == "Denna" || yourName == "Abenthy" || yourName == "kvothe" || yourName == "auri" || yourName == "denna" || yourName == "abenthy" || yourName == "KVOTHE" || yourName == "AURI" || yourName == "DENNA" || yourName == "ABENTHY")
    {
        msleep(1000);
        cout << " Good one. " << endl;
        msleep(2000);
    }
    else if(yourName == "OwO" || yourName == "UwU" || yourName == "OWO" || yourName == "UWU" || yourName == "owo" || yourName == "uwu")
    {
        msleep(1000);
        cout << " You actual weeb." << endl << endl;
        msleep(2000);
    }
    else
    msleep(1000);
    cout << " Hello, " << yourName << "." << endl << endl;
    msleep(1000);
    cout << " Welcome to The Kingkiller Chronicles: the Text Adventure Simulation. This game is primarily for readers of the Kingkiller Chronicles series by Patrick Rothfuss, as characters and their backstories are not explained.  " << endl << endl;
    msleep(5000);
    cout << " If you would like to read these novels, I recommend you read them in chronological order, which is as follows: " << endl;
    msleep(3000);
    cout << " 1. The Name of the Wind" << endl;
    msleep(1500);
    cout << " 2. The Wise Man's Fear" << endl;
    msleep(1500);
    cout << " 2.5. The Slow Regard of Silent Things" << endl << endl;
    msleep(3500);
    cout << " CHOOSE YOUR CHARACTER : " << endl << endl;
    msleep(2500);
    cout << " 1. K V O T H E " << endl;
    msleep(1000);
    cout << " 2. A U R I " << endl << endl;
    msleep(1000);
    cout << " Please enter the number corresponding to the character you choose. " << endl << endl;
    cin >> choice;
    msleep(1000);
    }


int scoreTime()
{
    int score = rand();
    cout << " Thanks for playing!" << endl;
    msleep(2000);
    cout << " Your score was " << score << ". If you want to play again, please start the program." << endl << endl;
    msleep(3000);
    return 0;
}

int randomm()
{
    
    srand(time_t(NULL));
    int random = rand() % 10000;
    
    return random;
}
