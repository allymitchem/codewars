// DESCRIPTION:
// Create a combat function that takes the player's current health and the amount of damage recieved, and returns the player's new health. Health can't be less than 0.

// my solution
int combat(int health, int damage){
  int newhealth = health - damage;
  if (newhealth < 0){
    return 0 ;
  } 
  return newhealth;
}

// other solutions
int combat(int health, int damage){
  return damage > health ? 0 : health - damage;
}

// ----
int combat(int health, int damage){
  //Code here!
  return std::max(0, health - damage);
}