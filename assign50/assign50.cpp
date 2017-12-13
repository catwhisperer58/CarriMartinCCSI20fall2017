#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

/*Written and created by Carri Martin
Date: December 6, 2017
Asignment 5.0 - Video Game Ratings

My goal is to be able to generate a list of my video games by their rating, as retrieved from my text file.
*/

class GameRatings { //Class name GameRatings
   public: //May be accessed out of the class
   
   void SetDefinition(string game_rating_definition); //Mutator to set the definition of each rating
   void SetRating(char video_game_rating); //Mutator to set the game type (adventure, RPG, etc)
   
   string GetDefinition() const; //Accessor for rating definition
   char GetRating() const; //Accessor for game type
  
   void Print(); //Printing
   
   private:
   
   string rating_definition; //Private string variable
   char game_rating; //Private string variable

};

void GameRatings::SetDefinition(string game_rating_definition) { //Function to set game name
    rating_definition = game_rating_definition;
    
    return;
}

void GameRatings::SetRating(char video_game_rating) { //Function to set game type
    game_rating = video_game_rating;
    
    return;
}

void GameRatings::Print() { //Print function
    cout<<game_rating<<" - "<<rating_definition<<endl;
    
    return;
}

string GameRatings::GetDefinition() const {
    return rating_definition;
}

char GameRatings::GetRating() const {
    return game_rating;
}



int main() { //Entry point for the code execution

   ifstream games; //Input file streams
   
   
   GameRatings game_ratings[5]; //User created object of type GameRatings
   string video_game_platform; //To retrieve the name of different gaming systems on my list
   string video_game_name; //To retrieve different game names
   char video_game_rating[5]; //Used to retrieve game ratings from text file
   int max_players; //To retrieve the maximum number of players that can play
   
   int i = 0;
   
      games.open("videogame.txt"); //Used to open my file
      if (!games.is_open()) { //Instruction to print out in case of error and file doesn't run
      cout << "Could not open file videogame.txt." << endl;
      return 1; // 1 indicates error
}
 if (games.is_open()) {
     
cout<<"My text file list of video games, listed by game name, game system company, ESRB rating, and maximum number of players."<<endl; //Explanation output
cout<<endl;

  while (games >> video_game_name) { //Loop to output my text file information.
  
  getline(games, video_game_name);
  getline(games, video_game_platform);
  games>>video_game_rating;
  games>>max_players;
  


cout<<video_game_name<<" "<<video_game_platform<<" "<<video_game_rating<<" "<<max_players<<endl;
 
}
games.close();

}
cout<<endl;
cout<<endl;

cout<<"The following is 3 of the video game ratings from the ESRB rating system for video games: "<<endl; //Explanation of what is being called

game_ratings[0].SetRating('E'); //Calling the class GetRating
game_ratings[0].SetDefinition("For Everyone"); //Calling the class GetDefinition
game_ratings[0].Print(); //Printing info called from the class for 'E' rating

game_ratings[1].SetRating('T'); //Calling the class GetRating
game_ratings[1].SetDefinition("For Teens, 13 and up"); //Calling the class GetDefinition
game_ratings[1].Print(); //Printing info called from the class for 'T' rating

game_ratings[2].SetRating('M'); //Calling the class GetRating
game_ratings[2].SetDefinition("For Mature, 17+"); //Calling the class GetDefinition
game_ratings[2].Print(); //Printing info called from the class for 'M' rating
cout<<endl;

   video_game_rating[0] = 'E'; //Initialize video_game_rating
   video_game_rating[1] = 'T';
   video_game_rating[2] = 'M';
   
        games.open("videogame.txt"); //Used to open my file
      if (!games.is_open()) { //Instruction to print out in case of error and file doesn't run
      cout << "Could not open file videogame.txt." << endl;
      return 1; // 1 indicates error
   

games >> video_game_rating; //Call all 'E' ratings
   
    
       if (video_game_rating[i] == 'E') {
           for (i = 0; i < 99; ++i){ //Loop to call all of games with an 'E' rating
       
         cout<<"          "<<video_game_rating[0]<<"          "<<endl;
         cout<<video_game_name<<" "<<video_game_platform<<" "<<max_players; //Output games listed under 'E' rating
}
}
}
   else if (i = video_game_rating[i] == 'T') {
    
         cout<<"          "<<video_game_rating[i]<<"          "<<endl;          
         cout<<video_game_name<<" "<<video_game_platform<<" "<<max_players; //Output games listed under 'T' rating

}
   else { i = video_game_rating[i] == 'M';
    
         cout<<"          "<<video_game_rating[i]<<"          "<<endl;
         cout<<video_game_name<<" "<<video_game_platform<<" "<<max_players; //Output games listed under 'M' rating



}

 return 0;
  
} 
 
/*I almost got it to run like I wanted, but I'm stuck on retrieving all of the games from my text file.

Running /home/ubuntu/workspace/assign50/assign50.cpp
My text file list of video games, listed by game name, game system company, ESRB rating, and maximum number of players.

 Windwaker Nintendo E 1
 Go Cart Nintendo E 4
 Sports Skateboarding Nintendo E 2
 Life Nintendo E 2
 Crossing Wild World Nintendo E 4
 Till the End of Time Playstation E 2
 Woodpecker Playstation E 1
 Nintendo E 1
 New Vegas XBOX M 1
 Live & Reloaded XBOX M 2
 Streets XBOX E 4
 of Vesperia XBOX T 1
 Calibur II Nintendo T 2
 Ultimate Ninja 2 Playstation T 2
 Alliance Playstation T 4
 Adventures Nintendo T 1
 Gerdy Playstation E 1
 Pearl Nintendo E 8
 Cloud Playstation T 1
 Enter the Dragonfly Nintendo E 1


The following is 3 of the video game ratings from the ESRB rating system for video games: 
E - For Everyone
T - For Teens, 13 and up
M - For Mature, 17+

          E          
 Enter the Dragonfly Nintendo 1          E          
 Enter the Dragonfly Nintendo 1          E          
 Enter the Dragonfly Nintendo 1          E          
 Enter the Dragonfly Nintendo 1          E          
 Enter the Dragonfly Nintendo 1          E          
 Enter the Dragonfly Nintendo 1          E          
 Enter the Dragonfly Nintendo 1          E          
 Enter the Dragonfly Nintendo 1          E          
 Enter the Dragonfly Nintendo 1          E          
 Enter the Dragonfly Nintendo 1          E          
 Enter the Dragonfly Nintendo 1          E          
 Enter the Dragonfly Nintendo 1          E          
 Enter the Dragonfly Nintendo 1          E          
 Enter the Dragonfly Nintendo 1          E          
 Enter the Dragonfly Nintendo 1          E          
 Enter the Dragonfly Nintendo 1          E          
 Enter the Dragonfly Nintendo 1          E          
 Enter the Dragonfly Nintendo 1          E          
 Enter the Dragonfly Nintendo 1

Process exited with code: 0
*/
   
   
   
   
   
   
   
   