

// point starts from 0
let pcpoint = 0;
let userpoint = 0;
let round=1;
while(true){


console.log("\n.....ROUND ",round,".....");
//take input from user
console.log("\nChoose one from below :\n    stone\n    paper\n    sissor\n    exit\n");

let hand = prompt("Your answer : ");
  let pc;
    //take random value of hand for computer
    let z = Math.floor(Math.random() * 3);
    if (z == 0) { pc = "stone" }
    else if (z == 1) { pc = "paper" }
    else if (z == 2) { pc = "sissor" };

    //hand  is user
    //pc is computer

    if (hand == pc) {
        console.log("Tie..");
        console.log("computer choose:"+pc);
        console.log(`your choose:`+hand);
        console.log("Your point = "+userpoint+"\nComputer point = "+pcpoint);
        round++;
    }
    else if (hand == "stone" && pc == "paper") {
        console.log("You Loose");
        console.log("computer choose:"+pc);
        console.log(`your choose:`+hand);
        pcpoint++;
        console.log("Your point = "+userpoint+"\nComputer point = "+pcpoint);
              round++;
    }
    else if (hand == "stone" && pc == "sissor") {
        console.log("You Won");
        console.log("computer choose:"+pc);
        console.log(`your choose:`+hand);
        userpoint++;
        console.log("Your point = "+userpoint+"\nComputer point = "+pcpoint);
              round++;
    }
    else if (hand == "paper" && pc == "stone") {
        console.log("You Won");
        console.log("computer choose:"+pc);
        console.log(`your choose:`+hand);
        userpoint++;
        console.log("Your point = "+userpoint+"\nComputer point = "+pcpoint);
              round++;
    }
    else if (hand == "paper" && pc == "sissor") {
        console.log("You Loose");
        console.log("computer choose:"+pc);
        console.log(`your choose:`+hand);
        pcpoint++;
        console.log("Your point = "+userpoint+"\nComputer point = "+pcpoint);
              round++;
    }
    else if (hand == "sissor" && pc == "stone") {
        console.log("You Loose");
        console.log("computer choose:"+pc);
        console.log(`your choose:`+hand);
        pcpoint++;
        console.log("Your point = "+userpoint+"\nComputer point = "+pcpoint);
              round++;
    }
    else if (hand == "sissor" && pc == "paper") {
        console.log("You Win");
        console.log("computer choose:"+pc);
        console.log(`your choose:`+hand);
        userpoint++;
        console.log("Your point = "+userpoint+"\nComputer point = "+pcpoint);
              round++;
    }
  else if(hand=="exit"){
    console.log("Thank You...\n");
  };
  
  if(userpoint==3){
    console.log("CONGRATULATIONS....YOU WON THE GAME\n");
    break;
  }
   else if(pcpoint==3){
    console.log("YOU ARE LOOSERRRR....\n");
    break;
  }


}



